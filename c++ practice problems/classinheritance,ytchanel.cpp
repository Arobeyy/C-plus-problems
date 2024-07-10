#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel
{
private:
    string Name;
    int SubscriberCount;
    list<string> PublishedVideoTitle;

protected:
    string Ownername;

public:
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        Ownername = ownerName;
        SubscriberCount = 0;
    }

    void publishedVideos(string title)
    {
        PublishedVideoTitle.push_back(title);
    }

    void subscriber()
    {
        SubscriberCount++;
    }

    void unsubscriber()
    {
        if (SubscriberCount > 0)
        {
            SubscriberCount--;
        }
    }

    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Owner name: " << Ownername << endl;
        cout << "Subscriber count: " << SubscriberCount << endl;
        cout << "videos: " << endl;
        for (string videoTitels : PublishedVideoTitle)
        {
            cout << videoTitels << endl;
        }
    }

    string getName()
    {
        return Ownername;
    }
};

class CookingYoutubeChannel : public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownername) : YoutubeChannel(name, ownername)
    {
    }

    void Practice()
    {
        cout << Ownername << " is Practicing cooking, learning new recipes, experimenting with spices......" << endl;
    }
};

int main()
{
    YoutubeChannel ytchannel1("lavenderLight", "kashfia");
    ytchannel1.publishedVideos("How to make a to-do list 1");
    ytchannel1.publishedVideos("how to draw a cow 1");
    ytchannel1.publishedVideos("basics of painting fishes");

    CookingYoutubeChannel cytchannel("amy's kitchen", "amy");
    CookingYoutubeChannel cytchannel2("jons's kitchen", "jhon");
    cytchannel.publishedVideos("apple pie 1");
    cytchannel.publishedVideos("chocolate cake 1");
    cytchannel.subscriber();
    cytchannel.subscriber();
    cytchannel.getInfo();
    cytchannel.Practice();
    cytchannel2.Practice();


        return 0;
}