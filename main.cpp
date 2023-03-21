#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <fstream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 800), "Hoop Dunk");
    sf::Clock clock;

    // Définition des chemins d'accès des fichiers de ressources

    const std::string Background = "C:/Game/resources/Background.png";

    const std::string BasketballString = "C:/Game/resources/Ball-resize.png";

    const std::string WallUp = "C:/Game/resources/sgsgvssdrg - Copie.png";
    const std::string WallDown = "C:/Game/resources/sgsgvssdrg.png";
    const std::string HoopDown = "C:/Game/resources/HoopDown.png";
    const std::string HoopUp = "C:/Game/resources/HoopUp.png";

    const std::string WallUp2 = "C:/Game/resources/sgsgvssdrg - Copie.png";
    const std::string WallDown2 = "C:/Game/resources/sgsgvssdrg.png";
    const std::string HoopDown2 = "C:/Game/resources/HoopDown.png";
    const std::string HoopUp2 = "C:/Game/resources/HoopUp.png";

    const std::string cloud1 = "C:/Game/resources/12-cloud-png-image.png";
    const std::string cloud2 = "C:/Game/resources/19-cloud-png-image.png";
    const std::string cloud3 = "C:/Game/resources/30-white-clouds-png-image.png";
    const std::string cloud4 = "C:/Game/resources/rain-clouds-png-27.png";

    const std::string aviondeChasse = "C:/Game/resources/Avion de chasse de passage.png";

    const std::string MenuS = "C:/Game/resources/Ball.png";
    const std::string LockerS = "C:/Game/resources/Locker casier.png";
    const std::string GAMEOVERS = "C:/Game/resources/Game over text picture.png";

    const std::string FontT = "C:/Game/resources/arial.ttf";

    // Charger les textures
    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile(Background);
    /* sf::Texture birdTexture, birdTexture2;
     birdTexture.loadFromFile("X:/tout le reste/Images, videos et musiques/bird flap high.png") || birdTexture2.loadFromFile("X:/tout le reste/Images, videos et musiques/bird flap low.png");*/
    sf::Texture birdTexture;
    if (!birdTexture.loadFromFile(BasketballString))
    {
        return 1; // Erreur de chargement de l'image
    }
    sf::Texture pipeTexture;
    pipeTexture.loadFromFile(WallDown);
    sf::Texture pipeTexture2;
    pipeTexture2.loadFromFile(WallUp);

    sf::Texture hoopD;
    hoopD.loadFromFile(HoopDown);
    sf::Texture hoopU;
    hoopU.loadFromFile(HoopUp);

    sf::Texture pipeTexture22;
    pipeTexture2.loadFromFile(WallDown2);
    sf::Texture pipeTexture222;
    pipeTexture22.loadFromFile(WallUp2);

    sf::Texture hoopD2;
    hoopD2.loadFromFile(HoopDown2);
    sf::Texture hoopU2;
    hoopU2.loadFromFile(HoopUp2);

    // Créer les sprites
    sf::Sprite backgroundSprite(backgroundTexture);
    sf::Sprite BallSprite(birdTexture);
    sf::Sprite invisbleWallUpSprite(pipeTexture2);
    sf::Sprite invisbleWallDownSprite(pipeTexture);
    sf::Sprite HoopSprite(hoopD);
    sf::Sprite HoopSprite2(hoopU);

    sf::Sprite invisbleWallUpSprite2(pipeTexture22);
    sf::Sprite invisbleWallDownSprite2(pipeTexture2);
    sf::Sprite HoopSprite22(hoopD2);
    sf::Sprite HoopSprite222(hoopU2);

    // Positionner les sprites
    backgroundSprite.setPosition(0, 0);
    BallSprite.setPosition(150, 400);
    invisbleWallUpSprite.setPosition(600, -500);
    invisbleWallDownSprite.setPosition(600, 600);
    HoopSprite.setPosition(600, 600);

    invisbleWallUpSprite.setScale(0.000059, .000001);
    invisbleWallDownSprite.setScale(0.00000059, .000001);
    HoopSprite.setScale(.000000049, .0000049);
    HoopSprite2.setScale(.000000049, .0000049);

    invisbleWallUpSprite2.setScale(0.000059, .000001);
    invisbleWallDownSprite2.setScale(0.00000059, .000001);
    HoopSprite22.setScale(.000000049, .0000049);
    HoopSprite222.setScale(.000000049, .0000049);

    BallSprite.setScale(.00004, .000004);
    BallSprite.setTexture(birdTexture);
    BallSprite.setRotation(20);
    BallSprite.setOrigin(200, 200);

    //--------------------------------Les nuages----------------------------------------------

    // Charger l'image
    sf::Texture clouds;
    if (!clouds.loadFromFile(cloud4))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss(clouds);

    // Charger l'image
    sf::Texture clouds2;
    if (!clouds2.loadFromFile(cloud3))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss2(clouds2);
    cloudss2.setPosition(354, 394);


    // Charger l'image
    sf::Texture clouds3;
    if (!clouds3.loadFromFile(cloud2))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss3(clouds3);

    // Charger l'image
    sf::Texture clouds4;
    if (!clouds4.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss4(clouds4);


    // Charger l'image
    sf::Texture clouds6;
    if (!clouds6.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss6(clouds6);

    cloudss6.setPosition(200.f, 200.f);


    // Charger l'image
    sf::Texture clouds7;
    if (!clouds7.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss7(clouds7);

    sf::Color couleur = cloudss7.getColor();
    couleur.a = 128; // valeur alpha de 128 (50% de transparence)
    cloudss7.setColor(couleur);



    // Charger l'image
    sf::Texture clouds72;
    if (!clouds72.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss72(clouds72);
    cloudss72.setColor(couleur);

    // Charger l'image
    sf::Texture clouds73;
    if (!clouds73.loadFromFile(cloud3))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss73(clouds73);
    cloudss73.setColor(couleur);
    cloudss73.setPosition(20, 190);



    // Charger l'image
    sf::Texture clouds733;
    if (!clouds733.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss733(clouds733);
    cloudss733.setColor(couleur);

    cloudss733.setPosition(200, 452);




    // Charger l'image
    sf::Texture clouds8;
    if (!clouds8.loadFromFile(cloud3))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss8(clouds8);
    cloudss8.setPosition(120, 325);

    // Charger l'image
    sf::Texture clouds9;
    if (!clouds9.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss9(clouds9);

    // Charger l'image
    sf::Texture clouds10;
    if (!clouds10.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss10(clouds10);

    // Charger l'image
    sf::Texture clouds100;
    if (!clouds100.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss100(clouds100);

    cloudss100.setPosition(-600, 0);


    // Charger l'image
    sf::Texture clouds101;
    if (!clouds101.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss101(clouds101);

    cloudss101.setPosition(-660, 0);

    // Charger l'image
    sf::Texture clouds11;
    if (!clouds11.loadFromFile(cloud1))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss11(clouds11);

    // Charger l'image
    sf::Texture clouds12;
    if (!clouds12.loadFromFile(cloud3))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite cloudss12(clouds12);

    cloudss12.setPosition(250, 452);


    // Charger l'image
    sf::Texture avionChasse;
    if (!avionChasse.loadFromFile(aviondeChasse))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite avionChassee(avionChasse);

    avionChassee.setScale(.1, .1);
    avionChassee.setPosition(586, 321);


    //--------------------------------------------MENU ET AFFICHAGE----------------------------------------------------

    // Charger GAME OVER
    sf::Texture textOV;
    if (!textOV.loadFromFile(GAMEOVERS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite textOVV(textOV);


    // Définir l'échelle de l'image
    textOVV.setScale(.005f, .005f); // Double la taille de l'image
    textOVV.setPosition(3000, -3000);

    // Charger Menu Principal
    sf::Texture textOV2;
    if (!textOV2.loadFromFile(MenuS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite textOVV2(textOV2);


    // Définir l'échelle de l'image
    textOVV2.setScale(.1f, .1f);
    textOVV2.setPosition(150, 230);


    // Charger le casier
    sf::Texture locker;
    if (!locker.loadFromFile(LockerS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Créer le sprite (l'image affichée dans la fenêtre)
    sf::Sprite lockerr(locker);


    // Définir l'échelle de l'image
    lockerr.setScale(.005f, .005f);
    lockerr.setPosition(3000, -3000);


    // Vitesse de la ball
    float birdSpeed = 0;
    int level = 1;

    //-----------------------------------------Animation rotation--------------------------------------------------------

    float angle = 0.0f;
    float rotationBall = 0;

    float ballMenuMove = 1;

    // position en y du soleil
    int PoseYBall = 300;
    // le nombre de pixel de déplacement du soleil à chaque tour de la boucle d'animation
    int VarBallMove = -1;

    bool startGame = false;


    //---------------------------------------------------------système de score-----------------------------------------------------------------

    int score = 0;

    sf::Font font;
    font.loadFromFile(FontT);

    sf::Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(34);
    scoreText.setFillColor(sf::Color::Black);
    scoreText.setStyle(sf::Text::Bold);
    scoreText.setPosition(-250, -510);

    sf::Clock clock2;
    float elapsed2 = 0.0f;

    //résulat du score
    int scoreRes = 0;
    sf::Font font2;
    font2.loadFromFile(FontT);
    sf::Text scoreTextR;
    scoreTextR.setFont(font2);
    scoreTextR.setCharacterSize(24);
    scoreTextR.setFillColor(sf::Color::Black);
    scoreTextR.setStyle(sf::Text::Bold);
    scoreTextR.setPosition(-250, -510);


    //Best score
    sf::Font font3;
    font3.loadFromFile(FontT);
    sf::Text bestscoreTextR;
    bestscoreTextR.setFont(font3);
    bestscoreTextR.setCharacterSize(24);
    bestscoreTextR.setFillColor(sf::Color::Black);
    bestscoreTextR.setStyle(sf::Text::Bold);
    bestscoreTextR.setPosition(180, 100);


    //Best score
    sf::Font font4;
    font4.loadFromFile(FontT);
    sf::Text Replaytext;
    Replaytext.setFont(font4);
    Replaytext.setString("Press 'Z' or 'N' for play the game");
    Replaytext.setCharacterSize(24);
    Replaytext.setFillColor(sf::Color::Black);
    Replaytext.setStyle(sf::Text::Bold);
    Replaytext.setPosition(105, 650);

    //Best score
    sf::Font font5;
    font5.loadFromFile(FontT);
    sf::Text levelGameTexte;
    levelGameTexte.setFont(font5);
    levelGameTexte.setCharacterSize(24);
    levelGameTexte.setFillColor(sf::Color::Black);
    levelGameTexte.setStyle(sf::Text::Bold);
    levelGameTexte.setPosition(450, 10);


    //Best score
    sf::Font font6;
    font6.loadFromFile(FontT);
    sf::Text LockerDescriptiontext;
    LockerDescriptiontext.setFont(font6);
    LockerDescriptiontext.setString("you can choose a skin by pressing a button according to your level and your best score.");
    LockerDescriptiontext.setCharacterSize(12);
    LockerDescriptiontext.setFillColor(sf::Color::Black);
    LockerDescriptiontext.setStyle(sf::Text::Bold);
    LockerDescriptiontext.setPosition(-5214, -5421);


    //Best score
    sf::Font font7;
    font7.loadFromFile(FontT);
    sf::Text Notenough;
    Notenough.setFont(font7);
    Notenough.setString("Not enough.");
    Notenough.setCharacterSize(56);
    Notenough.setFillColor(sf::Color::Red);
    Notenough.setStyle(sf::Text::Bold);
    Notenough.setPosition(-5214, -5421);


    //-------------------------------------------------------Sauvegarde du score---------------------------------------------------------

    // Chargement du score à partir du fichier "score.txt"
    int BestScore = 0;
    std::ifstream inputFile("score.txt");
    if (inputFile.is_open()) {
        inputFile >> BestScore;
        inputFile.close();
    }
    bestscoreTextR.setString("your best score is: " + std::to_string(BestScore));

    //--------------------------------------Sauvegarde du level-------------------------------------------------


    // Chargement du score à partir du fichier "score.txt"
    int levelGame = 0;
    std::ifstream inputFile2("level.txt");
    if (inputFile2.is_open()) {
        inputFile2 >> levelGame;
        inputFile2.close();
    }
    levelGameTexte.setString("level: " + std::to_string(levelGame));

    // Boucle principale du jeu
    while (window.isOpen())
    {
        // Gérer les événements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space || event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
            {
                rotationBall += 50.5f;
                BallSprite.setRotation(rotationBall);
                birdSpeed = -16;
            }

            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                window.close();

            }

            else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::N || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z || event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Right)
            {
                level = 2;
                score = 0;
                birdSpeed = 0;
                HoopSprite.setScale(.29, .29);
                HoopSprite.setPosition(-1400, -600);
                HoopSprite2.setScale(.29, .29);
                HoopSprite2.setPosition(1400, 600);
                bestscoreTextR.setPosition(-250, -510);
                scoreText.setPosition(223, 10);
                scoreTextR.setPosition(-250, -510);
                backgroundSprite.setPosition(0, 0);
                BallSprite.setPosition(250, 400);
                invisbleWallUpSprite.setPosition(-1400, -500);
                invisbleWallDownSprite.setPosition(-1400, -600);
                textOVV.setScale(.005f, .005f);
                textOVV.setPosition(3000, -3000);
                invisbleWallUpSprite.setScale(0.59, 1);
                invisbleWallDownSprite.setScale(0.59, 1);
                BallSprite.setScale(.2, .2);
                BallSprite.setTexture(birdTexture);
                textOVV2.setScale(.000005f, .000005f);
                textOVV2.setPosition(-3000, -3000);
                invisbleWallUpSprite.setScale(0.059, 1);
                invisbleWallDownSprite.setScale(0.059, 1);
                lockerr.setScale(.005f, .005f);
                Replaytext.setPosition(-5130, -4650);
                LockerDescriptiontext.setPosition(-5214, -5421);
                lockerr.setPosition(3000, -3000);
                Notenough.setPosition(-5214, -5421);

                invisbleWallUpSprite.setPosition(sf::Vector2f(1040, 350 - 800));
                invisbleWallDownSprite.setPosition(sf::Vector2f(785, 350 + 50));
                HoopSprite.setPosition(sf::Vector2f(800, 350));
                HoopSprite2.setPosition(sf::Vector2f(800, 350));
                window.display();

            }
        }

        //---------------------------------------------------------système de score-----------------------------------------------------------------

        // Mettre à jour le score toutes les secondes
        elapsed2 += clock2.restart().asSeconds();
        if (elapsed2 >= 1.6f) {
            score++;
            elapsed2 -= 1.6f;
        }

        // Mettre à jour le texte affiché à l'écran
        scoreText.setString("Score: " + std::to_string(score));

        //---------------------------------------Les spawns des nuages, les trajectoires aléatoire et leurs vitesses---------------------------------------------------

        window.draw(cloudss);
        sf::Vector2f cloudPosition52 = cloudss.getPosition(); //Recup la position de la pokéball
        if (cloudPosition52.x < -280) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss.move(-1.9, 0); //Bouge vers la gauche

        window.draw(BallSprite);
        sf::Vector2f cloudPosition = BallSprite.getPosition(); //Recup la position de la pokéball
        if (cloudPosition.y > 800) //si c'est à gauche de l'écran en hors champs
        {

        }

        window.draw(cloudss2);
        sf::Vector2f cloudPosition2 = cloudss2.getPosition(); //Recup la position de la pokéball
        if (cloudPosition2.x < -480) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss2.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss2.move(-1.2, 0); //Bouge vers la gauche

        window.draw(cloudss3);
        sf::Vector2f cloudPosition3 = cloudss3.getPosition(); //Recup la position de la pokéball
        if (cloudPosition3.x < -1760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss3.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss3.move(-1.2, 0); //Bouge vers la gauche

        window.draw(cloudss4);
        sf::Vector2f cloudPosition4 = cloudss4.getPosition(); //Recup la position de la pokéball
        if (cloudPosition4.x < -1760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss4.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss4.move(-3.2, 0); //Bouge vers la gauche

        window.draw(cloudss6);
        sf::Vector2f cloudPosition6 = cloudss6.getPosition(); //Recup la position de la pokéball
        if (cloudPosition6.x < -1760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss6.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss6.move(-3.2, 0); //Bouge vers la gauche

        window.draw(cloudss7);
        sf::Vector2f cloudPosition7 = cloudss7.getPosition(); //Recup la position de la pokéball
        if (cloudPosition7.x < -760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss7.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss7.move(-.09, 0); //Bouge vers la gauche

        window.draw(cloudss72);
        sf::Vector2f cloudPosition72 = cloudss7.getPosition(); //Recup la position de la pokéball
        if (cloudPosition72.x < -760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss72.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss72.move(-.01, 0); //Bouge vers la gauche

        window.draw(cloudss73);
        sf::Vector2f cloudPosition73 = cloudss73.getPosition(); //Recup la position de la pokéball
        if (cloudPosition73.x < -460) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss73.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss73.move(-1.3, 0); //Bouge vers la gauche


        window.draw(cloudss733);
        sf::Vector2f cloudPosition723 = cloudss733.getPosition(); //Recup la position de la pokéball
        if (cloudPosition723.x < -760) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss733.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss733.move(-.01, -.2); //Bouge vers la gauche

        window.draw(cloudss8);
        sf::Vector2f cloudPosition8 = cloudss8.getPosition(); //Recup la position de la pokéball
        if (cloudPosition8.x < -460) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss8.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss8.move(-1.2, 0); //Bouge vers la gauche

        window.draw(cloudss9);
        sf::Vector2f cloudPosition9 = cloudss9.getPosition(); //Recup la position de la pokéball
        if (cloudPosition9.x < -3000) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 680) + 20; //prend une hauteur aléatoire
            cloudss9.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss9.move(-2.2, 0); //Bouge vers la gauche

        window.draw(cloudss10);
        sf::Vector2f cloudPosition10 = cloudss10.getPosition(); //Recup la position de la pokéball
        if (cloudPosition10.x < -3000) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 70) + 20; //prend une hauteur aléatoire
            cloudss10.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss10.move(-.001, 0); //Bouge vers la gauche

        window.draw(cloudss11);
        sf::Vector2f cloudPosition11 = cloudss11.getPosition(); //Recup la position de la pokéball
        if (cloudPosition11.x < -1650) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 70) + 20; //prend une hauteur aléatoire
            cloudss11.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss11.move(-3.1, 0); //Bouge vers la gauche

        window.draw(cloudss12);
        sf::Vector2f cloudPosition12 = cloudss12.getPosition(); //Recup la position de la pokéball
        if (cloudPosition12.x < -460) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 70) + 20; //prend une hauteur aléatoire
            cloudss12.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        cloudss12.move(-2.2, 0); //Bouge vers la gauche

        window.draw(avionChassee);
        sf::Vector2f avionChassee1 = avionChassee.getPosition(); //Recup la position de la pokéball
        if (avionChassee1.x < -5460) //si c'est à gauche de l'écran en hors champs
        {
            int y = (rand() % 800) + 20; //prend une hauteur aléatoire
            avionChassee.setPosition(sf::Vector2f(1000, y)); //Remet la pokéball à droite hors champs à la hauteur piochée au dessus
        }
        avionChassee.move(-10.2, 0); //Bouge vers la gauche



        // Mettre à jour la position du ballon
        birdSpeed += 1;
        BallSprite.move(0, birdSpeed);


        ballMenuMove += 0.005;
        textOVV2.move(0, ballMenuMove);

        if (ballMenuMove == 0.009)
        {
            ballMenuMove -= 0.005;
            textOVV2.move(0, ballMenuMove);
        }

        else if (ballMenuMove == 1)
        {
            ballMenuMove += 1;
        }

        // Calcul des nouvelles positions des objets
// ici mvt du soleil en suivant une cosinusoide
        PoseYBall += VarBallMove;
        int PoseYBallCos = 300 - 300 * cos((PoseYBall * .57 + 280) / 300); // 1.57 = pi/2
        if (PoseYBall == 210) VarBallMove = 1;
        if (PoseYBall == 300) VarBallMove = -1;
        textOVV2.setPosition(160, PoseYBallCos);



        // Mettre à jour la position des invisbles wall et du hoop


        invisbleWallUpSprite.move(-6.6, 0);
        invisbleWallDownSprite.move(-6.6, 0);
        HoopSprite.move(-6.6, 0);
        HoopSprite2.move(-6.6, 0);

        // Recycler les tuyaux quand ils sortent de l'écran
        if (invisbleWallUpSprite.getPosition().x < -100)
        {
            startGame = true;
            int y = (rand() % 570 + 100);
            invisbleWallUpSprite.setPosition(sf::Vector2f(840, y - 800));
            invisbleWallDownSprite.setPosition(sf::Vector2f(585, y + 50));
            HoopSprite.setPosition(sf::Vector2f(600, y));
            HoopSprite2.setPosition(sf::Vector2f(600, y));
        }

        invisbleWallUpSprite2.move(-6.6, 0);
        invisbleWallDownSprite2.move(-6.6, 0);
        HoopSprite22.move(-6.6, 0);
        HoopSprite222.move(-6.6, 0);

        // Recycler les tuyaux quand ils sortent de l'écran
        if (invisbleWallUpSprite2.getPosition().x < -100)
        {
            startGame = true;
            int y = (rand() % 570 + 100);
            invisbleWallUpSprite2.setPosition(sf::Vector2f(1900, y - 800));
            invisbleWallDownSprite2.setPosition(sf::Vector2f(1484, y + 50));
            HoopSprite22.setPosition(sf::Vector2f(1200, y));
            HoopSprite222.setPosition(sf::Vector2f(1200, y));
        }

        //------------------------------------------Sauvegarde du score-------------------------------------------------------

        static sf::Clock clock3;
        if (clock3.getElapsedTime().asSeconds() > 5) {
            std::ofstream outputFile("score.txt");
            if (outputFile.is_open())
            {
                outputFile << BestScore;
                outputFile.close();
            }
            clock3.restart();
        }


        static sf::Clock clock6;
        if (clock6.getElapsedTime().asSeconds() > 5) {
            std::ofstream outputFile2("level.txt");
            if (outputFile2.is_open())
            {
                outputFile2 << levelGame;
            }
            clock6.restart();
        }



        // sprite ça mere
        window.clear();
        window.draw(backgroundSprite);
        window.draw(cloudss12);
        window.draw(avionChassee);
        /*    window.draw(cloudss100);*/
        window.draw(cloudss101);
        window.draw(cloudss);
        window.draw(cloudss3);
        window.draw(cloudss4);
        window.draw(cloudss6);
        window.draw(cloudss8);
        /*window.draw(cloudss9);*/
        window.draw(cloudss7);
        window.draw(cloudss72);
        window.draw(cloudss73);
        window.draw(cloudss733);
        window.draw(cloudss2);
        window.draw(cloudss11);
        //window.draw(invisbleWallUpSprite);
        //window.draw(invisbleWallDownSprite);
        window.draw(HoopSprite2);
        window.draw(HoopSprite22);
        window.draw(BallSprite);
        window.draw(HoopSprite);
        window.draw(HoopSprite222);
        window.draw(textOVV);
        window.draw(textOVV2);
        window.draw(scoreText);
        window.draw(scoreTextR);
        window.draw(Replaytext);
        window.draw(lockerr);
        window.draw(bestscoreTextR);
        window.draw(levelGameTexte);
        window.draw(LockerDescriptiontext);
        window.draw(Notenough);


        window.display();

        // colision la
        if (BallSprite.getGlobalBounds().intersects(invisbleWallUpSprite.getGlobalBounds())
            || BallSprite.getGlobalBounds().intersects(invisbleWallDownSprite.getGlobalBounds()))
        {

            if (BestScore < score)
            {
                BestScore = score;

            }

            if (score >= 2)
            {
                levelGame += score;
            }

            scoreRes = score;
            scoreTextR.setString("your current score is : " + std::to_string(scoreRes));
            bestscoreTextR.setString("your best score is: " + std::to_string(BestScore));
            scoreTextR.setPosition(160, 50);
            bestscoreTextR.setPosition(180, 100);
            levelGameTexte.setString("level: " + std::to_string(levelGame));
            score = 0;
            scoreText.setPosition(-250, -510);
            BallSprite.setScale(.00005f, .000005);
            HoopSprite.setScale(.00005f, .000005);
            HoopSprite2.setScale(.00005f, .000005);
            textOVV.setScale(.29f, .29f);
            textOVV.setPosition(90, -40);
            Replaytext.setPosition(105, 650);
            invisbleWallUpSprite.move(0, 0);
            invisbleWallDownSprite.move(0, 0);
            invisbleWallUpSprite.setScale(0.000059, .000001);
            invisbleWallDownSprite.setScale(0.00000059, .000001);
            textOVV2.setScale(.1f, .1f);

        }

        // Attendre 1/60ème de seconde (60 FPS)
        sf::Time elapsedTime = clock.getElapsedTime();
        if (elapsedTime.asMilliseconds() < 16)
        {
            sf::sleep(sf::milliseconds(16) - elapsedTime);
        }
        clock.restart();
    }

    return 0;
}