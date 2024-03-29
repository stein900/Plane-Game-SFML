
#include <SFML/Audio.hpp>
#include  <SFML/Graphics.hpp>
#include <fstream>


int main()
{
    sf::Clock clock;

    const std::string pnegg = "C:/Game/resources/pngegg.png";
    const std::string planeDown = "C:/Game/resources/avions vers le bas.png";
    const std::string plaeUp = "C:/Game/resources/avion vers le haut.png";
    const std::string ExplosionPlane = "C:/Game/resources/Explosion de l'avion.png";

    const std::string Plane2Base = "C:/Game/resources/Plane2Basetesttttteetttettetete.png";
    const std::string Plane2Down = "C:/Game/resources/Plane2Down.png";
    const std::string Plane2Up = "C:/Game/resources/Plane2Up.png";

    const std::string Plane3Base = "C:/Game/resources/Plane3Base.png";
    const std::string Plane3Down = "C:/Game/resources/Plane3Down.png";
    const std::string Plane3Up = "C:/Game/resources/Plane3Up.png";

    const std::string Plane4Base = "C:/Game/resources/Plane4Base.png";
    const std::string Plane4Down = "C:/Game/resources/Plane4Down.png";
    const std::string Plane4Up = "C:/Game/resources/Plane4Up.png";

    const std::string cloud27 = "C:/Game/resources/rain-clouds-png-27.png";
    const std::string cloud30 = "C:/Game/resources/30-white-clouds-png-image.png";
    const std::string cloud19 = "C:/Game/resources/19-cloud-png-image.png";
    const std::string cloud12 = "C:/Game/resources/12-cloud-png-image.png";
    const std::string cloud10 = "C:/Game/resources/10-cloud-png-image.png";
    const std::string missilees = "C:/Game/resources/Missile-Rocket-Transparent-PNG.png";
    const std::string GameOveer = "C:/Game/resources/Game over text picture.png";
    const std::string MeuPrincipal = "C:/Game/resources/MenuPrincipalImage.png";
    const std::string SettingsMenuS = "C:/Game/resources/SettingsMenu.png";
    const std::string backgroundS = "C:/Game/resources/Background.png";
    const std::string background2S = "C:/Game/resources/GalacticBackground.png";
    const std::string FontS = "C:/Game/resources/arial.ttf";
    const std::string MyOwnMissileS = "C:/Game/resources/Explosion de l'avion.png";
    const std::string MyOwnMissileSmokeS = "C:/Game/resources/FireSmoke.png";

    const std::string GalacticParticuleS = "C:/Game/resources/GalacticParticule.png";
    const std::string RayonLaserS = "C:/Game/resources/RayonLaser.png";

    const std::string FontT = "C:/Game/resources/arial.ttf";
    const std::string loadingScreenS = "C:/Game/resources/LoadingScreen.png";

    // Cr�er la fen�tre
    sf::RenderWindow window(sf::VideoMode(1500, 920), "Planum");

    window.setVerticalSyncEnabled(true);

    // Charger l'image
    sf::Texture texture, texture2, texture3, texture4;
    if (!texture.loadFromFile(pnegg) || !texture2.loadFromFile(planeDown) || !texture3.loadFromFile(plaeUp) || !texture4.loadFromFile(ExplosionPlane))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite sprite(texture);

    sprite.setOrigin(550, 302);
    sprite.setPosition(-130, -120);


    // Charger l'image
    sf::Texture texturePlane2Base, texturePlane2Down, texturePlane2Up;
    if (!texturePlane2Base.loadFromFile(Plane2Base) || !texturePlane2Down.loadFromFile(Plane2Down) || !texturePlane2Up.loadFromFile(Plane2Up))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite sprite2(texturePlane2Base);

    sprite2.setOrigin(550, 302);
    sprite2.setPosition(-130, -120);




    // Charger l'image
    sf::Texture texturePlane3Base, texturePlane3Down, texturePlane3Up;
    if (!texturePlane3Base.loadFromFile(Plane3Base) || !texturePlane3Down.loadFromFile(Plane3Down) || !texturePlane3Up.loadFromFile(Plane3Up))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite sprite3(texturePlane3Base);

    sprite3.setOrigin(550, 302);
    sprite3.setPosition(-130, -120);
    sprite3.setRotation(90);


    // Charger l'image
    sf::Texture texturePlane4Base, texturePlane4Down, texturePlane4Up;
    if (!texturePlane4Base.loadFromFile(Plane4Base) || !texturePlane4Down.loadFromFile(Plane4Down) || !texturePlane4Up.loadFromFile(Plane4Up))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite sprite4(texturePlane4Base);

    sprite4.setOrigin(550, 302);
    sprite4.setPosition(-130, -120);
    sprite4.setScale(.6, .6);


    sf::RectangleShape ShapCollision(sf::Vector2f(60, 40));
    ShapCollision.setFillColor(sf::Color(0xDA, 0xE8, 0xFC));
    ShapCollision.setPosition(-30, -300);
    ShapCollision.setOrigin(30, 20);
    ShapCollision.setFillColor(sf::Color(255, 255, 255, 0));
    ShapCollision.setScale(1.9, 1.9);

    //--------------------------------Les nuages----------------------------------------------

    // Charger l'image
    sf::Texture clouds;
    if (!clouds.loadFromFile(cloud27))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss(clouds);

    // Charger l'image
    sf::Texture clouds2;
    if (!clouds2.loadFromFile(cloud30))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss2(clouds2);

    // Charger l'image
    sf::Texture clouds2d;
    if (!clouds2d.loadFromFile(cloud30))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss2d(clouds2d);

    // Charger l'image
    sf::Texture clouds3;
    if (!clouds3.loadFromFile(cloud19))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss3(clouds3);

    // Charger l'image
    sf::Texture clouds4;
    if (!clouds4.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss4(clouds4);


    // Charger l'image
    sf::Texture clouds6;
    if (!clouds6.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss6(clouds6);

    cloudss6.setPosition(200.f, 200.f);


    // Charger l'image
    sf::Texture clouds7;
    if (!clouds7.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss7(clouds7);


    // Charger l'image
    sf::Texture clouds8;
    if (!clouds8.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss8(clouds8);

    // Charger l'image
    sf::Texture clouds9;
    if (!clouds9.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss9(clouds9);

    // Charger l'image
    sf::Texture clouds10;
    if (!clouds10.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss10(clouds10);

    // Charger l'image
    sf::Texture clouds5;
    if (!clouds5.loadFromFile(cloud10))
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


    // Charger l'image
    sf::Texture cloudso;
    if (!cloudso.loadFromFile(cloud27))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudsso(cloudso);

    // Charger l'image
    sf::Texture clouds2o;
    if (!clouds2o.loadFromFile(cloud30))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss2o(clouds2o);

    // Charger l'image
    sf::Texture clouds2do;
    if (!clouds2do.loadFromFile(cloud30))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss2do(clouds2do);

    // Charger l'image
    sf::Texture clouds3o;
    if (!clouds3o.loadFromFile(cloud19))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss3o(clouds3o);

    // Charger l'image
    sf::Texture clouds4o;
    if (!clouds4o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss4o(clouds4o);


    // Charger l'image
    sf::Texture clouds6o;
    if (!clouds6o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss6o(clouds6o);

    cloudss6o.setPosition(200.f, 200.f);


    // Charger l'image
    sf::Texture clouds7o;
    if (!clouds7o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss7o(clouds7o);


    // Charger l'image
    sf::Texture clouds8o;
    if (!clouds8o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss8o(clouds8o);

    // Charger l'image
    sf::Texture clouds9o;
    if (!clouds9o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss9o(clouds9o);

    // Charger l'image
    sf::Texture clouds10o;
    if (!clouds10o.loadFromFile(cloud12))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss10o(clouds10o);

    // Charger l'image
    sf::Texture clouds5o;
    if (!clouds5o.loadFromFile(cloud10))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite cloudss5o(clouds5o);

    // Charger l'image
    sf::Texture Particule;
    if (!Particule.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee(Particule);


    // Charger l'image
    sf::Texture Particule2;
    if (!Particule2.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee2(Particule2);

    // Charger l'image
    sf::Texture Particule3;
    if (!Particule3.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee3(Particule3);

    // Charger l'image
    sf::Texture Particule4;
    if (!Particule4.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee4(Particule4);

    // Charger l'image
    sf::Texture Particule5;
    if (!Particule5.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee5(Particule5);

    // Charger l'image
    sf::Texture Particule6;
    if (!Particule6.loadFromFile(GalacticParticuleS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Particulee6(Particule6);

    Particulee.setScale(.09f, .09f);
    Particulee2.setScale(.09f, .09f);
    Particulee3.setScale(.09f, .09f);
    Particulee4.setScale(.09f, .09f);
    Particulee5.setScale(.09f, .09f);
    Particulee6.setScale(.09f, .09f);

    Particulee.setPosition(-30, -50);
    Particulee2.setPosition(-30, -50);
    Particulee3.setPosition(-30, -50);
    Particulee4.setPosition(-30, -50);
    Particulee5.setPosition(-30, -50);
    Particulee6.setPosition(-30, -50);

    //-------------------------------------------------Missiles--------------------------------------------------------


        // Charger l'image
    sf::Texture Missile1, Missile11;
    if (!Missile1.loadFromFile(missilees) || !Missile11.loadFromFile(MyOwnMissileS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite Missileee1(Missile1);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth2 = Missile1.getSize().x / 2;
    int newHeight2 = Missile1.getSize().y / 2;


    // D�finir l'�chelle de l'image
    Missileee1.setScale(.09f, .09f);

    // Charger l'image
    sf::Texture Missile2;
    if (!Missile2.loadFromFile(missilees))
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
    if (!Missile3.loadFromFile(missilees))
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


    // Charger l'image
    sf::Texture MyOwnMissile;
    if (!MyOwnMissile.loadFromFile(missilees))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite MyOwnMissilee(MyOwnMissile);
    sf::Sprite Missile111(Missile11);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth28 = MyOwnMissile.getSize().x / 2;
    int newHeight28 = MyOwnMissile.getSize().y / 2;


    // D�finir l'�chelle de l'image
    MyOwnMissilee.setScale(.09f, .09f); // Double la taille de l'image
    MyOwnMissilee.setPosition(-3000, -3000);

    // Charger l'image
    sf::Texture MyOwnMissileSmoke;
    if (!MyOwnMissileSmoke.loadFromFile(MyOwnMissileSmokeS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite MyOwnMissileSmokee(MyOwnMissileSmoke);

    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
    int newWidth29 = MyOwnMissileSmoke.getSize().x / 2;
    int newHeight29 = MyOwnMissileSmoke.getSize().y / 2;


    // D�finir l'�chelle de l'image
    MyOwnMissileSmokee.setScale(.5f, .5f); // Double la taille de l'image
    MyOwnMissileSmokee.setColor(sf::Color(255, 255, 255, 150));
    MyOwnMissileSmokee.setOrigin(150, 800);


    Missileee1.setPosition(1600.f, 689);

    Missileee2.setPosition(1600.f, 463);

    Missileee3.setPosition(1600.f, 500);


    sf::Texture RayonLaser;
    if (!RayonLaser.loadFromFile(RayonLaserS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite RayonLaserr(RayonLaser);
    RayonLaserr.setScale(.09f, .09f);
    RayonLaserr.setPosition(-30, -50);

    sf::Texture RayonLaser2;
    if (!RayonLaser2.loadFromFile(RayonLaserS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite RayonLaserr2(RayonLaser2);
    RayonLaserr2.setScale(.09f, .09f);
    RayonLaserr2.setPosition(-30, -50);

    sf::Texture RayonLaser3;
    if (!RayonLaser3.loadFromFile(RayonLaserS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite RayonLaserr3(RayonLaser3);
    RayonLaserr3.setScale(.09f, .09f);
    RayonLaserr3.setPosition(-30, -50);


    sf::Texture MyOwnRayonLaser;
    if (!MyOwnRayonLaser.loadFromFile(RayonLaserS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite MyOwnRayonLaserr(MyOwnRayonLaser);
    MyOwnRayonLaserr.setScale(.09f, .09f);
    MyOwnRayonLaserr.setPosition(-30, -50);


    //---------------------------------------------- initailisation de la taille cach�------------------------------------------------------

    Missileee1.setScale(.00009f, .000009f);
    Missileee2.setScale(.00009f, .000009f);
    Missileee3.setScale(.00009f, .000009f);

    //---------------------------------Texte-----------------------------------------

    sf::Font font;
    font.loadFromFile(FontS);
    sf::Text text;
    text.setString("GAME OVER");
    text.setCharacterSize(25);
    text.setFillColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold);
    text.setPosition(300, 300);
    sf::Text::Underlined;



    // Charger l'image
    sf::Texture textOV;
    if (!textOV.loadFromFile(GameOveer))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite textOVV(textOV);


    // D�finir l'�chelle de l'image
    textOVV.setScale(.005f, .005f); // Double la taille de l'image

    textOVV.setPosition(3000, -3000);


    // Charger l'image
    sf::Texture MenuP;
    if (!MenuP.loadFromFile(MeuPrincipal))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite MenuPP(MenuP);


    // D�finir l'�chelle de l'image
    MenuPP.setScale(.68, .68); // Double la taille de l'image

    MenuPP.setPosition(220, 50);


    // Charger l'image
    sf::Texture SettingsMenu;
    if (!SettingsMenu.loadFromFile(SettingsMenuS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite (l'image affich�e dans la fen�tre)
    sf::Sprite SettingsMenuu(SettingsMenu);


    // D�finir l'�chelle de l'image
    SettingsMenuu.setScale(.68, .68); // Double la taille de l'image

    SettingsMenuu.setPosition(-3220, -3350);

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
    if (!backgroundTexture.loadFromFile(backgroundS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite pour l'arri�re-plan
    sf::Sprite background(backgroundTexture);


    // D�finir l'�chelle de l'image
    background.setScale(1.f, 1.f); // Double la taille de l'image



    // Charger l'image d'arri�re-plan
    sf::Texture backgroundTexture2;
    if (!backgroundTexture2.loadFromFile(background2S))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite pour l'arri�re-plan
    sf::Sprite background2(backgroundTexture2);


    // D�finir l'�chelle de l'image
    background2.setScale(.29f, .29f);
    background2.setPosition(-9000, -9000);

    //--------------------------------------loadingScreen-----------------------------------------------------

    // Charger l'image d'arri�re-plan
    sf::Texture loadingScreen;
    if (!loadingScreen.loadFromFile(loadingScreenS))
    {
        return 1; // Erreur de chargement de l'image
    }

    // Cr�er le sprite pour l'arri�re-plan
    sf::Sprite loadingScreenn(loadingScreen);


    // D�finir l'�chelle de l'image
    loadingScreenn.setScale(.48f, .48f);
    loadingScreenn.setPosition(-85, 0);

    //------------------------------------Musique--------------------------------------------------------

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("C:/Game/resources/Music/bruits de vent.wav"))
        return EXIT_FAILURE;


    music.setLoop(window.isOpen());

    // Play the music
    music.play();

    music.setVolume(55);

    // Load a music to play
    sf::Music EpicMusic;
    if (!EpicMusic.openFromFile("C:/Game/resources/Music/WarEpicSoundtrack.wav"))
        return EXIT_FAILURE;


    EpicMusic.setLoop(window.isOpen());

    // Play the music
    EpicMusic.play();

    // Load a music to play
    sf::Music music2;
    if (!music2.openFromFile("C:/Game/resources/Music/Missile launch Sound effect.wav"))
        return EXIT_FAILURE;

    music2.setVolume(50);


    music.setLoop(window.isOpen());

    // Load a music to play
    sf::Music music3;
    if (!music3.openFromFile("C:/Game/resources/Music/Explosion Effect.wav"))
        return EXIT_FAILURE;


    // Load a music to play
    sf::Music PlaneSound;
    if (!PlaneSound.openFromFile("C:/Game/resources/Music/PlaneSound.wav"))
        return EXIT_FAILURE;


    PlaneSound.setLoop(window.isOpen());

    PlaneSound.setVolume(50);


    // Load a music to play
    sf::Music LaserSound;
    if (!LaserSound.openFromFile("C:/Game/resources/Music/LaserSound.wav"))
        return EXIT_FAILURE;


    float speed = .05f;
    float speeds = .0f;

    float sppedOfMyMissile = 21;


    float angle = 0.0f;
    float rotationBall = 0;

    float ballMenuMove = 1;

    bool explosionscale = false;
    float elapsed = 0.0f;
    float elapsed2 = 0.0f;
    float Opacite = 255;
    float Opacite2 = 40;
    bool explosionopacite = false;
    bool canFire = true;
    bool canFire2 = false;
    bool smokeOpacite = false;
    bool startGameMode = true;
    bool progressiveMode = false;
    float missileSpeed1 = -8.1;
    float missileSpeed2 = -5.1;
    float missileSpeed3 = -7.4;
    bool plane1 = false;
    bool plane2 = false;
    bool plane3 = false;
    bool plane4 = false;
    bool defaultOne = true;
    bool nuage2 = false;
    bool secondMode = false;
    bool isPlaying = false;
    bool OnSettings = false;
    bool MusicStop = false;
    bool SoundStop = false;
    bool FPSautomatic = true;
    bool OnMenu = true;
    bool LoadingScreen = true;
    // position en y du soleil
    int PoseYBall = 300;
    // le nombre de pixel de d�placement du soleil � chaque tour de la boucle d'animation
    int VarBallMove = -1;

    bool startGame = false;


    //--------------------------------------------------------------Tetxe--------------------------------------------------------------

    int score = 0;

    //Best score
    sf::Font font3;
    font3.loadFromFile(FontT);
    sf::Text bestscoreTextR;
    bestscoreTextR.setFont(font3);
    bestscoreTextR.setCharacterSize(24);
    bestscoreTextR.setFillColor(sf::Color::Black);
    bestscoreTextR.setStyle(sf::Text::Bold);
    bestscoreTextR.setPosition(-647, -62);


    sf::Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(34);
    scoreText.setFillColor(sf::Color::Black);
    scoreText.setStyle(sf::Text::Bold);
    scoreText.setPosition(-700, -20);

    int metre = 0;
    int kilometre = 0;

    sf::Text Distance;
    Distance.setFont(font);
    Distance.setCharacterSize(34);
    Distance.setFillColor(sf::Color::Black);
    Distance.setStyle(sf::Text::Bold);
    Distance.setPosition(-620, -860);

    int bestDistance = 0;

    sf::Text BestDistance;
    BestDistance.setFont(font);
    BestDistance.setCharacterSize(24);
    BestDistance.setFillColor(sf::Color::Black);
    BestDistance.setStyle(sf::Text::Bold);
    BestDistance.setPosition(-617, -92);


    sf::Text NotEnough;
    NotEnough.setFont(font);
    NotEnough.setCharacterSize(24);
    NotEnough.setFillColor(sf::Color::Black);
    NotEnough.setStyle(sf::Text::Bold);
    NotEnough.setPosition(617, 92);

    sf::Text Tuto;
    Tuto.setFont(font);
    Tuto.setCharacterSize(14);
    Tuto.setFillColor(sf::Color::Black);
    Tuto.setStyle(sf::Text::Bold);
    Tuto.setPosition(20, 888);

    Tuto.setString("Game by stein.ind [T]: fire, [R]: respawn, [M]: menu, [O]: settings");

    //-------------------------------------------------------Sauvegarde du score---------------------------------------------------------

    // Chargement du score � partir du fichier "score.txt"
    int BestScore = 0;
    std::ifstream inputFile("score.txt");
    if (inputFile.is_open()) {
        inputFile >> BestScore;
        inputFile.close();
    }
    bestscoreTextR.setString("your best score is: " + std::to_string(BestScore));


    std::ifstream inputFile2("Distance.txt");
    if (inputFile2.is_open()) {
        inputFile2 >> bestDistance;
        inputFile2.close();
    }
    bestscoreTextR.setString("your best score is: " + std::to_string(BestScore));

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
                    x -= 2.0f; // D�placer le sprite vers la gauche
                    if (plane2) sprite2.setTexture(texturePlane2Base);
                    sprite.setTexture(texture);
                    if (plane3) sprite3.setTexture(texturePlane3Base);
                    if (plane4) sprite4.setTexture(texturePlane4Base);
                    break;

                case sf::Keyboard::Right:
                    x += 2.0f; // D�placer le sprite vers la droite
                    sprite2.setTexture(texturePlane2Base);
                    if (plane4) sprite4.setTexture(texturePlane4Base);
                    break;

                case sf::Keyboard::Up:
                    y -= 2.0f; // D�placer le sprite vers le haut
                    if (plane2) sprite2.setTexture(texturePlane2Up);
                    if (!plane2) sprite.setTexture(texture3);
                    if (plane3) sprite3.setTexture(texturePlane3Down);
                    if (plane4) sprite4.setTexture(texturePlane4Up);
                    break;

                case sf::Keyboard::Down:
                    y += 2.0f; // D�placer le sprite vers le bas
                    if (plane2) sprite2.setTexture(texturePlane2Down);
                    if (!plane2) sprite.setTexture(texture2);
                    if (plane3) sprite3.setTexture(texturePlane3Up);
                    if (plane4) sprite4.setTexture(texturePlane4Down);
                    break;
                case sf::Keyboard::Q:
                    x -= 0.5f; // D�placer le sprite vers la gauche
                    if (plane2) sprite2.setTexture(texturePlane2Base);
                    sprite.setTexture(texture);
                    if (plane3) sprite3.setTexture(texturePlane3Base);
                    break;

                case sf::Keyboard::D:
                    x += 0.5f; // D�placer le sprite vers la droite
                    sprite2.setTexture(texturePlane2Base);
                    break;

                case sf::Keyboard::X:
                    y -= 0.5f;
                    if (plane2) sprite2.setTexture(texturePlane2Up);
                    if (!plane2) sprite.setTexture(texture3);
                    if (plane3) sprite3.setTexture(texturePlane3Down);
                    break;

                case sf::Keyboard::S:
                    y += 0.5f; // D�placer le sprite vers le bas
                    if (plane2) sprite2.setTexture(texturePlane2Down);
                    if (!plane2) sprite.setTexture(texture2);
                    if (plane3) sprite3.setTexture(texturePlane3Up);
                    break;
                case sf::Keyboard::Escape:
                    window.close(); //fermer la fenetre
                    break;
                default:
                    break;
                }

                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R)
                {
                    if (plane1)
                    {
                        isPlaying = true;
                        Distance.setFillColor(sf::Color::Black);
                        scoreText.setFillColor(sf::Color::Black);
                        background2.setPosition(-9000, -9000);
                        plane1 = true;
                        plane3 = false;
                        plane2 = false;
                        plane4 = false;
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite.setScale(.2f, .2f);
                        sprite.setRotation(0);
                        sprite.setPosition(110, 250);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        sprite.setTexture(texture);
                        window.display();
                        x = 0.8f;
                        y = 0.f;
                        score = 0;
                        Missileee1.setPosition(1600.f, 689);
                        Missileee2.setPosition(1600.f, 463);
                        Missileee3.setPosition(1600.f, 500);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);

                        Missileee1.setScale(.09f, .09f);
                        Missileee2.setScale(.09f, .09f);
                        Missileee3.setScale(.09f, .09f);
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite2.setPosition(-130, -120);
                        sprite3.setPosition(-130, -120);
                        sprite4.setPosition(-130, -120);
                        Particulee.setPosition(-30, -50);
                        Particulee2.setPosition(-30, -50);
                        Particulee3.setPosition(-30, -50);
                        Particulee4.setPosition(-30, -50);
                        Particulee5.setPosition(-30, -50);
                        Particulee6.setPosition(-30, -50);
                        RayonLaserr.setPosition(-30, -50);
                        RayonLaserr2.setPosition(-30, -50);
                        RayonLaserr3.setPosition(-30, -50);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);
                    }
                    if (plane2)
                    {
                        isPlaying = true;
                        Distance.setFillColor(sf::Color::Black);
                        scoreText.setFillColor(sf::Color::Black);
                        background2.setPosition(-9000, -9000);
                        plane1 = false;
                        plane3 = false;
                        plane2 = true;
                        plane4 = false;
                        sprite2.setTexture(texturePlane2Base);
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite2.setScale(.44f, .44f);
                        sprite2.setRotation(0);
                        sprite2.setPosition(250, 250);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        window.display();
                        x = 0.8f;
                        y = 0.f;
                        score = 0;
                        Missileee1.setPosition(1600.f, 689);
                        Missileee2.setPosition(1600.f, 463);
                        Missileee3.setPosition(1600.f, 500);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);
                        progressiveMode = false;

                        Missileee1.setScale(.09f, .09f);
                        Missileee2.setScale(.09f, .09f);
                        Missileee3.setScale(.09f, .09f);
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite.setPosition(-130, -120);
                        sprite3.setPosition(-130, -120);
                        NotEnough.setPosition(-2258, -3860);
                        sprite4.setPosition(-130, -120);
                        Particulee.setPosition(-30, -50);
                        Particulee2.setPosition(-30, -50);
                        Particulee3.setPosition(-30, -50);
                        Particulee4.setPosition(-30, -50);
                        Particulee5.setPosition(-30, -50);
                        Particulee6.setPosition(-30, -50);
                        RayonLaserr.setPosition(-30, -50);
                        RayonLaserr2.setPosition(-30, -50);
                        RayonLaserr3.setPosition(-30, -50);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);
                    }
                    if (plane3)
                    {
                        isPlaying = true;
                        Distance.setFillColor(sf::Color::Black);
                        scoreText.setFillColor(sf::Color::Black);
                        background2.setPosition(-9000, -9000);
                        secondMode = true;
                        defaultOne = false;
                        plane1 = false;
                        plane3 = true;
                        plane2 = false;
                        plane4 = false;
                        sprite3.setTexture(texturePlane3Base);
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite3.setScale(.44f, .44f);
                        sprite3.setRotation(180);
                        sprite3.setPosition(800, 250);
                        sprite3.setOrigin(247, 150);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        window.display();
                        x = -0.8f;
                        y = 0.f;
                        score = 0;
                        Missileee1.setPosition(1600.f, 689);
                        Missileee2.setPosition(1600.f, 463);
                        Missileee3.setPosition(1600.f, 500);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);
                        progressiveMode = false;

                        Missileee1.setScale(.09f, .09f);
                        Missileee2.setScale(.09f, .09f);
                        Missileee3.setScale(.09f, .09f);
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite.setPosition(-130, -120);
                        sprite2.setPosition(-130, -120);
                        sprite4.setPosition(-130, -120);
                        plane3 = true;
                        Particulee.setPosition(-30, -50);
                        Particulee2.setPosition(-30, -50);
                        Particulee3.setPosition(-30, -50);
                        Particulee4.setPosition(-30, -50);
                        Particulee5.setPosition(-30, -50);
                        Particulee6.setPosition(-30, -50);
                        RayonLaserr.setPosition(-30, -50);
                        RayonLaserr2.setPosition(-30, -50);
                        RayonLaserr3.setPosition(-30, -50);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);
                    }
                    if (plane4)
                    {
                        isPlaying = true;
                        scoreText.setFillColor(sf::Color::White);
                        Distance.setFillColor(sf::Color::White);
                        background2.setPosition(0, 0);
                        secondMode = true;
                        defaultOne = true;
                        plane1 = false;
                        plane3 = false;
                        plane2 = false;
                        plane4 = true;
                        Missileee1.setPosition(-5600.f, -5000);
                        Missileee2.setPosition(-5000, -5000);
                        Missileee3.setPosition(-5000, -5000);
                        sprite4.setTexture(texturePlane4Base);
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite4.setScale(.44f, .44f);
                        sprite4.setPosition(800, 250);
                        sprite4.setOrigin(247, 150);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        window.display();
                        x = -0.8f;
                        y = 0.f;
                        score = 0;
                        RayonLaserr.setPosition(1600.f, 689);
                        RayonLaserr2.setPosition(1600.f, 463);
                        RayonLaserr3.setPosition(1600.f, 500);
                        RayonLaserr.setScale(.09f, .09f);
                        RayonLaserr2.setScale(.09f, .09f);
                        RayonLaserr3.setScale(.09f, .09f);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);
                        progressiveMode = false;
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite.setPosition(-130, -120);
                        sprite2.setPosition(-130, -120);
                        sprite3.setPosition(-130, -120);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);

                        // effacer le contenu de la fen�tre
                        window.clear();

                        // mettre � jour la fen�tre
                        window.display();
                    }

                }

                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z)
                {
                    if (bestDistance >= 10 && BestScore >= 10 && OnMenu)
                    {
                        OnMenu = false;
                        isPlaying = true;
                        Distance.setFillColor(sf::Color::Black);
                        scoreText.setFillColor(sf::Color::Black);
                        background2.setPosition(-9000, -9000);
                        plane1 = true;
                        plane3 = false;
                        plane2 = false;
                        plane4 = false;
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite.setScale(.2f, .2f);
                        sprite.setRotation(0);
                        sprite.setPosition(110, 250);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        sprite.setTexture(texture);
                        window.display();
                        x = 0.8f;
                        y = 0.f;
                        score = 0;
                        Missileee1.setPosition(1600.f, 689);
                        Missileee2.setPosition(1600.f, 463);
                        Missileee3.setPosition(1600.f, 500);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);

                        Missileee1.setScale(.09f, .09f);
                        Missileee2.setScale(.09f, .09f);
                        Missileee3.setScale(.09f, .09f);
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite2.setPosition(-130, -120);
                        sprite3.setPosition(-130, -120);
                        sprite4.setPosition(-130, -120);
                        Particulee.setPosition(-30, -50);
                        Particulee2.setPosition(-30, -50);
                        Particulee3.setPosition(-30, -50);
                        Particulee4.setPosition(-30, -50);
                        Particulee5.setPosition(-30, -50);
                        Particulee6.setPosition(-30, -50);
                        RayonLaserr.setPosition(-30, -50000);
                        RayonLaserr2.setPosition(-30, -50000);
                        RayonLaserr3.setPosition(-30, -50000);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);
                    }
                    else if (OnMenu && bestDistance <= 9 && BestScore <= 9)
                    {
                        NotEnough.setString("You must have a distance of 10km and a score of 10 to play with the F16");
                        NotEnough.setPosition(352, 860);
                    }
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A)
                {
                    OnMenu = false;
                    isPlaying = true;
                    Distance.setFillColor(sf::Color::Black);
                    scoreText.setFillColor(sf::Color::Black);
                    background2.setPosition(-9000, -9000);
                    plane1 = false;
                    plane3 = false;
                    plane2 = true;
                    plane4 = false;
                    sprite2.setTexture(texturePlane2Base);
                    int newWidth = texture.getSize().x / 2;
                    int newHeight = texture.getSize().y / 2;
                    sprite2.setScale(.44f, .44f);
                    sprite2.setRotation(0);
                    sprite2.setPosition(250, 250);
                    textOVV.setScale(.005f, .005f);
                    textOVV.setPosition(3000, -3000);
                    window.display();
                    x = 0.8f;
                    y = 0.f;
                    score = 0;
                    Missileee1.setPosition(1600.f, 689);
                    Missileee2.setPosition(1600.f, 463);
                    Missileee3.setPosition(1600.f, 500);
                    Distance.setPosition(620, 860);
                    metre = 0; kilometre = 0;
                    BestDistance.setPosition(-617, -62);
                    canFire2 = true;
                    startGameMode = false;
                    MenuPP.setPosition(-5220, -9850);
                    progressiveMode = false;

                    Missileee1.setScale(.09f, .09f);
                    Missileee2.setScale(.09f, .09f);
                    Missileee3.setScale(.09f, .09f);
                    scoreText.setPosition(700, 20);
                    // Play the music
                    PlaneSound.play();
                    sprite.setPosition(-130, -120);
                    sprite3.setPosition(-130, -120);
                    NotEnough.setPosition(-2258, -3860);
                    sprite4.setPosition(-130, -120);
                    Particulee.setPosition(-30, -50);
                    Particulee2.setPosition(-30, -50);
                    Particulee3.setPosition(-30, -50);
                    Particulee4.setPosition(-30, -50);
                    Particulee5.setPosition(-30, -50);
                    Particulee6.setPosition(-30, -50);
                    RayonLaserr.setPosition(-30, -50000);
                    RayonLaserr2.setPosition(-30, -50000);
                    RayonLaserr3.setPosition(-30, -50000);
                    OnSettings = false;
                    SettingsMenuu.setScale(.006, .006);
                    SettingsMenuu.setPosition(-3290, -3320);
                }


                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::E)
                {

                    if (bestDistance >= 60 && BestScore >= 25 && OnMenu)
                    {
                        OnMenu = false;
                        isPlaying = true;
                        Distance.setFillColor(sf::Color::Black);
                        scoreText.setFillColor(sf::Color::Black);
                        background2.setPosition(-9000, -9000);
                        secondMode = true;
                        defaultOne = false;
                        plane1 = false;
                        plane3 = true;
                        plane2 = false;
                        plane4 = false;
                        sprite3.setTexture(texturePlane3Base);
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite3.setScale(.44f, .44f);
                        sprite3.setRotation(180);
                        sprite3.setPosition(800, 250);
                        sprite3.setOrigin(247, 150);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        window.display();
                        x = -0.8f;
                        y = 0.f;
                        score = 0;
                        Missileee1.setPosition(1600.f, 689);
                        Missileee2.setPosition(1600.f, 463);
                        Missileee3.setPosition(1600.f, 500);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);
                        progressiveMode = false;

                        Missileee1.setScale(.09f, .09f);
                        Missileee2.setScale(.09f, .09f);
                        Missileee3.setScale(.09f, .09f);
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite.setPosition(-130, -120);
                        sprite2.setPosition(-130, -120);
                        sprite4.setPosition(-130, -120);
                        plane3 = true;
                        Particulee.setPosition(-30, -50);
                        Particulee2.setPosition(-30, -50);
                        Particulee3.setPosition(-30, -50);
                        Particulee4.setPosition(-30, -50);
                        Particulee5.setPosition(-30, -50);
                        Particulee6.setPosition(-30, -50);
                        RayonLaserr.setPosition(-30, -50000);
                        RayonLaserr2.setPosition(-30, -50000);
                        RayonLaserr3.setPosition(-30, -50000);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);
                    }
                    else if (OnMenu && bestDistance <= 59 && BestScore <= 24)
                    {
                        NotEnough.setString("You must have a distance of 60km and a score of 25 to play with the Boeing F-X Sixth");
                        NotEnough.setPosition(258, 860);
                    }

                }


                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Y)
                {

                    if (bestDistance >= 250 && BestScore >= 40 && OnMenu)
                    {
                        OnMenu = false;
                        isPlaying = true;
                        scoreText.setFillColor(sf::Color::White);
                        Distance.setFillColor(sf::Color::White);
                        background2.setPosition(0, 0);
                        secondMode = true;
                        defaultOne = true;
                        plane1 = false;
                        plane3 = false;
                        plane2 = false;
                        plane4 = true;
                        Missileee1.setPosition(-5600.f, -5000);
                        Missileee2.setPosition(-5000, -5000);
                        Missileee3.setPosition(-5000, -5000);
                        sprite4.setTexture(texturePlane4Base);
                        int newWidth = texture.getSize().x / 2;
                        int newHeight = texture.getSize().y / 2;
                        sprite4.setScale(.44f, .44f);
                        sprite4.setPosition(800, 250);
                        sprite4.setOrigin(247, 150);
                        textOVV.setScale(.005f, .005f);
                        textOVV.setPosition(3000, -3000);
                        window.display();
                        x = -0.8f;
                        y = 0.f;
                        score = 0;
                        RayonLaserr.setPosition(1600.f, 689);
                        RayonLaserr2.setPosition(1600.f, 463);
                        RayonLaserr3.setPosition(1600.f, 500);
                        RayonLaserr.setScale(.09f, .09f);
                        RayonLaserr2.setScale(.09f, .09f);
                        RayonLaserr3.setScale(.09f, .09f);
                        Distance.setPosition(620, 860);
                        metre = 0; kilometre = 0;
                        BestDistance.setPosition(-617, -62);
                        canFire2 = true;
                        startGameMode = false;
                        MenuPP.setPosition(-5220, -9850);
                        progressiveMode = false;
                        scoreText.setPosition(700, 20);
                        // Play the music
                        PlaneSound.play();
                        sprite.setPosition(-130, -120);
                        sprite2.setPosition(-130, -120);
                        sprite3.setPosition(-130, -120);
                        OnSettings = false;
                        SettingsMenuu.setScale(.006, .006);
                        SettingsMenuu.setPosition(-3290, -3320);

                        // effacer le contenu de la fen�tre
                        window.clear();

                        // mettre � jour la fen�tre
                        window.display();
                    }
                    else if(OnMenu && bestDistance <= 249 && BestScore <= 39)
                    {
                        NotEnough.setString("You must have a distance of 250km and a score of 40 to play with the Starfighter (U-Wing)");
                        NotEnough.setPosition(258, 860);
                    }

                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::B)
                {
                    plane3 = false;
                    int newWidth = texture.getSize().x / 2;
                    int newHeight = texture.getSize().y / 2;
                    sprite.setScale(.2f, .2f);
                    sprite.setRotation(0);
                    sprite.setPosition(110, 250);
                    textOVV.setScale(.005f, .005f);
                    textOVV.setPosition(3000, -3000);
                    sprite.setTexture(texture);
                    window.display();
                    x = 0.f;
                    y = 0.f;
                    score = 0;
                    Missileee1.setPosition(1600.f, 689);
                    Missileee2.setPosition(1600.f, 463);
                    Missileee3.setPosition(1600.f, 500);
                    Distance.setPosition(620, 860);
                    metre = 0; kilometre = 0;
                    BestDistance.setPosition(-617, -62);
                    canFire2 = true;
                    startGameMode = false;
                    MenuPP.setPosition(-5220, -9850);
                    progressiveMode = true;

                    Missileee1.setScale(.09f, .09f);
                    Missileee2.setScale(.09f, .09f);
                    Missileee3.setScale(.09f, .09f);
                    scoreText.setPosition(700, 20);
                    // Play the music
                    PlaneSound.play();
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::M || event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::P)
                {
                    OnMenu = true;
                    isPlaying = false;
                    ShapCollision.setPosition(-30, -300);
                    int distanceTotal = kilometre;
                    background2.setPosition(-9000, -9000);
                    plane4 = false;
                    textOVV.setScale(.005f, .005f);
                    textOVV.setPosition(3000, -3000);
                    scoreText.setFillColor(sf::Color::Black);
                    Particulee.setPosition(-30, -50);
                    Particulee2.setPosition(-30, -50);
                    Particulee3.setPosition(-30, -50);
                    Particulee4.setPosition(-30, -50);
                    Particulee5.setPosition(-30, -50);
                    Particulee6.setPosition(-30, -50);
                    x = 0; y = 0;
                    sprite.setScale(.0005f, .0005f);
                    sprite2.setScale(.0005f, .0005f);
                    sprite3.setScale(.0005f, .0005f);
                    sprite4.setScale(.0005f, .0005f);
                    if (distanceTotal >= bestDistance)
                    {
                        bestDistance = distanceTotal;
                    }
                    sprite3.setScale(.00005f, .000005);
                    MenuPP.setScale(.68, .68); // Double la taille de l'image

                    MenuPP.setPosition(220, 50);
                    metre = 0; kilometre = 0;
                    Distance.setPosition(-620, -860);
                    BestDistance.setPosition(617, 92);
                    canFire2 = false;
                    startGameMode = true;
                    Missileee1.setScale(.00009f, .000009f);
                    Missileee2.setScale(.00009f, .000009f);
                    Missileee3.setScale(.00009f, .000009f);
                    RayonLaserr.setPosition(-30, -50000);
                    RayonLaserr2.setPosition(-30, -50000);
                    RayonLaserr3.setPosition(-30, -50000);
                    scoreText.setPosition(700, 20);
                    bestscoreTextR.setPosition(647, 62);
                    // Play the music
                    PlaneSound.stop();
                    sprite2.setPosition(-130, -120);
                    sprite3.setPosition(-130, -120);
                    OnSettings = false;
                    SettingsMenuu.setScale(.006, .006);
                    SettingsMenuu.setPosition(-3290, -3320);
                    //plane3 = false;
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::O)
                {
                    OnMenu = false;
                    OnSettings = true;
                    SettingsMenuu.setScale(.6, .6);
                    SettingsMenuu.setPosition(290, -20);
                    isPlaying = false;
                    ShapCollision.setPosition(-30, -300);
                    int distanceTotal = kilometre;
                    background2.setPosition(-9000, -9000);
                    plane4 = false;
                    textOVV.setScale(.005f, .005f);
                    textOVV.setPosition(-3000, -3000);
                    scoreText.setFillColor(sf::Color::Black);
                    Particulee.setPosition(-30, -50);
                    Particulee2.setPosition(-30, -50);
                    Particulee3.setPosition(-30, -50);
                    Particulee4.setPosition(-30, -50);
                    Particulee5.setPosition(-30, -50);
                    Particulee6.setPosition(-30, -50);
                    x = 0; y = 0;
                    sprite.setScale(.0005f, .0005f);
                    sprite2.setScale(.0005f, .0005f);
                    sprite3.setScale(.0005f, .0005f);
                    sprite4.setScale(.0005f, .0005f);
                    if (distanceTotal >= bestDistance)
                    {
                        bestDistance = distanceTotal;
                    }
                    sprite3.setScale(.00005f, .000005);
                    MenuPP.setScale(.0068, .0068); 
                    MenuPP.setPosition(-3220, -350);
                    metre = 0; kilometre = 0;
                    Distance.setPosition(-620, -860);
                    BestDistance.setPosition(-3617, -3392);
                    canFire2 = false;
                    startGameMode = true;
                    Missileee1.setScale(.00009f, .000009f);
                    Missileee2.setScale(.00009f, .000009f);
                    Missileee3.setScale(.00009f, .000009f);
                    RayonLaserr.setPosition(-30, -50000);
                    RayonLaserr2.setPosition(-30, -50000);
                    RayonLaserr3.setPosition(-30, -50000);
                    scoreText.setPosition(-3700, -3320);
                    bestscoreTextR.setPosition(-2647, -362);
                    // Play the music
                    PlaneSound.stop();
                    sprite2.setPosition(-130, -120);
                    sprite3.setPosition(-130, -120);
                    //plane3 = false;
                    
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C)
                {
                    if (OnSettings && !MusicStop)
                    {
                        EpicMusic.setVolume(0);
                        MusicStop = true;
                    }

                    else if (OnSettings && MusicStop)
                    {
                        EpicMusic.setVolume(100);
                        MusicStop = false;
                    }
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::V)
                {
                    if (OnSettings && !SoundStop)
                    {
                        music.setVolume(0);
                        music2.setVolume(0);
                        music3.setVolume(0);
                        PlaneSound.setVolume(0);
                        SoundStop = true;
                    }

                    else if (OnSettings && SoundStop)
                    {
                        music.setVolume(55);
                        music2.setVolume(50);
                        music3.setVolume(100);
                        PlaneSound.setVolume(50);
                        SoundStop = false;
                    }
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::X)
                {
                    if (OnSettings && FPSautomatic) FPSautomatic = false;
                    else if (OnSettings && !FPSautomatic) FPSautomatic = true;
                }

                else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::T)
                {


                    if (plane1)
                    {
                        if (canFire && canFire2)
                        {
                            window.draw(MyOwnMissilee);
                            MyOwnMissilee.setRotation(180);
                            MyOwnMissilee.setPosition(sprite.getPosition());
                            sppedOfMyMissile = 20;
                            MyOwnMissilee.setTexture(Missile1);
                            canFire = false;
                            // Play the music
                            music2.play();
                            music2.play();
                        }
                    }
                    if (plane2)
                    {
                        if (canFire && canFire2)
                        {
                            window.draw(MyOwnMissilee);
                            MyOwnMissilee.setRotation(180);
                            MyOwnMissilee.setPosition(sprite2.getPosition());
                            sppedOfMyMissile = 20;
                            MyOwnMissilee.setTexture(Missile1);
                            canFire = false;
                            // Play the music
                            music2.play();
                            music2.play();
                        }
                    }

                    if (plane3)
                    {
                        if (canFire && canFire2)
                        {
                            window.draw(MyOwnMissilee);
                            MyOwnMissilee.setRotation(180);
                            MyOwnMissilee.setPosition(sprite3.getPosition());
                            sppedOfMyMissile = 90;
                            MyOwnMissilee.setTexture(Missile1);
                            canFire = false;
                            // Play the music
                            music2.play();
                            music2.play();
                        }
                    }


                    if (plane4)
                    {
                        if (canFire && canFire2)
                        {
                            window.draw(MyOwnRayonLaserr);
                            MyOwnRayonLaserr.setRotation(180);
                            MyOwnRayonLaserr.setPosition(sprite4.getPosition());
                            sppedOfMyMissile = 189;
                            canFire = false;
                            LaserSound.play();
                            LaserSound.play();
                        }
                    }
                }
            }
        }

        if (LoadingScreen)
        {
            EpicMusic.stop();
            music.stop();
            music3.stop();
            elapsed2 += 0.0099;
            elapsed2 += clock.restart().asSeconds();
            if (elapsed2 >= 9.6f) {
                loadingScreenn.setScale(.02f, .02f);
                loadingScreenn.setPosition(-300, -900);
                EpicMusic.play();
                music.play();
                music3.play();
                LoadingScreen = false;
                elapsed2 = 0.0f;
            }
        }

        //BestScore = 999; bestDistance = 999;

        if (plane1)
        {
            ShapCollision.setScale(1.9, 1.9);
            ShapCollision.setOrigin(30, 20);
            ShapCollision.setPosition(sprite.getPosition());
        }
        if (plane2)
        {
            ShapCollision.setPosition(sprite2.getPosition());
            ShapCollision.setScale(.9, 4.1);
            ShapCollision.setOrigin(170, 27);
        }
        if (plane3)
        {
            ShapCollision.setPosition(sprite3.getPosition());
            ShapCollision.setScale(1.9, 1.9);
            ShapCollision.setOrigin(30, 20);

        }
        if (plane4)
        {
            ShapCollision.setPosition(sprite4.getPosition());
            ShapCollision.setScale(1.9, 1.9);
            ShapCollision.setOrigin(30, 20);
        }

        if (startGameMode)
        {
            sprite.setScale(.00005f, .000005);
        }
        else if (!startGameMode)
        {
            sprite.setScale(.2f, .2f);
        }

        //--------------------------------------------------------------score texte---------------------------------------------------------

        scoreText.setString("Score: " + std::to_string(score));

        bestscoreTextR.setString("your best score is: " + std::to_string(BestScore));


        Distance.setString("Distance: " + std::to_string(kilometre) + "," + std::to_string(metre) + "km");

        if (!plane2) metre += 3;
        if (plane2) metre += 1;
        if (plane3) metre += 30;
        if (plane4) metre += 33333;
        if (metre >= 999)
        {
            metre = 0;
            kilometre += 1;
        }

        BestDistance.setString("your best distance is: " + std::to_string(bestDistance) + "km");
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
        static sf::Clock clock4;
        if (clock4.getElapsedTime().asSeconds() > 5) {
            std::ofstream outputFile2("Distance.txt");
            if (outputFile2.is_open())
            {
                outputFile2 << bestDistance;
                outputFile2.close();
            }
            clock4.restart();
        }

        //-----------------------------------------------------------My own missile parameters-----------------------------------------------------------------------
               // Mettre � jour le score toutes les secondes
        sf::Clock clock2;
        if (!canFire && plane2 || plane1)
        {
            elapsed2 += 0.0099;
            elapsed2 += clock2.restart().asSeconds();
            if (elapsed2 >= 1.6f) {
                canFire = true;
                elapsed2 = 0.0f;
            }
        }

        if (!canFire && plane3)
        {
            elapsed2 += 0.099;
            elapsed2 += clock2.restart().asSeconds();
            if (elapsed2 >= 1.6f) {
                canFire = true;
                elapsed2 = 0.0f;
            }
        }

        if (plane4)
        {
            elapsed2 += 0.99;
            elapsed2 += clock2.restart().asSeconds();
            if (elapsed2 >= 1.6f) {
                canFire = true;
                elapsed2 = 0.0f;
            }
        }
        if (plane3) sppedOfMyMissile = 90;
        if (plane4) sppedOfMyMissile = 189;
        MyOwnMissilee.move(sppedOfMyMissile, 0);
        MyOwnMissileSmokee.move(sppedOfMyMissile, 0);
        MyOwnRayonLaserr.move(sppedOfMyMissile, 0);
        // Mettre � jour toutes les elapsed secondes
        sf::Clock clock;
        elapsed += 0.002;
        if (explosionscale)
        {
            if (canFire)
            {
                MyOwnMissilee.setScale(.09f, .09f);

            }
            elapsed += clock.restart().asSeconds();
            if (elapsed >= 0.18) {
                MyOwnMissilee.setScale(.09f, .09f);
                explosionscale = false;
                elapsed -= 1.6f;
                MyOwnMissilee.setPosition(-3000, -3000);
                MyOwnMissileSmokee.setPosition(-3000, -3000);
            }
        }

        if (explosionopacite)
        {
            Opacite -= 0.9;
            if (Opacite <= 20)
            {
                explosionopacite = false;
                Opacite = 255;
            }
        }


        //if (explosionopacite)
        //{
        //    if (Opacite2 <= 150)
        //    {
        //        Opacite2 += 1;
        //        if (Opacite2 >= 149)
        //        {
        //            smokeOpacite = true;
        //        }
        //    }
        //    
        //    if (smokeOpacite)
        //    {
        //        Opacite2 -= 1;
        //        
        //        if (explosionopacite)
        //        {
        //            explosionopacite = false;
        //            smokeOpacite = false;
        //            Opacite2 = 255;

        //        }
        //    }
        //}
        MyOwnMissilee.setColor(sf::Color(255, 255, 255, Opacite));
        MyOwnMissileSmokee.setColor(sf::Color(255, 255, 255, Opacite2));


        //---------------------------------------Les spawns des nuages, les trajectoires al�atoire et leurs vitesses---------------------------------------------------

        if (plane1 || plane2 || defaultOne && !plane4)
        {
            window.draw(cloudss);
            sf::Vector2f cloudPosition = cloudss.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss.move(-1.9, 0); //Bouge vers la gauche

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


            window.draw(cloudss);
            sf::Vector2f cloudPositiona = cloudss.getPosition(); //Recup la position de la pok�ball
            if (cloudPositiona.x < -1280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss.move(-.9, 0); //Bouge vers la gauche

            window.draw(cloudss2);
            sf::Vector2f cloudPosition2a = cloudss2.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition2a.x < -1480) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss2.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss2.move(-.2, 0); //Bouge vers la gauche

            window.draw(cloudss3);
            sf::Vector2f cloudPosition3a = cloudss3.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition3a.x < -1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss3.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss3.move(-.2, 0); //Bouge vers la gauche

            window.draw(cloudss4);
            sf::Vector2f cloudPosition4a = cloudss4.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition4a.x < -1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss4.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss4.move(-.2, 0); //Bouge vers la gauche

            window.draw(cloudss6);
            sf::Vector2f cloudPosition6a = cloudss6.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition6a.x < -2760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss6.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss6.move(-.2, -2); //Bouge vers la gauche

            window.draw(cloudss7);
            sf::Vector2f cloudPosition7a = cloudss7.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition7a.x < -1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss7.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss7.move(-2.7, -.5); //Bouge vers la gauche

            window.draw(cloudss8);
            sf::Vector2f cloudPosition8a = cloudss8.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition8a.x < -3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss8.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss8.move(-.2, -.4); //Bouge vers la gauche

            window.draw(cloudss9);
            sf::Vector2f cloudPosition9a = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition9a.x < -3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss9.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss9.move(-.2, -.4); //Bouge vers la gauche

            window.draw(cloudss10);
            sf::Vector2f cloudPosition10a = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition10a.x < -3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 70) + 20; //prend une hauteur al�atoire
                cloudss10.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss10.move(-.01, 0); //Bouge vers la gauche
        }


        if (plane3 && !plane4)
        {
            window.draw(cloudss);
            sf::Vector2f cloudPosition = cloudss.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition.x > 2280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss.move(18, 0); //Bouge vers la gauche

            window.draw(cloudss2);
            sf::Vector2f cloudPosition2 = cloudss2.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition2.x > 2480) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss2.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss2.move(17, 0); //Bouge vers la gauche

            window.draw(cloudss3);
            sf::Vector2f cloudPosition3 = cloudss3.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition3.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss3.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss3.move(19, 0); //Bouge vers la gauche

            window.draw(cloudss4);
            sf::Vector2f cloudPosition4 = cloudss4.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition4.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss4.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss4.move(14.2, 0); //Bouge vers la gauche

            window.draw(cloudss6);
            sf::Vector2f cloudPosition6 = cloudss6.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition6.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss6.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss6.move(20.4, -2); //Bouge vers la gauche

            window.draw(cloudss7);
            sf::Vector2f cloudPosition7 = cloudss7.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition7.x > 2760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss7.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss7.move(20.9, -.5); //Bouge vers la gauche

            window.draw(cloudss8);
            sf::Vector2f cloudPosition8 = cloudss8.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition8.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss8.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss8.move(16.8, -.4); //Bouge vers la gauche

            window.draw(cloudss9);
            sf::Vector2f cloudPosition9 = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition9.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 20; //prend une hauteur al�atoire
                cloudss9.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss9.move(18.4, -.4); //Bouge vers la gauche

            window.draw(cloudss10);
            sf::Vector2f cloudPosition10 = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition10.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 70) + 20; //prend une hauteur al�atoire
                cloudss10.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss10.move(11.1, 0); //Bouge vers la gauche


            window.draw(cloudss);
            sf::Vector2f cloudPositiona = cloudss.getPosition(); //Recup la position de la pok�ball
            if (cloudPositiona.x > 1280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 20; //prend une hauteur al�atoire
                cloudss.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss.move(11.9, 0); //Bouge vers la gauche

            window.draw(cloudss2);
            sf::Vector2f cloudPosition2a = cloudss2.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition2a.x > 1480) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 20; //prend une hauteur al�atoire
                cloudss2.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss2.move(11.2, 0); //Bouge vers la gauche

            window.draw(cloudss3);
            sf::Vector2f cloudPosition3a = cloudss3.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition3a.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 20; //prend une hauteur al�atoire
                cloudss3.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss3.move(1.2, 0); //Bouge vers la gauche

            window.draw(cloudss4);
            sf::Vector2f cloudPosition4a = cloudss4.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition4a.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 20; //prend une hauteur al�atoire
                cloudss4.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss4.move(11.2, 0); //Bouge vers la gauche

            window.draw(cloudss6);
            sf::Vector2f cloudPosition6a = cloudss6.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition6a.x > 2760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 20; //prend une hauteur al�atoire
                cloudss6.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss6.move(.2, -2); //Bouge vers la gauche

            window.draw(cloudss7);
            sf::Vector2f cloudPosition7a = cloudss7.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition7a.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 2; //prend une hauteur al�atoire
                cloudss7.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss7.move(12.7, -.5); //Bouge vers la gauche

            window.draw(cloudss8);
            sf::Vector2f cloudPosition8a = cloudss8.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition8a.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 2; //prend une hauteur al�atoire
                cloudss8.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss8.move(.2, -.4); //Bouge vers la gauche

            window.draw(cloudss9);
            sf::Vector2f cloudPosition9a = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition9a.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 2; //prend une hauteur al�atoire
                cloudss9.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss9.move(.2, -.4); //Bouge vers la gauche

            window.draw(cloudss10);
            sf::Vector2f cloudPosition10a = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition10a.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20) + 2; //prend une hauteur al�atoire
                cloudss10.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss10.move(.01, 0); //Bouge vers la gauche





            window.draw(cloudss);
            sf::Vector2f cloudPositionz = cloudss.getPosition(); //Recup la position de la pok�ball
            if (cloudPositionz.x > 2280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss.move(13.9, 0); //Bouge vers la gauche

            window.draw(cloudss2);
            sf::Vector2f cloudPosition2z = cloudss2.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition2z.x > 2480) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss2.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss2.move(12.2, 0); //Bouge vers la gauche

            window.draw(cloudss3);
            sf::Vector2f cloudPosition3z = cloudss3.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition3z.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss3.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss3.move(13.2, 0); //Bouge vers la gauche

            window.draw(cloudss4);
            sf::Vector2f cloudPosition4z = cloudss4.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition4z.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss4.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss4.move(14.2, 0); //Bouge vers la gauche

            window.draw(cloudss6);
            sf::Vector2f cloudPosition6z = cloudss6.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition6z.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss6.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss6.move(14.2, -2); //Bouge vers la gauche

            window.draw(cloudss7);
            sf::Vector2f cloudPosition7z = cloudss7.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition7z.x > 2760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss7.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss7.move(12.7, -.5); //Bouge vers la gauche

            window.draw(cloudss8);
            sf::Vector2f cloudPosition8z = cloudss8.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition8z.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss8.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss8.move(12.2, -.4); //Bouge vers la gauche

            window.draw(cloudss9);
            sf::Vector2f cloudPosition9z = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition9z.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss9.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss9.move(13.2, -.4); //Bouge vers la gauche

            window.draw(cloudss10);
            sf::Vector2f cloudPosition10z = cloudss9.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition10z.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20); //prend une hauteur al�atoire
                cloudss10.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss10.move(11.1, 0); //Bouge vers la gauche


            window.draw(cloudsso);
            sf::Vector2f cloudPositionaz = cloudsso.getPosition(); //Recup la position de la pok�ball
            if (cloudPositionaz.x > 1280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 20); //prend une hauteur al�atoire
                cloudsso.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudsso.move(11.9, 0); //Bouge vers la gauche

            window.draw(cloudss2o);
            sf::Vector2f cloudPosition2az = cloudss2o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition2az.x > 1480) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss2o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss2o.move(1.2, 0); //Bouge vers la gauche

            window.draw(cloudss3o);
            sf::Vector2f cloudPosition3az = cloudss3o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition3az.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss3o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss3o.move(.2, 0); //Bouge vers la gauche

            window.draw(cloudss4o);
            sf::Vector2f cloudPosition4az = cloudss4o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition4az.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss4o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss4o.move(1.2, 0); //Bouge vers la gauche

            window.draw(cloudss6o);
            sf::Vector2f cloudPosition6az = cloudss6o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition6az.x > 2760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss6o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss6o.move(.2, -2); //Bouge vers la gauche

            window.draw(cloudss7o);
            sf::Vector2f cloudPosition7az = cloudss7o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition7az.x > 1760) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss7o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss7o.move(2.7, -.5); //Bouge vers la gauche

            window.draw(cloudss8o);
            sf::Vector2f cloudPosition8az = cloudss8o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition8az.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss8o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss8o.move(.2, -.4); //Bouge vers la gauche

            window.draw(cloudss9o);
            sf::Vector2f cloudPosition9az = cloudss9o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition9az.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 10); //prend une hauteur al�atoire
                cloudss9o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss9o.move(.2, -.4); //Bouge vers la gauche

            window.draw(cloudss10o);
            sf::Vector2f cloudPosition10az = cloudss10o.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition10az.x > 3000) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 360); //prend une hauteur al�atoire
                cloudss10o.setPosition(sf::Vector2f(-1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            cloudss10o.move(.01, 0); //Bouge vers la gauche
        }

        window.draw(sprite);
        sf::Vector2f spritPosition = sprite.getPosition(); //Recup la position de la pok�ball
        if (spritPosition.x < -380 || spritPosition.y < -135 || spritPosition.y > 950 || spritPosition.x > 1600) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (150, 150); //prend une hauteur al�atoire
            sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }

        window.draw(sprite2);
        sf::Vector2f spritPosition2 = sprite2.getPosition(); //Recup la position de la pok�ball
        if (spritPosition2.x < -380 || spritPosition2.y < -135 || spritPosition2.y > 950 || spritPosition2.x > 1600) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (150, 150); //prend une hauteur al�atoire
            sprite2.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }

        window.draw(sprite3);
        sf::Vector2f spritPosition3 = sprite3.getPosition(); //Recup la position de la pok�ball
        if (spritPosition3.x < -380 || spritPosition3.y < -135 || spritPosition3.y > 950 || spritPosition3.x > 1600) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (150, 150); //prend une hauteur al�atoire
            sprite3.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }


        window.draw(sprite4);
        sf::Vector2f spritPosition4 = sprite4.getPosition(); //Recup la position de la pok�ball
        if (spritPosition4.x < -380 || spritPosition4.y < -135 || spritPosition4.y > 950 || spritPosition4.x > 1600) //si c'est � gauche de l'�cran en hors champs
        {
            int y = (150, 150); //prend une hauteur al�atoire
            sprite4.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
        }


        if (plane4 && !plane2)
        {
            window.draw(Particulee);
            sf::Vector2f ParticulePosition = Particulee.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee.move(180.9, 0); //Bouge vers la gauche

            window.draw(Particulee2);
            sf::Vector2f ParticulePosition2 = Particulee2.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition2.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee2.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee2.move(170.9, 0); //Bouge vers la gauche

            window.draw(Particulee3);
            sf::Vector2f ParticulePosition3 = Particulee3.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition3.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee3.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee3.move(240, 0); //Bouge vers la gauche

            window.draw(Particulee4);
            sf::Vector2f ParticulePosition4 = Particulee4.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition4.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee4.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee4.move(260.9, 0); //Bouge vers la gauche

            window.draw(Particulee5);
            sf::Vector2f ParticulePosition5 = Particulee5.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition5.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee5.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee5.move(220, 0); //Bouge vers la gauche

            window.draw(Particulee6);
            sf::Vector2f ParticulePosition6 = Particulee6.getPosition(); //Recup la position de la pok�ball
            if (ParticulePosition6.x > 2500) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680); //prend une hauteur al�atoire
                Particulee6.setPosition(sf::Vector2f(-200, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
            }
            Particulee6.move(198.9, 0); //Bouge vers la gauche
        }
        //------------------------------------------Les spawns des missiles, les trajectoires al�atoire et leurs vitesses-----------------------------------------------------------
        if (!plane4 && isPlaying)
        {
            if (plane3)
            {
                missileSpeed3 = -15;
                missileSpeed2 = -16.7;
                missileSpeed1 = -14.2;
            }
            if (plane1 || plane2)
            {
                missileSpeed1 = -11;
                missileSpeed2 = -12.5;
                missileSpeed3 = -9.8;
            }
            window.draw(Missileee1);
            sf::Vector2f cloudPosition15 = Missileee1.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition15.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 24; //prend une hauteur al�atoire
                Missileee1.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs 
                if (progressiveMode)
                {
                    missileSpeed1 -= 0.1;

                    if (missileSpeed1 <= -10)
                    {
                        progressiveMode = false;
                    }
                }
            }
            Missileee1.move(missileSpeed1, 0); //Bouge vers la gauche

            window.draw(Missileee2);
            sf::Vector2f cloudPosition16 = Missileee2.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition16.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 200; //prend une hauteur al�atoire
                Missileee2.setPosition(sf::Vector2f(1600, y));
                if (progressiveMode)
                {
                    missileSpeed2 -= 0.1;

                    if (missileSpeed2 <= -10)
                    {
                        progressiveMode = false;
                    }
                }
            }
            Missileee2.move(missileSpeed2, 0); //Bouge vers la gauche

            window.draw(Missileee3);
            sf::Vector2f cloudPosition17 = Missileee3.getPosition(); //Recup la position de la pok�ball
            if (cloudPosition17.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 200; //prend une hauteur al�atoire
                Missileee3.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
                if (progressiveMode)
                {
                    missileSpeed3 -= 0.1;

                    if (missileSpeed3 <= -10)
                    {
                        progressiveMode = false;
                    }
                }

            }
            Missileee3.move(missileSpeed3, 0); //Bouge vers la gauche
        }



        //laser

        if (plane4 && isPlaying)
        {
            window.draw(RayonLaserr);
            sf::Vector2f RayonLaserPosition = RayonLaserr.getPosition(); //Recup la position de la pok�ball
            if (RayonLaserPosition.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 24; //prend une hauteur al�atoire
                RayonLaserr.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs 

            }
            RayonLaserr.move(-20.4, 0); //Bouge vers la gauche

            window.draw(RayonLaserr2);
            sf::Vector2f RayonLaserPosition2 = RayonLaserr2.getPosition(); //Recup la position de la pok�ball
            if (RayonLaserPosition2.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 24; //prend une hauteur al�atoire
                RayonLaserr2.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs 

            }
            RayonLaserr2.move(-14.8, 0); //Bouge vers la gauche

            window.draw(RayonLaserr3);
            sf::Vector2f RayonLaserPosition3 = RayonLaserr3.getPosition(); //Recup la position de la pok�ball
            if (RayonLaserPosition3.x < -280) //si c'est � gauche de l'�cran en hors champs
            {
                int y = (rand() % 680) + 24; //prend une hauteur al�atoire
                RayonLaserr3.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs 

            }
            RayonLaserr3.move(-15.9, 0); //Bouge vers la gauche
        }




        //---------------------------------------------------Collision system-----------------------------------------------------------------------

       // if (sprite2.getGlobalBounds().intersects(Missileee3.getGlobalBounds())|| sprite2.getGlobalBounds().intersects(Missileee2.getGlobalBounds()) || sprite2.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
       //{
       //     int distanceTotal = kilometre;

       //     if (distanceTotal >= bestDistance)
       //     {
       //         bestDistance = distanceTotal;
       //     }
       //     sprite2.setScale(.00005f, .000005);

       //     textOVV.setScale(.6f, .6f); // Double la taille de l'image

       //     textOVV.setPosition(280, -30);

       //     metre = 0; kilometre = 0;
       //     Distance.setPosition(-620, -860);
       //     BestDistance.setPosition(617, 92);
       //     canFire2 = false;
       //     startGameMode = true;
       //     Missileee1.setScale(.00009f, .000009f);
       //     Missileee2.setScale(.00009f, .000009f);
       //     Missileee3.setScale(.00009f, .000009f);
       //     scoreText.setPosition(700, 20);
       //     bestscoreTextR.setPosition(647, 62);
       //     // Play the music
       //     PlaneSound.stop();
       //     sprite2.setPosition(-130, -120);

       // }


        if (ShapCollision.getGlobalBounds().intersects(Missileee3.getGlobalBounds()) || ShapCollision.getGlobalBounds().intersects(Missileee2.getGlobalBounds()) || ShapCollision.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
        {
            isPlaying = false;
            int distanceTotal = kilometre;

            if (distanceTotal >= bestDistance)
            {
                bestDistance = distanceTotal;
            }
            sprite3.setScale(.00005f, .000005);

            textOVV.setScale(.6f, .6f); // Double la taille de l'image

            textOVV.setPosition(280, -30);

            metre = 0; kilometre = 0;
            Distance.setPosition(-620, -860);
            BestDistance.setPosition(617, 92);
            canFire2 = false;
            startGameMode = true;
            Missileee1.setScale(.00009f, .000009f);
            Missileee2.setScale(.00009f, .000009f);
            Missileee3.setScale(.00009f, .000009f);
            scoreText.setPosition(700, 20);
            bestscoreTextR.setPosition(647, 62);
            // Play the music
            PlaneSound.stop();
            sprite2.setPosition(-130, -120);
            sprite3.setPosition(-130, -120);
            sprite.setPosition(-130, -120);
            sprite4.setPosition(-130, -120);
            ShapCollision.setPosition(-30, -300);

            //plane3 = false;

        }

        if (ShapCollision.getGlobalBounds().intersects(RayonLaserr.getGlobalBounds()) || ShapCollision.getGlobalBounds().intersects(RayonLaserr2.getGlobalBounds()) || ShapCollision.getGlobalBounds().intersects(RayonLaserr3.getGlobalBounds()))
        {
            isPlaying = false;
            int distanceTotal = kilometre;

            if (distanceTotal >= bestDistance)
            {
                bestDistance = distanceTotal;
            }
            sprite4.setScale(.00005f, .000005);

            textOVV.setScale(.6f, .6f); // Double la taille de l'image

            textOVV.setPosition(280, -30);
            x = 0; y = 0;
            metre = 0; kilometre = 0;
            Distance.setPosition(-620, -860);
            BestDistance.setPosition(617, 92);
            canFire2 = false;
            startGameMode = true;
            RayonLaserr.setScale(.00009f, .000009f);
            RayonLaserr2.setScale(.00009f, .000009f);
            RayonLaserr3.setScale(.00009f, .000009f);
            Particulee.setPosition(-30, -50);
            Particulee2.setPosition(-30, -50);
            Particulee3.setPosition(-30, -50);
            Particulee4.setPosition(-30, -50);
            Particulee5.setPosition(-30, -50);
            Particulee6.setPosition(-30, -50);
            RayonLaserr.setPosition(-30, -50000);
            RayonLaserr2.setPosition(-30, -50000);
            RayonLaserr3.setPosition(-30, -50000);
            scoreText.setPosition(700, 20);
            bestscoreTextR.setPosition(647, 62);
            // Play the music
            PlaneSound.stop();
            sprite2.setPosition(-130, -120);
            sprite3.setPosition(-130, -120);
            sprite4.setPosition(-130, -120);
            sprite.setPosition(-130, -120);
            sprite.setScale(.000005f, .000005f);

            //plane3 = false;
        }

        //    // D�tecter la collision entre l'avion et le missile
        //if (sprite.getGlobalBounds().intersects(Missileee3.getGlobalBounds()))
        //{
        //    int distanceTotal = kilometre;

        //    if (distanceTotal >= bestDistance)
        //    {
        //        bestDistance = distanceTotal;
        //    }
        //    sprite.setScale(.00005f, .000005);

        //    textOVV.setScale(.6f, .6f); // Double la taille de l'image

        //    textOVV.setPosition(280, -30);

        //    metre = 0; kilometre = 0;
        //    Distance.setPosition(-620, -860);
        //    BestDistance.setPosition(617, 92);
        //    canFire2 = false;
        //    startGameMode = true;
        //    Missileee1.setScale(.00009f, .000009f);
        //    Missileee2.setScale(.00009f, .000009f);
        //    Missileee3.setScale(.00009f, .000009f);
        //    scoreText.setPosition(700, 20);
        //    bestscoreTextR.setPosition(647, 62);
        //    // Play the music
        //    PlaneSound.stop();
        //    sprite.setPosition(-130, -120);
        //}

        //// D�tecter la collision entre l'avion et le missile
        //if (sprite.getGlobalBounds().intersects(Missileee2.getGlobalBounds()))
        //{
        //    int distanceTotal = kilometre;

        //    if (distanceTotal >= bestDistance)
        //    {
        //        bestDistance = distanceTotal;
        //    }
        //    sprite.setScale(.00005f, .000005);

        //    textOVV.setScale(.6f, .6f); // Double la taille de l'image

        //    textOVV.setPosition(280, -30);
        //    metre = 0; kilometre = 0;
        //    Distance.setPosition(-620, -860);
        //    BestDistance.setPosition(617, 92);
        //    canFire2 = false;
        //    startGameMode = true;
        //    Missileee1.setScale(.00009f, .000009f);
        //    Missileee2.setScale(.00009f, .000009f);
        //    Missileee3.setScale(.00009f, .000009f);
        //    scoreText.setPosition(700, 20);
        //    bestscoreTextR.setPosition(647, 62);
        //    PlaneSound.stop();
        //    sprite.setPosition(-130, -120);
        //}

        //// D�tecter la collision entre l'avion et le missile
        //if (sprite.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
        //{
        //    int distanceTotal = kilometre;

        //    if (distanceTotal >= bestDistance)
        //    {
        //        bestDistance = distanceTotal;
        //    }
        //    sprite.setScale(.00005f, .000005);



        //    textOVV.setScale(.6f, .6f); // Double la taille de l'image

        //    textOVV.setPosition(280, -30);
        //    metre = 0; kilometre = 0;
        //    Distance.setPosition(-620, -860);
        //    BestDistance.setPosition(617, 92);
        //    canFire2 = false;
        //    startGameMode = true;
        //    Missileee1.setScale(.00009f, .000009f);
        //    Missileee2.setScale(.00009f, .000009f);
        //    Missileee3.setScale(.00009f, .000009f);
        //    scoreText.setPosition(700, 20);
        //    bestscoreTextR.setPosition(647, 62);
        //    PlaneSound.stop();
        //    sprite.setPosition(-130, -120);
        //}

        // D�tecter la collision entre l'avion et le missile
        if (MyOwnMissilee.getGlobalBounds().intersects(Missileee1.getGlobalBounds()) || MyOwnMissilee.getGlobalBounds().intersects(Missileee2.getGlobalBounds())
            || MyOwnMissilee.getGlobalBounds().intersects(Missileee3.getGlobalBounds()))
        {
            MyOwnMissilee.setTexture(Missile11);
            MyOwnMissilee.setScale(.6f, .6f);
            sppedOfMyMissile = -5;
            explosionscale = true;
            explosionopacite = true;
            elapsed = 0;
            PoseYBall += VarBallMove;
            int PoseYBallCos = 300 - 300 * cos((PoseYBall * .57 + 280) / 300);
            if (PoseYBall == 210) VarBallMove = 1;
            if (PoseYBall == 300) VarBallMove = -1;
            Missile111.setScale(160, PoseYBallCos);
            if (score >= BestScore)
            {
                BestScore = score + 1;
            }
        }
        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnMissilee.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
        {

            // Play the music
            music3.play();
            MyOwnMissilee.setTexture(Missile11);
            MyOwnMissilee.setScale(.6f, .6f);
            sppedOfMyMissile = -5;
            explosionscale = true;
            explosionopacite = true;
            Missileee1.setPosition(-3000, -3000);
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            elapsed = 0;
            PoseYBall += VarBallMove;
            int PoseYBallCos = 300 - 300 * cos((PoseYBall * .57 + 280) / 300);
            if (PoseYBall == 210) VarBallMove = 1;
            if (PoseYBall == 300) VarBallMove = -1;
            Missile111.setScale(160, PoseYBallCos);
            score++;
        }

        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnMissilee.getGlobalBounds().intersects(Missileee2.getGlobalBounds()))
        {

            // Play the music
            music3.play();
            MyOwnMissilee.setTexture(Missile11);
            MyOwnMissilee.setScale(.6f, .6f);
            sppedOfMyMissile = -5;
            explosionscale = true;
            explosionopacite = true;
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            Missileee2.setPosition(-3000, -3000);
            elapsed = 0;
            PoseYBall += VarBallMove;
            int PoseYBallCos = 300 - 300 * cos((PoseYBall * .57 + 280) / 300);
            if (PoseYBall == 210) VarBallMove = 1;
            if (PoseYBall == 300) VarBallMove = -1;
            Missile111.setScale(160, PoseYBallCos);
            score++;
        }

        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnMissilee.getGlobalBounds().intersects(Missileee3.getGlobalBounds()))
        {

            // Play the music
            music3.play();
            MyOwnMissilee.setTexture(Missile11);
            MyOwnMissilee.setScale(.6f, .6f);
            sppedOfMyMissile = -5;
            explosionscale = true;
            explosionopacite = true;
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            Missileee3.setPosition(-3000, -3000);
            elapsed = 0;
            PoseYBall += VarBallMove;
            int PoseYBallCos = 300 - 300 * cos((PoseYBall * .57 + 280) / 300);
            if (PoseYBall == 210) VarBallMove = 1;
            if (PoseYBall == 300) VarBallMove = -1;
            Missile111.setScale(160, PoseYBallCos);
            score++;
        }


        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnRayonLaserr.getGlobalBounds().intersects(RayonLaserr.getGlobalBounds()))
        {
            // Play the music
            music3.play();
            int y = (rand() % 680);
            RayonLaserr.setPosition(1800, y);
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            score++;
        }

        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnRayonLaserr.getGlobalBounds().intersects(RayonLaserr2.getGlobalBounds()))
        {

            // Play the music
            music3.play();
            int y = (rand() % 680);
            RayonLaserr.setPosition(1800, y);
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            RayonLaserr2.setPosition(-3000, -3000);
            score++;
        }

        // D�tecter la collision entre le missile de l'avion et le missile
        if (MyOwnRayonLaserr.getGlobalBounds().intersects(RayonLaserr3.getGlobalBounds()))
        {

            // Play the music
            music3.play();
            int y = (rand() % 680);
            RayonLaserr.setPosition(1800, y);
            MyOwnMissileSmokee.setPosition(MyOwnMissilee.getPosition());
            RayonLaserr3.setPosition(-3000, -3000);
            score++;
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

        if (plane2 && !plane3 && isPlaying)
        {
            sprite2.move(x, y);

        }

        if (!plane2 && !plane3 && !plane4 && isPlaying)
        {
            sprite.move(x, y);
        }

        if (plane3 && isPlaying)
        {
            sprite3.move(x, y);
        }

        if (plane4 && isPlaying)
        {
            sprite4.move(x, y);
        }

        // Effacer la fen�tre
        window.clear();

        // Dessiner le sprite
        window.draw(background);

        // dessiner le nuage
        window.draw(cloudss3o);

        // dessiner le nuage
        window.draw(cloudss4o);

        // dessiner le nuage
        window.draw(cloudss6o);

        // Dessiner le nuage
        window.draw(cloudss7o);

        // Dessiner le nuage
        window.draw(cloudss8o);

        // Dessiner le nuage
        window.draw(cloudss3);

        // Dessiner le nuage
        window.draw(cloudss4);

        // Dessiner le nuage
        window.draw(MenuPP);

        // Dessiner le nuage
        window.draw(cloudss6);

        // Dessiner le nuage
        window.draw(cloudss7);

        //// Dessiner le nuage
        //window.draw(cloudss2d);


        // Dessiner le nuage
        window.draw(Missileee1);

        // Dessiner le nuage
        window.draw(Missileee2);

        // Dessiner le nuage
        window.draw(Missileee3);

        // Dessiner le sprite
        window.draw(sprite);  //----------PC------------

        // Dessiner le sprite
        window.draw(sprite2);

        // Dessiner le sprite
        window.draw(sprite3);

        // Dessiner le nuage
        window.draw(MyOwnMissilee);

        // Dessiner le nuage
        window.draw(MyOwnMissileSmokee);


        // Dessiner le nuage
        window.draw(cloudss8);

        // Dessiner le nuage
        window.draw(SettingsMenuu);

        // Dessiner le nuage
        window.draw(cloudss9);

        window.draw(background2);

        // Dessiner le sprite
        window.draw(sprite4);

        window.draw(Particulee);
        window.draw(Particulee2);
        window.draw(Particulee3);
        window.draw(Particulee4);
        window.draw(Particulee5);
        window.draw(Particulee6);

        window.draw(MyOwnRayonLaserr);
        window.draw(RayonLaserr);
        window.draw(RayonLaserr2);
        window.draw(RayonLaserr3);

        // Dessiner le nuage
        window.draw(text);

        // Dessiner le nuage
        window.draw(scoreText);

        // Dessiner le nuage
        window.draw(bestscoreTextR);

        // Dessiner le nuage
        window.draw(Distance);

        // Dessiner le nuage
        window.draw(BestDistance);

        // Dessiner le nuage
        window.draw(textOVV);

        // Dessiner le nuage
        window.draw(NotEnough);

        // Dessiner le nuage
        window.draw(Tuto);

        // Dessiner le nuage
        window.draw(ShapCollision);

        // Dessiner le nuage
        window.draw(loadingScreenn);

        // Mettre � jour la fen�tre
        window.display();

        if (FPSautomatic)
        {
            // Attendre 1/60�me de seconde (60 FPS)
            sf::Time elapsedTime = clock.getElapsedTime();
            if (elapsedTime.asMilliseconds() < 16)
            {
                sf::sleep(sf::milliseconds(16) - elapsedTime);
            }
            clock.restart();
        }


    }
    return EXIT_SUCCESS;
}











