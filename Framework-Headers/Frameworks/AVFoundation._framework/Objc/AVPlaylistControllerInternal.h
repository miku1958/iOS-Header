//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlaylist, AVQueuePlayer, AVWeakReference;

@interface AVPlaylistControllerInternal : NSObject
{
    AVWeakReference *weakSelf;
    AVQueuePlayer *player;
    struct OpaqueFigPlaylistController *figPlaylistController;
    AVPlaylist *playlist;
}

@end

