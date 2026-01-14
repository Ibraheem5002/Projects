#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <windows.h>
using namespace std;

string Sentence1();
string Sentence2();
string Sentence3();
string Sentence4();
string Sentence5();
string Sentence6();
string Sentence7();
string Sentence8();
string Sentence9();
string Sentence10();
string Sentence11();
string Sentence12();
string Sentence13();
string Sentence14();
string Sentence15();
string Sentence16();
string Sentence17();
string Sentence18();
string Sentence19();
string Sentence20();

void fancyOutput(const string& story);

int main()
{
    srand(time(0));

    vector <string> Story;
    int index = 0;

    Story.push_back(Sentence1());
    Story.push_back(Sentence2());
    Story.push_back(Sentence3());
    Story.push_back(Sentence4());
    Story.push_back(Sentence5());
    Story.push_back(Sentence6());
    Story.push_back(Sentence7());
    Story.push_back(Sentence8());
    Story.push_back(Sentence9());
    Story.push_back(Sentence10());
    Story.push_back(Sentence11());
    Story.push_back(Sentence12());
    Story.push_back(Sentence13());
    Story.push_back(Sentence14());
    Story.push_back(Sentence15());
    Story.push_back(Sentence16());
    Story.push_back(Sentence17());
    Story.push_back(Sentence18());
    Story.push_back(Sentence19());
    Story.push_back(Sentence20());

    cout << "Your story is: " << endl;

    for (int i = index; i < Story.size(); i++)
    {
        fancyOutput(Story[i]);
        cout << endl;
        index = i;
    }
    cout << endl;

    int Option;

    while(1)
    {
        cout << "Would you like to continue the story? (1 for yes, 0 for no): ";
        cin >> Option;

        if (Option == 0)
        {
            cout << "Thanks for reading!" << endl;
            break;
        }

        cout << "Continuing the story..." << endl << endl;
        
        Story.push_back(Sentence1());
        Story.push_back(Sentence2());
        Story.push_back(Sentence3());
        Story.push_back(Sentence4());
        Story.push_back(Sentence5());
        Story.push_back(Sentence6());
        Story.push_back(Sentence7());
        Story.push_back(Sentence8());
        Story.push_back(Sentence9());
        Story.push_back(Sentence10());
        Story.push_back(Sentence11());
        Story.push_back(Sentence12());
        Story.push_back(Sentence13());
        Story.push_back(Sentence14());
        Story.push_back(Sentence15());
        Story.push_back(Sentence16());
        Story.push_back(Sentence17());
        Story.push_back(Sentence18());
        Story.push_back(Sentence19());
        Story.push_back(Sentence20());

        for (int i = index; i < Story.size(); i++)
        {
            fancyOutput(Story[i]);
            cout << endl;
            index = i;
        }
        cout << endl;
    }

    cout << "Would you like to save the story? (1 for yes, 0 for no): ";
    cin >> Option;

    if (Option == 1)
    {
        cout << "Saving the story..." << endl;
        
        ofstream outFile("story.txt");
        if (!outFile)
        {
            cout << "Error: Could not open file for writing." << endl;
        }
        else
        {
            for (const string& line: Story)
            {
                outFile << line << endl;
            }

            cout << "Story saved successfully!" << endl;
        }
    }
}

void fancyOutput(const string& story)
{
    for (int i = 0; i < story.size(); i++)
    {
        cout << story[i];
        Sleep(50);
    }
}

