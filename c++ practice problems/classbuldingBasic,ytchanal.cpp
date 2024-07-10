#include <iostream>
#include <list>
using namespace std;

class YoutubeChanel
{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitel;

public:
    YoutubeChanel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }

    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscriber count: " << SubscriberCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitels : PublishedVideoTitel)
        {
            cout << videoTitels << endl;
        }
    }

    void publishedVideo(string title)
    {
        PublishedVideoTitel.push_back(title);
    }

    void subscribe()
    {
        SubscriberCount++;
    }

    void unsubscribe()
    {
        if(SubscriberCount > 0)
        SubscriberCount--;
    }

    string getName()
    {
        return Name;
    }
};

int main()
{
    YoutubeChanel ytchanel1("lavenderlight", "kashfia");
    ytchanel1.publishedVideo("watercolor basic 1");
    ytchanel1.publishedVideo("acrelic for beginner 1");
    ytchanel1.publishedVideo("ASMR painting");

    YoutubeChanel ytchanel2("winterdandelions", "aurora");
    ytchanel2.publishedVideo("basic stiches 1");
    ytchanel2.publishedVideo("flower and petals 1");
    ytchanel2.publishedVideo("ASMR sewing 1");

    ytchanel1.subscribe();
    ytchanel1.subscribe();
    ytchanel1.subscribe();
    ytchanel1.unsubscribe();
    ytchanel1.getName();
    ytchanel1.getInfo();
    ytchanel2.getInfo();

    return 0;
}