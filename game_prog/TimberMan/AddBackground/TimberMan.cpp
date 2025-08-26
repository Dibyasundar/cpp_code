#include<SFML/Graphics.hpp>

using namespace sf;


int main()
{
    VideoMode vm(1920,1080);

    RenderWindow window(vm, "Timber !!!");

    // Create a texture to hold a graphic on the GPU 
    Texture textureBackground; 
    
    // Load a graphic into the texture 
    textureBackground.loadFromFile("background.png");

    // Create a sprit
    Sprite spriteBackground; 
    
    // Attach the texture to the sprite 
    spriteBackground.setTexture(textureBackground); 
    
    // Set the spriteBackground to cover the screen 
    spriteBackground.setPosition(0, 0);

    while(window.isOpen())
    {

        if (Keyboard::isKeyPressed(Keyboard::Escape)) // Handel player input
		{
			window.close();
		}

        window.clear();
        
        
        window.draw(spriteBackground);
        
        window.display();
    }

}