//("X:/tout le reste/Images, videos et musiques/"))




























//---------------------------------------------------------------------------------ancien code--------------------------------------------------------------------


//#include <SFML/Audio.hpp>
//#include  <SFML/Graphics.hpp>
//
//int main()
//{
//    sf::Clock clock;
//
//
//    // Cr�er la fen�tre
//    sf::RenderWindow window(sf::VideoMode(1500, 920), "Planum");
//
//    window.setVerticalSyncEnabled(true);
//
//    // Charger l'image
//    sf::Texture texture, texture2, texture3, texture4;
//    if (!texture.loadFromFile("X:/tout le reste/Images, videos et musiques/pngegg.png") || !texture2.loadFromFile("X:/tout le reste/Images, videos et musiques/avions vers le bas.png") || !texture3.loadFromFile("X:/tout le reste/Images, videos et musiques/avion vers le haut.png") || !texture4.loadFromFile("X:/tout le reste/Images, videos et musiques/Explosion de l'avion.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite sprite(texture);
//
//
//    //--------------------------------Les nuages----------------------------------------------
//
//    // Charger l'image
//    sf::Texture clouds;
//    if (!clouds.loadFromFile("X:/tout le reste/Images, videos et musiques/rain-clouds-png-27.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss(clouds);
//
//    // Charger l'image
//    sf::Texture clouds2;
//    if (!clouds2.loadFromFile("X:/tout le reste/Images, videos et musiques/30-white-clouds-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss2(clouds2);
//
//    // Charger l'image
//    sf::Texture clouds3;
//    if (!clouds3.loadFromFile("X:/tout le reste/Images, videos et musiques/19-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss3(clouds3);
//
//    // Charger l'image
//    sf::Texture clouds4;
//    if (!clouds4.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss4(clouds4);
//
//
//    // Charger l'image
//    sf::Texture clouds6;
//    if (!clouds6.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss6(clouds6);
//
//    cloudss6.setPosition(200.f, 200.f);
//
//
//    // Charger l'image
//    sf::Texture clouds7;
//    if (!clouds7.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss7(clouds7);
//
//
//    // Charger l'image
//    sf::Texture clouds8;
//    if (!clouds8.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss8(clouds8);
//
//    // Charger l'image
//    sf::Texture clouds9;
//    if (!clouds9.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss9(clouds9);
//
//    // Charger l'image
//    sf::Texture clouds10;
//    if (!clouds10.loadFromFile("X:/tout le reste/Images, videos et musiques/12-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss10(clouds10);
//
//    // Charger l'image
//    sf::Texture clouds5;
//    if (!clouds5.loadFromFile("X:/tout le reste/Images, videos et musiques/10-cloud-png-image.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite cloudss5(clouds5);
//
//    //sf::Font font;
//    //if (!font.loadFromFile("X:/tout le reste/Images, videos et musiques/GAME OVER font police.ttf"))
//    //{
//    //    return -1; // Erreur de chargement de la police
//    //}
//    //sf::Text message("Bonjour le monde !", font, 30);
//    //message.setFillColor(sf::Color::White);
//    //message.setPosition(100, 100);
//
//    //-------------------------------------------------Missiles--------------------------------------------------------
//
//
//        // Charger l'image
//    sf::Texture Missile1;
//    if (!Missile1.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite Missileee1(Missile1);
//
//    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
//    int newWidth2 = Missile1.getSize().x / 2;
//    int newHeight2 = Missile1.getSize().y / 2;
//
//
//    // D�finir l'�chelle de l'image
//    Missileee1.setScale(.09f, .09f); // Double la taille de l'image
//
//
//
//
//    // Charger l'image
//    sf::Texture Missile2;
//    if (!Missile2.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite Missileee2(Missile2);
//
//    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
//    int newWidth3 = Missile2.getSize().x / 2;
//    int newHeight3 = Missile2.getSize().y / 2;
//
//
//    // D�finir l'�chelle de l'image
//    Missileee2.setScale(.09f, .09f); // Double la taille de l'image
//
//
//    // Charger l'image
//    sf::Texture Missile3;
//    if (!Missile3.loadFromFile("X:/tout le reste/Images, videos et musiques/Missile-Rocket-Transparent-PNG.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite Missileee3(Missile3);
//
//    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
//    int newWidth4 = Missile3.getSize().x / 2;
//    int newHeight4 = Missile3.getSize().y / 2;
//
//
//    // D�finir l'�chelle de l'image
//    Missileee3.setScale(.09f, .09f); // Double la taille de l'image
//
//
//    Missileee1.setPosition(1600.f, 689);
//
//    Missileee2.setPosition(1600.f, 463);
//
//    Missileee3.setPosition(1600.f, 500);
//
//    //---------------------------------Texte-----------------------------------------
//
//    sf::Font font;
//    font.loadFromFile("arial.ttf");
//    sf::Text text;
//    text.setString("GAME OVER");
//    text.setCharacterSize(25);
//    text.setFillColor(sf::Color::Red);
//    text.setStyle(sf::Text::Bold);
//    text.setPosition(300, 300);
//    sf::Text::Underlined;
//
//
//
//    // Charger l'image
//    sf::Texture textOV;
//    if (!textOV.loadFromFile("X:/tout le reste/Images, videos et musiques/Game over text picture.png"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite (l'image affich�e dans la fen�tre)
//    sf::Sprite textOVV(textOV);
//
//
//    // D�finir l'�chelle de l'image
//    textOVV.setScale(.005f, .005f); // Double la taille de l'image
//
//    textOVV.setPosition(3000, -3000);
//
//    //------------------------------------------------------------------
//
//
//    // D�finir la nouvelle taille de l'image (par exemple, doubler la taille)
//    int newWidth = texture.getSize().x / 2;
//    int newHeight = texture.getSize().y / 2;
//
//
//    // D�finir l'�chelle de l'image
//    sprite.setScale(.2f, .2f); // Double la taille de l'image
//
//    sprite.setRotation(0); // Double la taille de l'image
//
//
//
//    // Position initiale du sprite
//    float x = 0.f;
//    float y = 0.f;
//
//    // Charger l'image d'arri�re-plan
//    sf::Texture backgroundTexture;
//    if (!backgroundTexture.loadFromFile("X:/tout le reste/Images, videos et musiques/Nuage vu de haut rogner - dall-e.PNG"))
//    {
//        return 1; // Erreur de chargement de l'image
//    }
//
//    // Cr�er le sprite pour l'arri�re-plan
//    sf::Sprite background(backgroundTexture);
//
//
//    // D�finir l'�chelle de l'image
//    background.setScale(1.f, 1.f); // Double la taille de l'image
//
//    //------------------------------------Musique--------------------------------------------------------
//
//    // Load a music to play
//    sf::Music music;
//    if (!music.openFromFile("X:/tout le reste/Images, videos et musiques/Musique/bruits de vent.wav"))
//        return EXIT_FAILURE;
//
//
//    music.setLoop(window.isOpen());
//
//    // Play the music
//    music.play();
//
//    // Load a music to play
//    sf::Music music2;
//    if (!music2.openFromFile("X:/tout le reste/Images, videos et musiques/Musique/No-copyr- smooth music.wav"))
//        return EXIT_FAILURE;
//
//
//    music2.setLoop(window.isOpen());
//
//    // Play the music
//    music2.play();
//
//
//    float speed = .05f;
//    float speeds = .0f;
//
//    // Boucle principale
//    while (window.isOpen())
//    {
//        // G�rer les �v�nements
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            // Fermer la fen�tre lorsqu'on clique sur la croix
//            if (event.type == sf::Event::Closed)
//            {
//                window.close();
//            }
//
//            sf::Time backgroundTexture = sf::seconds(0.01f);
//
//            // G�rer les entr�es de mouvement
//            if (event.type == sf::Event::KeyPressed)
//            {
//                switch (event.key.code)
//                {
//                case sf::Keyboard::Left:
//                    x -= 0.5f; // D�placer le sprite vers la gauche
//                    sprite.setTexture(texture);
//                    break;
//
//                case sf::Keyboard::Right:
//                    x += 0.5f; // D�placer le sprite vers la droite
//                    break;
//
//                case sf::Keyboard::Up:
//                    y -= 0.5f; // D�placer le sprite vers le haut
//                    sprite.setTexture(texture3);
//                    break;
//
//                case sf::Keyboard::Down:
//                    y += 0.5f; // D�placer le sprite vers le bas
//                    sprite.setTexture(texture2);
//                    break;
//                case sf::Keyboard::Q:
//                    x -= 0.5f; // D�placer le sprite vers la gauche
//                    sprite.setTexture(texture);
//                    break;
//
//                case sf::Keyboard::D:
//                    x += 0.5f; // D�placer le sprite vers la droite
//                    break;
//
//                case sf::Keyboard::Z:
//                    y -= 0.5f; // D�placer le sprite vers le haut
//                    sprite.setTexture(texture3);
//                    break;
//
//                case sf::Keyboard::S:
//                    y += 0.5f; // D�placer le sprite vers le bas
//                    sprite.setTexture(texture2);
//                    break;
//                case sf::Keyboard::Escape:
//                    window.close(); //fermer la fenetre
//                    break;
//                default:
//                    break;
//                }
//
//                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::G)
//                {
//                    int newWidth = texture.getSize().x / 2;
//                    int newHeight = texture.getSize().y / 2;
//                    sprite.setScale(.2f, .2f);
//                    sprite.setRotation(0);
//                    sprite.setPosition(50,250);
//                    textOVV.setScale(.005f, .005f);
//                    textOVV.setPosition(3000, -3000);
//                    sprite.setTexture(texture);
//                    window.display();
//                    x = 0.f;
//                    y = 0.f;
//
//                }
//
//            }
//
//
//
//        }
//
//        //---------------------------------------Les spawns des nuages, les trajectoires al�atoire et leurs vitesses---------------------------------------------------
//
//        window.draw(cloudss);
//        sf::Vector2f cloudPosition = cloudss.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition.x < -280) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss.move(-1.9,0); //Bouge vers la gauche
//
//        window.draw(cloudss2);
//        sf::Vector2f cloudPosition2 = cloudss2.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition2.x < -480) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss2.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss2.move(-1.2, 0); //Bouge vers la gauche
//
//        window.draw(cloudss3);
//        sf::Vector2f cloudPosition3 = cloudss3.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition3.x < -1760) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss3.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss3.move(-1.2, 0); //Bouge vers la gauche
//
//        window.draw(cloudss4);
//        sf::Vector2f cloudPosition4 = cloudss4.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition4.x < -1760) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss4.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss4.move(-3.2, 0); //Bouge vers la gauche
//
//        window.draw(cloudss6);
//        sf::Vector2f cloudPosition6 = cloudss6.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition6.x < -1760) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss6.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss6.move(-3.2, -2); //Bouge vers la gauche
//
//        window.draw(cloudss7);
//        sf::Vector2f cloudPosition7 = cloudss7.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition7.x < -760) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss7.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss7.move(-.7, -.5); //Bouge vers la gauche
//
//        window.draw(cloudss8);
//        sf::Vector2f cloudPosition8 = cloudss8.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition8.x < -3000) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss8.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss8.move(-1.2, -.4); //Bouge vers la gauche
//
//        window.draw(cloudss9);
//        sf::Vector2f cloudPosition9 = cloudss9.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition9.x < -3000) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 20; //prend une hauteur al�atoire
//            cloudss9.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss9.move(-2.2, -.4); //Bouge vers la gauche
//
//        window.draw(cloudss10);
//        sf::Vector2f cloudPosition10 = cloudss9.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition10.x < -3000) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 70) + 20; //prend une hauteur al�atoire
//            cloudss10.setPosition(sf::Vector2f(1000, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        cloudss10.move(-.001, 0); //Bouge vers la gauche
//
//        window.draw(sprite);
//        sf::Vector2f spritPosition = sprite.getPosition(); //Recup la position de la pok�ball
//        if (spritPosition.x < -380  || spritPosition.y < -135 || spritPosition.y > 950 || spritPosition.x > 1600) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (150, 150); //prend une hauteur al�atoire
//            sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//
//
//
//        //------------------------------------------Les spawns des missiles, les trajectoires al�atoire et leurs vitesses-----------------------------------------------------------
//
//        window.draw(Missileee1);
//        sf::Vector2f cloudPosition15 = Missileee1.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition15.x < -280) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 24; //prend une hauteur al�atoire
//            Missileee1.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        Missileee1.move(-5.1, 0); //Bouge vers la gauche
//
//        window.draw(Missileee2);
//        sf::Vector2f cloudPosition16 = Missileee2.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition16.x < -280) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 200; //prend une hauteur al�atoire
//            Missileee2.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        Missileee2.move(-3.1, 0); //Bouge vers la gauche
//
//        window.draw(Missileee3);
//        sf::Vector2f cloudPosition17 = Missileee3.getPosition(); //Recup la position de la pok�ball
//        if (cloudPosition17.x < -280) //si c'est � gauche de l'�cran en hors champs
//        {
//            int y = (rand() % 680) + 200; //prend une hauteur al�atoire
//            Missileee3.setPosition(sf::Vector2f(1600, y)); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        }
//        Missileee3.move(-4.4, 0); //Bouge vers la gauche
//
//
//
//        //---------------------------------------------------Collision system-----------------------------------------------------------------------
//
//
//
//            // D�tecter la collision entre l'avion et le missile
//        if (sprite.getGlobalBounds().intersects(Missileee3.getGlobalBounds()))
//        {
//            sprite.setScale(.00005f, .000005);
//
//            textOVV.setScale(.6f, .6f); // Double la taille de l'image
//
//            textOVV.setPosition(280, -30);
//        }
//
//        // D�tecter la collision entre l'avion et le missile
//        if (sprite.getGlobalBounds().intersects(Missileee2.getGlobalBounds()))
//        {
//            sprite.setScale(.00005f, .000005);
//
//            textOVV.setScale(.6f, .6f); // Double la taille de l'image
//
//            textOVV.setPosition(280, -30);
//        }
//
//        // D�tecter la collision entre l'avion et le missile
//        if (sprite.getGlobalBounds().intersects(Missileee1.getGlobalBounds()))
//        {
//            sprite.setScale(.00005f, .000005);
//
//
//
//            textOVV.setScale(.6f, .6f); // Double la taille de l'image
//
//            textOVV.setPosition(280, -30);
//        }
//
//        //---------------------------------------------------------------------------------------------------------------------------------
//
//
//        //window.draw(sprite);
//        //sf::Vector2f spritPosition85 = sprite.getPosition(); //Recup la position de la pok�ball
//        //if (spritPosition85.x < -380 || spritPosition.y < -135 || spritPosition.y > 750 || spritPosition.x > 1000) //si c'est � gauche de l'�cran en hors champs
//        //{
//        //    sprite.setTexture(sf::Texture());
//        //    sf::Text text;
//        //    text.setString("GAME OVER");
//        //    text.setCharacterSize(25);
//        //    text.setFillColor(sf::Color::Red);
//        //    text.setStyle(sf::Text::Bold |
//        //        sf::Text::Underlined);
//        //    text.setPosition(300, 300);
//        //  
//        //}
//
//
//        //window.draw(sprite);
//        //sf::Vector2f spritPosition = sprite.getPosition(); //Recup la position de la pok�ball
//        //
//        //if (spritPosition.x < -380) //si c'est � gauche de l'�cran en hors champs
//        //{
//        //    int y = (750, 750); //prend une hauteur al�atoire
//        //    sprite.setPosition(350, 650); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        //}
//
//        //if (spritPosition.y < -135) //si c'est � gauche de l'�cran en hors champs
//        //{
//        //    int y = (150, 150); //prend une hauteur al�atoire
//        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        //}
//
//        //if (spritPosition.y > 750) //si c'est � gauche de l'�cran en hors champs
//        //{
//        //    int y = (150, 150); //prend une hauteur al�atoire
//        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        //}
//
//
//        //if (spritPosition.x > 1000) //si c'est � gauche de l'�cran en hors champs
//        //{
//        //    int y = (150, 150); //prend une hauteur al�atoire
//        //    sprite.setPosition(150, 150); //Remet la pok�ball � droite hors champs � la hauteur pioch�e au dessus
//        //}
//
//        // Modifier la position de l'image en fonction du temps �coul� depuis la derni�re frame
//        //float deltaTime = clock.getElapsedTime().asSeconds();
//        //background.move(speeds/* * deltaTime*/, speed * deltaTime);
//
//        //// Si l'image atteint un bord de la fen�tre, changer sa direction de d�placement
//        //if (background.getPosition().x > 0 || background.getPosition().x + background.getLocalBounds().width < window.getSize().x)
//        //{
//        //    speed = -speed;
//        //}
//        //if (background.getPosition().y > 0 || background.getPosition().y + background.getLocalBounds().height < window.getSize().y)
//        //{
//        //    speed = -speed;
//        //}
//
//        //// V�rifier si 1 seconde s'est �coul�e
//        //if (clock.getElapsedTime().asSeconds() >= .05f)
//        //{
//        //        background.setPosition(1.f, 1.f);
//        //    // R�initialiser l'horloge
//        //    clock.restart();
//        //}
//
//
//
//        //// V�rifier si 1 seconde s'est �coul�e
//        //if (clock.getElapsedTime().asSeconds() >= .05f)
//        //{
//        //    // Alterner les sprites
//        //    if (background.getTexture() == &backgroundTexture)
//        //    {
//        //        background.setTexture(backgroundTexture2);
//        //        background2.setTexture(backgroundTexture);
//        //    }
//        //    else
//        //    {
//        //        background.setTexture(backgroundTexture);
//        //        background2.setTexture(backgroundTexture2);
//        //    }
//
//        //    // R�initialiser l'horloge
//        //    clock.restart();
//        //}
//     
//        // Dessiner le nuage
//        //window.draw(cloudss);
//
//        //// Dessiner le nuage
//        //window.draw(cloudss2);
//
//        //// Dessiner le nuage
//        //window.draw(cloudss10);
//
//
//        // Mettre � jour la position du sprite
//        sprite.move(x, y);
//
//        // Effacer la fen�tre
//        window.clear();
//
//        // Dessiner le sprite
//        window.draw(background);
//
//        // Dessiner le nuage
//        window.draw(cloudss3);
//
//        // Dessiner le nuage
//        window.draw(cloudss4);
//
//        // Dessiner le nuage
//        window.draw(cloudss6);
//
//        // Dessiner le nuage
//        window.draw(cloudss7);
//
//        // Dessiner le nuage
//        window.draw(Missileee1);
//
//        // Dessiner le nuage
//        window.draw(Missileee2);
//
//        // Dessiner le nuage
//        window.draw(Missileee3);
//
//        // Dessiner le sprite
//        window.draw(sprite);  //----------PC------------
//
//        // Dessiner le nuage
//        window.draw(cloudss8);
//
//        // Dessiner le nuage
//        window.draw(cloudss9);
//
//        // Dessiner le nuage
//        window.draw(text);
//
//
//        // Dessiner le nuage
//        window.draw(textOVV);
//
//        // Mettre � jour la fen�tre
//        window.display();
//
//
//
// 
//    }
//
//
//    return EXIT_SUCCESS;
//}
//
//
//
//
//
//
//
//
//
//
//
////("X:/tout le reste/Images, videos et musiques/"))
