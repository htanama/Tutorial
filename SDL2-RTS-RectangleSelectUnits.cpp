/*
1. SDL2 library is required: https://github.com/libsdl-org/SDL/releases/tag/release-2.30.7
2. SDL2 image is required: https://github.com/libsdl-org/SDL_image/releases
3. SDL2 mixer is optional (music): https://github.com/libsdl-org/SDL_mixer/releases
4. SDL2 ttf is optional (font): https://github.com/libsdl-org/SDL_ttf/releases

This is how to draw a rectangle on the screen by pressing and holding the left mouse button.
The rectangle dimension is updated as the mouse moves and the rectangle is rendered in real-time.
When the mouse button is released the rectangle disappear, this feature is use in RTS game.

*/

#include <SDL2/SDL.h>

bool isDragging = false;
SDL_Rect rectangle = { 0, 0, 0, 0 };

void handleEvent(SDL_Event* e)
{
    if (e->type == SDL_MOUSEBUTTONDOWN && e->button.button == SDL_BUTTON_LEFT)
    {
        isDragging = true;
        rectangle.x = e->button.x;
        rectangle.y = e->button.y;
        rectangle.w = 0;  // Reset width and height
        rectangle.h = 0;
    }
    else if (e->type == SDL_MOUSEMOTION && isDragging)
    {
        int x, y;
        SDL_GetMouseState(&x, &y);
        rectangle.w = x - rectangle.x;
        rectangle.h = y - rectangle.y;
    }
    else if (e->type == SDL_MOUSEBUTTONUP && e->button.button == SDL_BUTTON_LEFT)
    {
        isDragging = false;
    }
}

void render(SDL_Renderer* renderer)
{
    // Clear the screen
    SDL_SetRenderDrawColor(renderer, 0, 128, 0, 255);
    SDL_RenderClear(renderer);

    if (isDragging)
    {
        SDL_Rect drawRect = rectangle;

        // Ensure width and height are positive
        if (drawRect.w < 0)
        {
            drawRect.x += drawRect.w;
            drawRect.w = -drawRect.w;
        }
        if (drawRect.h < 0)
        {
            drawRect.y += drawRect.h;
            drawRect.h = -drawRect.h;
        }

        // Set gray color for the rectangle
        SDL_SetRenderDrawColor(renderer, 173, 216, 230, 129);
        SDL_RenderFillRect(renderer, &drawRect);
    }

    // Present the updated frame
    SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("Retangle to Select Units", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool running = true;
    SDL_Event event;

    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
            handleEvent(&event);
        }

        render(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
