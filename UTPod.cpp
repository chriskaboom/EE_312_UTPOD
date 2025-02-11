#include "UTPod.h"
#include "Song.h"

using namespace std; 

UtPod::UtPod(){ 
    memSize = MAX_MEMORY; 
}

UtPod::UtPod(int size){ 
    if ((size > MAX_MEMORY) || (size <= 0)){
        memSize = MAX_MEMORY; 
    }
    else {
        memSize = size; 
    }
}

int UtPod::addSong(Song const &s){ 
    //Call RemainingMemory function and compare size of song w/ how much memory is left 
    //Respond with 0 if song can be added
    //Respond with -1 if there isn't enough memory 

    //If 0 then.....
    //dynamically allocate memory for a new song and add it to the end of a linked list

}

int UtPod::removeSong(Song const &s){ 
    //check to see what song is duplicated 
    //If duplicated song exists
        // delete first instance
        //return 0 for success
    //Else return -2, which means that no song was removed
}

void UtPod::shuffle(){ 


}

void UtPod::sortSongList(){ 

}

void UtPod::clearMemory(){ 
    //Free all Song nodes; 

}

int UtPod::getRemainingMemory(SongNode *songs){  //Amit Changed the input parameter for this function
    int currentTotal = 0; 
    while (songs != NULL){ 
        currentTotal = currentTotal + songs->s.getSize; 
        songs = songs->next; 
    }
    int remainingMem = memSize - currentTotal; 
    return (currentTotal); 
}

UtPod::~UtPod(){

}


