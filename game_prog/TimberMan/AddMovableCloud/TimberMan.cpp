//Add a movable sprite and add movement to it 
#include<SFML/Graphics.hpp>
#include<cmath>
using namespace sf;

float timex =0.0f;
int main()
{
    VideoMode vm(1920,1080);
    
    RenderWindow window(vm, "Timber !!!");
    
    Texture textureCloud; 
    
    textureCloud.loadFromFile("cloud.png");
    
    Sprite spriteCloud; 
    spriteCloud.setTexture(textureCloud); 
    spriteCloud.setPosition(-400, 200);
    int cloudDirection = 1;

    float cloudSpeed = 15; // With how much time it should cover the window width
    float cloudSpeedPerSec = 1920/cloudSpeed;

    Time dt; // Object to manipulate the time
    Clock ct; // Object to have a Clock Counter
    int y;
    while(window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Escape)) 
		{
			window.close();
		}
        dt = ct.restart();
        timex += dt.asSeconds();
		
		//Adding movement logic
        if(spriteCloud.getPosition().x > 1920)
            spriteCloud.setPosition(-400, 200);
        else
            y = 200 + cloudDirection*50 * sin(timex * 1) ;
            if(y <150)
                cloudDirection = -cloudDirection;
            spriteCloud.setPosition(spriteCloud.getPosition().x+ (dt.asSeconds()*cloudSpeedPerSec),  y);
		
        window.clear();
		
		//Drawing the cloud sprite
        window.draw(spriteCloud);
        
        window.display();
    }
}



