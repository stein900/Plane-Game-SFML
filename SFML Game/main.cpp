#include <SFML/Audio.hpp>
#include  <SFML/Graphics.hpp>

int main()
{
    sf::Clock clock;


    // Cr�er la fen�tre
    sf::RenderWindow window(sf::VideoMode(1500, 920), "Planum");

    window.setVerticalSyncEnabled(true);

    // Charger l'image
    sf::Texture texture, texture2, texture3, texture4;
    if (!texture.loadFromFile("X:/tout le reste/Images, videos et musiques/pngegg.png") || !texture2.loadFromFile("X:/tout le reste/Images, videos et musiques/avions vers le bas.png") || !texture3.loadFromFile("X:/tout le reste/Images, videos et musiques/avion vers le haut.png") || !texture4.loadFromFile("X:/tout le reste/Images, videos et musiques/Explosion de l'avion.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite sprite(texture);


    //--------------------------------Les nuages----------------------------------------------

    // Charger l'image
    sf::Texture clouds;
    if (!clouds.loadFromFile("X:/tout le reste/Images, videos et musiques/rain-clouds-png-27.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss(clouds);

    // Charger l'image
    sf::Texture clouds2;
    if (!clouds2.loadFromFile("X:/tout le reste/Images, videos et musiques/30-white-clouds-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss2(clouds2);

    // Charger l'image
    sf::Texture clouds3;
    if (!clouds3.loadFromFile("X:/tout le reste/Images, videos et musiques/19-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss3(clouds3);

    // Charger l'image
    sf::Texture clouds4;
    if (!clouds4.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss4(clouds4);


    // Charger l'image
    sf::Texture clouds6;
    if (!clouds6.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss6(clouds6);

    cloudss6.setPosition(200.f, 200.f);


    // Charger l'image
    sf::Texture clouds7;
    if (!clouds7.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss7(clouds7);


    // Charger l'image
    sf::Texture clouds8;
    if (!clouds8.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss8(clouds8);

    // Charger l'image
    sf::Texture clouds9;
    if (!clouds9.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss9(clouds9);

    // Charger l'image
    sf::Texture clouds10;
    if (!clouds10.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss10(clouds10);

    // Charger l'image
    sf::Texture clouds5;
    if (!clouds5.loadFromFile("X:/tout le reste/Images, videos et musiques/10-cloud-png-image.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss5(clouds5);

    //sf::Font font;
    //if (!font.loadFromFile("X:/tout le reste/Images, videos et musiques/GAME OVER font police.ttf"))
    //{
    //    return -1; // Erreur de chargement de la police
    //}
    //sf::Text message("Bonjour le monde !", font, 30);
    //message.setFillColor(sf::Color::White);
    //message.setPosition(100, 100);

    //-------------------------------------------------Missiles--------------------------------------------------------


        // Charger l'image
    sf::Texture Missile1;
    if (!Missile1.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Missileee1(Missile1);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth2 = Missile1.getSize().x / 2;
    int newHeight2 = Missile1.getSize().y / 2;


    // D�finir l'�chelle de l'image
    Missileee1.setScale(.09f, .09f); // Double la taille de l'image




    // Charger l'image
    sf::Texture Missile2;
    if (!Missile2.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Missileee2(Missile2);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth3 = Missile2.getSize().x / 2;
    int newHeight3 = Missile2.getSize().y / 2;


    // D�finir l'�chelle de l'image
    Missileee2.setScale(.09f, .09f); // Double la taille de l'image


    // Charger l'image
    sf::Texture Missile3;
    if (!Missile3.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Missileee3(Missile3);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth4 = Missile3.getSize().x / 2;
    int newHeight4 = Missile3.getSize().y / 2;


    // D�finir l'�chelle de l'image
    Missileee3.setScale(.09f, .09f); // Double la taille de l'image


    Missileee1.setPosition(1600.f, 689);

    Missileee2.setPosition(1600.f, 463);

    Missileee3.setPosition(1600.f, 500);

    //---------------------------------Texte-----------------------------------------

    sf::Font font;
    font.loadFromFile("arial.ttf");
    sf::Text text;
    text.setString("GAME OVER");
    text.setCharacterSize(25);
    text.setFillColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold);
    text.setPosition(300, 300);
    sf::Text::Underlined;



    // Charger l'image
    sf::Texture textOV;
    if (!textOV.loadFromFile("X:/tout le reste/Images, videos et musiques/Game over text picture.png"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite textOVV(textOV);


    // D�finir l'�chelle de l'image
    textOVV.setScale(.005f, .005f); // Double la taille de l'image

    textOVV.setPosition(3000, -3000);

    //------------------------------------------------------------------


    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth = texture.getSize().x / 2;
    int newHeight = texture.getSize().y / 2;


    // D�finir l'�chelle de l'image
    sprite.setScale(.2f, .2f); // Double la taille de l'image

    sprite.setRotation(0); // Double la taille de l'image



    // Position initiale du sprite
    float x = 0.f;
    float y = 0.f;

    // Charger l'image d'arri�re-plan
    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("X:/tout le reste/Images, videos et musiques/Nuage vu de haut rogner - dall-e.PNG"))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite pour l'arri�re-plan
    sf::Sprite background(backgroundTexture);


    // D�finir l'�chelle de l'image
    background.setScale(1.f, 1.f); // Double la taille de l'image

    //------------------------------------Musique--------------------------------------------------------

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("X:/tout le reste/Images, videos et musiques/Musique/bruits de vent.wav"))
        return EXIT_FAILURE;


    music.setLoop(window.isOpen());

    // Play the music
    music.play();

    // Load a music to play
    sf::Music music2;
    if (!music2.openFromFile("X:/tout le reste/Images, videos et musiques/Musique/No-copyr- smooth music.wav"))
        return EXIT_FAILURE;


    music2.setLoop(window.isOpen());

    // Play the music
    music2.play();


    float speed = .05f;
    float speeds = .0f;

    // Boucle principale
    while (window.isOpen())
    {
        // G�rer les �v�nements
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Fermer la fen�tre lorsqu'on clique sur la croix
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            sf::Time backgroundTexture = sf::seconds(0.01f);

            // G�rer les entr�es de mouvement
            if (event.type == sf::Event::KeyPressed)
            {
                switch (event.key.code)
                {
                case sf::Keyboard::Left:
                    x -= 0.5f; // D�placer le sprite vers la gauche
                    sprite.setTexture(texture);
                    break;

                case sf::Keyboard::Right:
                    x += 0.5f; // D�placer le sprite vers la droite
                    break;

                case sf::Keyboard::Up:
                    y -= 0.5f; // D�placer le sprite vers le haut
                    sprite.setTexture(texture3);
                    break;

                case sf::Keyboard::Down:
                    y += 0.5f; // D�placer le sprite vers le bas
                    sprite.setTexture(texture2);
                    break;
                case sf::Keyboard::Q:
                    x -= 0.5f; // D�placer le sprite vers la gauche
                    sprite.setTexture(texture);
                    break;

                case sf::Keyboard::D:
                    x += 0.5f; // D�placer le sprite vers la droite
                    break;

                case sf::Keyboard::Z:
                    y -= 0.5f; // D�placer le sprite vers le haut
                    sprite.setTexture(texture3);
                    break;

                case sf::Keyboard::S:
                    y += 0.5f; // D�placer le sprite vers le bas
                    sprite.setTexture(texture2);
                    break;
                case sf::Keyboard::Escape:
                    window.close(); //fermer la fenetre
                    break;
                default:
                    break;
                }

                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::G)
                {
                    int newWidth = texture.getSize().x / 2;
                    int newHeight = texture.getSize().y / 2;
                    sprite.setScale(.2f, .2f);
                    sprite.setRotation(0);
                    sprite.setPosition(50,250);
                    textOVV.setScale(.005f, .005f);
                    textOVV.setPosition(3000, -3000);
                    sprite.setTexture(texture);
                    window.display();
                    x = 0.f;
                    y = 0.f;

                }

            }



        }

        //---------------------------------------Les spawns des nuages, les trajectoires al�atoire et leurs vitesses---------------------------------------------------

        window.draw(cloudss);
        sf::Vector2f cloudPosition = cloudss.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition.x < -280) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss.move(-1.9,0); //Bouge vers la gauche

        window.draw(cloudss2);
        sf::Vector2f cloudPosition2 = cloudss2.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition2.x < -480) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss2.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss2.move(-1.2, 0); //Bouge vers la gauche

        window.draw(cloudss3);
        sf::Vector2f cloudPosition3 = cloudss3.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition3.x < -1760) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss3.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss3.move(-1.2, 0); //Bouge vers la gauche

        window.draw(cloudss4);
        sf::Vector2f cloudPosition4 = cloudss4.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition4.x < -1760) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss4.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss4.move(-3.2, 0); //Bouge vers la gauche

        window.draw(cloudss6);
        sf::Vector2f cloudPosition6 = cloudss6.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition6.x < -1760) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss6.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss6.move(-3.2, -2); //Bouge vers la gauche

        window.draw(cloudss7);
        sf::Vector2f cloudPosition7 = cloudss7.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition7.x < -760) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss7.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss7.move(-.7, -.5); //Bouge vers la gauche

        window.draw(cloudss8);
        sf::Vector2f cloudPosition8 = cloudss8.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition8.x < -3000) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss8.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss8.move(-1.2, -.4); //Bouge vers la gauche

        window.draw(cloudss9);
        sf::Vector2f cloudPosition9 = cloudss9.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition9.x < -3000) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
            cloudss9.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss9.move(-2.2, -.4); //Bouge vers la gauche

        window.draw(cloudss10);
        sf::Vector2f cloudPosition10 = cloudss9.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition10.x < -3000) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 70) + 20; //prend une hauteur al�atoire
            cloudss10.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        cloudss10.move(-.001, 0); //Bouge vers la gauche

        window.draw(sprite);
        sf::Vector2f spritPosition = sprite.getPosition(); //Recup la position de la pok�ball
        if (spritPosition.x < -380  || spritPosition.y < -135 || spritPosition.y > 950 || spritPosition.x > 1600) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (150, 150); //prend une hauteur al�atoire
            sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }



        //------------------------------------------Les spawns des missiles, les trajectoires al�atoire et leurs vitesses-----------------------------------------------------------

        window.draw(Missileee1);
        sf::Vector2f cloudPosition15 = Missileee1.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition15.x < -280) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 24; //prend une hauteur al�atoire
            Missileee1.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        Missileee1.move(-5.1, 0); //Bouge vers la gauche

        window.draw(Missileee2);
        sf::Vector2f cloudPosition16 = Missileee2.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition16.x < -280) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 200; //prend une hauteur al�atoire
            Missileee2.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        Missileee2.move(-3.1, 0); //Bouge vers la gauche

        window.draw(Missileee3);
        sf::Vector2f cloudPosition17 = Missileee3.getPosition(); //Recup la position de la pok�ball
        if (cloudPosition17.x < -280) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (rand() % 680) + 200; //prend une hauteur al�atoire
            Missileee3.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }
        Missileee3.move(-4.4, 0); //Bouge vers la gauche



        //---------------------------------------------------Collision system-----------------------------------------------------------------------



            // D�tecter la collision entre l'avion et le missile
        if (sprite.getGlobalBounds().intersects(Missileee3.getGlobalBounds()))
        {
            sprite.setScale(.00005f, .000005);

            textOVV.setScale(.6f, .6f); // Double la taille de l'image

            textOVV.setPosition(280, -30);
        }

        // D�tecter la collision entre l'avion et le missile
        if (sprite.getGlobalBounds().intersects(Missileee2.getGlobalBounds()))
        {
            sprite.setScale(.00005f, .000005);

            textOVV.setScale(.6f, .6f); // Double la taille de l'image

            textOVV.setPosition(280, -30);
        }

        // D�tecter la collision entre l'avion et le missile
        if (sprite.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
        {
            sprite.setScale(.00005f, .000005);



            textOVV.setScale(.6f, .6f); // Double la taille de l'image

            textOVV.setPosition(280, -30);
        }

        //---------------------------------------------------------------------------------------------------------------------------------


        //window.draw(sprite);
        //sf::Vector2f spritPosition85 = sprite.getPosition(); //Recup la position de la pok�ball
        //if (spritPosition85.x < -380 || spritPosition.y < -135 || spritPosition.y > 750 || spritPosition.x > 1000) //si c'est � gauche de l'�cran en hors champs
        //{
        //    sprite.setTexture(sf::Texture());
        //    sf::Text text;
        //    text.setString("GAME OVER");
        //    text.setCharacterSize(25);
        //    text.setFillColor(sf::Color::Red);
        //    text.setStyle(sf::Text::Bold |
        //        sf::Text::Underlined);
        //    text.setPosition(300, 300);
        //  
        //}


        //window.draw(sprite);
        //sf::Vector2f spritPosition = sprite.getPosition(); //Recup la position de la pok�ball
        //
        //if (spritPosition.x < -380) //si c'est � gauche de l'�cran en hors champs
        //{
        //    int y = (750, 750); //prend une hauteur al�atoire
        //    sprite.setPosition(350, 650); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        //}

        //if (spritPosition.y < -135) //si c'est � gauche de l'�cran en hors champs
        //{
        //    int y = (150, 150); //prend une hauteur al�atoire
        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        //}

        //if (spritPosition.y > 750) //si c'est � gauche de l'�cran en hors champs
        //{
        //    int y = (150, 150); //prend une hauteur al�atoire
        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        //}


        //if (spritPosition.x > 1000) //si c'est � gauche de l'�cran en hors champs
        //{
        //    int y = (150, 150); //prend une hauteur al�atoire
        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        //}

        // Modifier la position de l'image en fonction du temps �coul� depuis la derni�re frame
        //float deltaTime = clock.getElapsedTime().asSeconds();
        //background.move(speeds/* * deltaTime*/, speed * deltaTime);

        //// Si l'image atteint un bord de la fen�tre, changer sa direction de d�placement
        //if (background.getPosition().x > 0 || background.getPosition().x + background.getLocalBounds().width < window.getSize().x)
        //{
        //    speed = -speed;
        //}
        //if (background.getPosition().y > 0 || background.getPosition().y + background.getLocalBounds().height < window.getSize().y)
        //{
        //    speed = -speed;
        //}

        //// V�rifier si 1 seconde s'est �coul�e
        //if (clock.getElapsedTime().asSeconds() >= .05f)
        //{
        //        background.setPosition(1.f, 1.f);
        //    // R�initialiser l'horloge
        //    clock.restart();
        //}



        //// V�rifier si 1 seconde s'est �coul�e
        //if (clock.getElapsedTime().asSeconds() >= .05f)
        //{
        //    // Alterner les sprites
        //    if (background.getTexture() == &backgroundTexture)
        //    {
        //        background.setTexture(backgroundTexture2);
        //        background2.setTexture(backgroundTexture);
        //    }
        //    else
        //    {
        //        background.setTexture(backgroundTexture);
        //        background2.setTexture(backgroundTexture2);
        //    }

        //    // R�initialiser l'horloge
        //    clock.restart();
        //}
     
        // Dessiner le nuage
        //window.draw(cloudss);

        //// Dessiner le nuage
        //window.draw(cloudss2);

        //// Dessiner le nuage
        //window.draw(cloudss10);


        // Mettre � jour la position du sprite
        sprite.move(x, y);

        // Effacer la fen�tre
        window.clear();

        // Dessiner le sprite
        window.draw(background);

        // Dessiner le nuage
        window.draw(cloudss3);

        // Dessiner le nuage
        window.draw(cloudss4);

        // Dessiner le nuage
        window.draw(cloudss6);

        // Dessiner le nuage
        window.draw(cloudss7);

        // Dessiner le nuage
        window.draw(Missileee1);

        // Dessiner le nuage
        window.draw(Missileee2);

        // Dessiner le nuage
        window.draw(Missileee3);

        // Dessiner le sprite
        window.draw(sprite);  //----------PC------------

        // Dessiner le nuage
        window.draw(cloudss8);

        // Dessiner le nuage
        window.draw(cloudss9);

        // Dessiner le nuage
        window.draw(text);


        // Dessiner le nuage
        window.draw(textOVV);

        // Mettre � jour la fen�tre
        window.display();



 
    }


    return EXIT_SUCCESS;
}











//("X:/tout le reste/Images, videos et musiques/"))