string Sentence1()
{
    string Array[10] = {
        "The sun dipped below the hills as Maya stumbled upon a mysterious, glowing stone.",
        "Once upon a rainy night, a strange letter arrived at Leo's doorstep.",
        "Deep in the forest, something ancient began to awaken.",
        "Alex had no idea that today would be the last normal day of his life.",
        "In a world where music controlled the weather, Ella held the last forbidden note.",
        "The robot blinked for the first time and whispered, 'Where is my creator?'",
        "On his way to school, Jacob noticed a tiny door at the base of an old tree.",
        "The entire town froze as the clock tower struck thirteen.",
        "Sara opened the dusty journal and gasped at what she read on the first page.",
        "There was a knock at the window—not the door—and that's how it all began."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence2()
{
    string Array[10] = {
        "The glowing stone pulsed with a rhythm that matched Maya's heartbeat.",
        "The letter was sealed with a wax emblem she had never seen before.",
        "The ground trembled as ancient roots began to stir beneath the soil.",
        "Alex's phone buzzed with a message that would change everything.",
        "Ella's fingers tingled as she held the forbidden note, its power undeniable.",
        "The robot's eyes flickered, revealing a hidden message in binary code.",
        "Jacob felt a strange pull towards the tiny door, as if it called his name.",
        "The townsfolk whispered legends of the clock tower striking thirteen.",
        "Sara's heart raced as she read about a secret society hidden in plain sight.",
        "The figure outside the window was cloaked in shadows, its intentions unknown."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence3()
{
    string Array[10] = {
        "Maya reached out, her fingers brushing against the stone's surface.",
        "Leo carefully broke the seal, revealing a map that glowed faintly.",
        "A low growl echoed through the trees, sending shivers down Alex's spine.",
        "The message read: 'Meet me at the old bridge at midnight.'",
        "Ella felt a surge of energy as she played a note from the forbidden sheet.",
        "The robot's voice became clearer, 'I was built to protect you.'",
        "Jacob opened the door and found a spiral staircase leading down.",
        "The clock's hands spun wildly, defying the laws of time.",
        "Sara realized the journal contained clues to a hidden treasure.",
        "The figure outside whispered, 'I have something you need to see.'"
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence4()
{
    string Array[10] = {
        "The stone felt warm, almost alive, as it pulsed in her hand.",
        "The map showed a path leading to a place called 'The Forgotten Realm.'",
        "Alex's heart raced as he saw glowing eyes watching him from the shadows.",
        "He knew he had to go, but the thought of leaving his home terrified him.",
        "Ella's mind raced with possibilities as she played the note again.",
        "The robot's eyes glowed brighter, revealing a holographic image of its creator.",
        "Jacob descended the staircase, each step echoing in the darkness.",
        "The townsfolk gathered, their faces pale with fear and confusion.",
        "Sara felt a chill run down her spine as she read about the society's dark past.",
        "The figure stepped closer, revealing a face she recognized from her dreams."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence5()
{
    string Array[10] = {
        "Maya knew she had to find out more about the stone's origins.",
        "Leo decided to follow the map, hoping it would lead him to answers.",
        "Alex realized he had stumbled upon something far beyond his understanding.",
        "He packed a bag, determined to uncover the truth behind the message.",
        "Ella felt a connection to the note, as if it held the key to her destiny.",
        "The robot's creator was missing, and it needed Alex's help to find them.",
        "Jacob found himself in a hidden underground world filled with wonders.",
        "The clock tower's legend spoke of a time traveler who could alter fate.",
        "Sara's curiosity drove her to investigate the society further.",
        "The figure revealed a secret that would change everything for her."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence6()
{
    string Array[10] = {
        "Determined, Maya set off on a journey to uncover the stone's secrets.",
        "Leo's adventure led him to an ancient library filled with forgotten lore.",
        "Alex's life took a turn as he discovered a hidden world of magic.",
        "He met a mysterious stranger who claimed to know the truth behind the message.",
        "Ella's quest for the forbidden note took her to a hidden sanctuary.",
        "The robot and Alex formed an unlikely partnership to find its creator.",
        "Jacob encountered strange creatures that guided him deeper into the underground world.",
        "The clock tower's legend hinted at a prophecy waiting to be fulfilled.",
        "Sara found allies in unexpected places as she delved into the society's mysteries.",
        "The figure revealed a prophecy that intertwined their fates."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence7()
{
    string Array[10] = {
        "Maya's journey led her to an ancient temple guarded by mythical creatures.",
        "Leo discovered a hidden chamber filled with artifacts of immense power.",
        "Alex learned about a secret society that protected the balance of magic.",
        "The stranger revealed a hidden portal that could change everything.",
        "Ella's sanctuary was under threat, and she had to defend it at all costs.",
        "The robot's creator left behind clues that would lead them to safety.",
        "Jacob found himself in a labyrinth where every turn held a new challenge.",
        "The prophecy spoke of a hero who would rise to restore harmony.",
        "Sara uncovered a conspiracy that threatened the very fabric of reality.",
        "The figure's prophecy hinted at a coming storm that would test their resolve."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence8()
{
    string Array[10] = {
        "Maya faced trials that tested her courage and resolve.",
        "Leo had to solve riddles to unlock the secrets of the chamber.",
        "Alex's understanding of magic deepened as he learned from ancient texts.",
        "The portal shimmered with possibilities, but danger lurked on the other side.",
        "Ella rallied her allies to protect the sanctuary from impending doom.",
        "The clues led Alex and the robot to a hidden lab filled with advanced technology.",
        "Jacob's journey through the labyrinth revealed his true potential.",
        "The hero of the prophecy was not who everyone expected.",
        "Sara's investigation revealed allies in high places, but also dangerous enemies.",
        "The storm approached, and with it, a choice that would define their futures."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence9()
{
    string Array[10] = {
        "Maya's courage shone as she faced the guardian of the temple.",
        "Leo deciphered the chamber's secrets, revealing a map to an ancient artifact.",
        "Alex mastered a spell that could alter the course of their journey.",
        "The portal led to a realm where time flowed differently, testing their patience.",
        "Ella's sanctuary stood strong, but shadows of doubt crept in.",
        "The lab's technology revealed the robot's true purpose and its creator's fate.",
        "Jacob emerged from the labyrinth, transformed and ready for what lay ahead.",
        "The prophecy's hero was revealed to be someone from within their circle.",
        "Sara's allies prepared for a confrontation that would shake their world.",
        "The storm unleashed its fury, challenging their resolve and unity."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence10()
{
    string Array[10] = {
        "Maya's bravery inspired others to join her quest for the stone's truth.",
        "Leo's discovery of the artifact changed the course of their adventure.",
        "Alex's mastery of magic opened new paths and possibilities.",
        "The realm beyond the portal held secrets that could reshape their reality.",
        "Ella's leadership united her allies against a common threat.",
        "The robot's revelations brought clarity to its purpose and mission.",
        "Jacob's transformation empowered him to face the challenges ahead.",
        "The hero of the prophecy stepped forward, ready to embrace their destiny.",
        "Sara's investigation culminated in a showdown with those who sought to control reality.",
        "The storm tested their limits, but also forged unbreakable bonds."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence11()
{
    string Array[10] = {
        "Maya's allies rallied, forming a diverse team to uncover the stone's secrets.",
        "Leo's artifact led them to a hidden city lost in time.",
        "Alex's magic grew stronger, but so did the forces against them.",
        "The realm beyond the portal revealed ancient beings with their own agendas.",
        "Ella's sanctuary became a beacon of hope in dark times.",
        "The robot and Alex uncovered a conspiracy that threatened their world.",
        "Jacob's newfound strength drew the attention of both friends and foes.",
        "The hero of the prophecy faced trials that tested their very essence.",
        "Sara's confrontation with her enemies revealed unexpected allies.",
        "The storm's aftermath left them changed, but united in purpose."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence12()
{
    string Array[10] = {
        "Maya's team ventured into the hidden city, uncovering its forgotten history.",
        "Leo's artifact revealed a path to a powerful relic that could change everything.",
        "Alex's magic attracted the attention of dark forces seeking to exploit it.",
        "The ancient beings in the realm beyond the portal offered both wisdom and danger.",
        "Ella's sanctuary became a training ground for those willing to fight for their world.",
        "The conspiracy unraveled, revealing a network of spies and saboteurs.",
        "Jacob's strength was both a blessing and a curse, drawing envy and admiration.",
        "The hero of the prophecy faced their greatest challenge yet, testing their resolve.",
        "Sara's allies stood by her side as they prepared for the final confrontation.",
        "The storm's fury had passed, but its impact would be felt for generations."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence13()
{
    string Array[10] = {
        "Maya's discoveries in the hidden city revealed a connection to her past.",
        "Leo's relic was guarded by a creature of legend, testing their courage.",
        "Alex's magic became a double-edged sword, attracting both friends and foes.",
        "The ancient beings offered a choice: power or wisdom, but not both.",
        "Ella's sanctuary stood as a testament to resilience in the face of adversity.",
        "The conspiracy's mastermind was revealed, and their motives were chilling.",
        "Jacob learned that true strength came from within, not just physical might.",
        "The hero of the prophecy faced betrayal from an unexpected source.",
        "Sara's final confrontation tested her loyalty and resolve like never before.",
        "The storm had passed, but its legacy would shape their destinies."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence14()
{
    string Array[10] = {
        "Maya's past intertwined with the hidden city's secrets, revealing her destiny.",
        "Leo's courage shone as he faced the legendary creature guarding the relic.",
        "Alex's magic reached new heights, but so did the dangers surrounding them.",
        "The ancient beings' choice forced Alex to confront his deepest fears.",
        "Ella's sanctuary became a symbol of hope, inspiring others to join their cause.",
        "The mastermind behind the conspiracy revealed a shocking connection to Sara.",
        "Jacob's inner strength emerged as he faced challenges that tested his spirit.",
        "The hero of the prophecy stood at a crossroads, their choice defining their fate.",
        "Sara's loyalty was tested as she confronted those she once trusted.",
        "The storm's aftermath left scars, but also a renewed sense of purpose."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence15()
{
    string Array[10] = {
        "Maya embraced her destiny, determined to uncover the truth of her lineage.",
        "Leo's bravery led him to victory against the legendary creature.",
        "Alex's mastery of magic became crucial in the face of overwhelming odds.",
        "The ancient beings' choice forced Alex to redefine his understanding of power.",
        "Ella's sanctuary stood strong, a beacon of hope in a world shrouded in darkness.",
        "The conspiracy's mastermind was defeated, but at a great cost.",
        "Jacob's journey revealed that true strength lay in unity and friendship.",
        "The hero of the prophecy made a choice that would echo through time.",
        "Sara's confrontation with her enemies revealed hidden truths about herself.",
        "The storm had passed, leaving behind a world forever changed."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence16()
{
    string Array[10] = {
        "Maya's journey led her to a revelation about her family's past.",
        "Leo's victory against the creature unlocked new paths for their quest.",
        "Alex's magic became a force of nature, reshaping their reality.",
        "The ancient beings' choice revealed the true nature of power and sacrifice.",
        "Ella's sanctuary became a rallying point for those seeking change.",
        "The mastermind's defeat brought peace, but also left unanswered questions.",
        "Jacob's unity with his friends forged bonds that would last a lifetime.",
        "The hero of the prophecy embraced their destiny, ready to face whatever came next.",
        "Sara's revelations about herself changed her perspective on loyalty and trust.",
        "The storm's legacy was one of resilience and hope for a brighter future."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence17()
{
    string Array[10] = {
        "Maya's revelation about her past changed the course of her journey.",
        "Leo's unlocked paths led them to new allies and unexpected challenges.",
        "Alex's magic reshaped their reality, but also attracted new dangers.",
        "The ancient beings' choice taught Alex the true meaning of sacrifice.",
        "Ella's sanctuary became a symbol of resistance against tyranny.",
        "The mastermind's defeat left a power vacuum that threatened their world.",
        "Jacob's bonds with his friends became his greatest strength in adversity.",
        "The hero of the prophecy stood ready to face the future with courage.",
        "Sara's newfound understanding of herself empowered her to lead.",
        "The storm's legacy inspired a new generation to fight for a better world."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence18()
{
    string Array[10] = {
        "Maya's journey continued as she sought to understand her family's legacy.",
        "Leo's new allies brought fresh perspectives and resources to their quest.",
        "Alex's magic evolved, becoming a beacon of hope in dark times.",
        "The ancient beings' teachings guided Alex towards a greater purpose.",
        "Ella's sanctuary stood resilient, inspiring others to join their fight.",
        "The power vacuum left by the mastermind's defeat led to new conflicts.",
        "Jacob's friendships deepened, proving that unity was their greatest weapon.",
        "The hero of the prophecy prepared for challenges that lay ahead.",
        "Sara's leadership qualities emerged, guiding her allies through uncertainty.",
        "The storm's legacy became a testament to their struggles and triumphs."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence19()
{
    string Array[10] = {
        "Maya's understanding of her family's legacy grew with each passing day.",
        "Leo's allies played crucial roles in overcoming new challenges.",
        "Alex's magic became a force for good, inspiring hope in others.",
        "The ancient beings' wisdom illuminated Alex's path forward.",
        "Ella's sanctuary became a hub for those seeking justice and change.",
        "The conflicts arising from the power vacuum tested their resolve.",
        "Jacob's unity with his friends proved essential in their battles.",
        "The hero of the prophecy faced trials that would define their legacy.",
        "Sara's leadership inspired courage and resilience in her allies.",
        "The storm's legacy was one of perseverance and the promise of a brighter future."
    };

    int Option = rand() % 10;

    return Array[Option];
}

string Sentence20()
{
    string Array[10] = {
        "Maya's legacy became intertwined with the history of her ancestors.",
        "Leo's allies stood by him as they faced their greatest challenges yet.",
        "Alex's magic brought light to the darkest corners of their world.",
        "The ancient beings' teachings guided Alex towards a new understanding of his power.",
        "Ella's sanctuary became a symbol of hope and resilience in troubled times.",
        "The conflicts born from the power vacuum tested their unity and strength.",
        "Jacob's friendships became a source of inspiration and courage.",
        "The hero of the prophecy embraced their destiny, ready to shape the future.",
        "Sara's leadership qualities shone brightly, guiding her allies through adversity.",
        "The storm's legacy was one of triumph, unity, and the promise of a better tomorrow."
    };

    int Option = rand() % 10;

    return Array[Option];
}