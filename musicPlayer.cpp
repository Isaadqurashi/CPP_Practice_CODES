#include <iostream>
#include <cstdlib> // For using system()
using namespace std;

int main()
{
    cout << "Simple Music Player\n";

    // Replace "your_music_file.mp3" with the path to your music file
    const char *musicFilePath = "firstmusic.mp3";

    // Construct the command to open the default music player with the specified file
    string command = "start " + std::string(musicFilePath);

    // Use system() to execute the command
    int result = system(command.c_str());

    // Check if the command was executed successfully
    if (result == 0)
    {
        cout << "Music player started successfully.\n";
    }
    else
    {
        cerr << "Error starting the music player.\n";
    }

    return 0;
}
