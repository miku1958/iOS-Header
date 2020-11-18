//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem, AVQueuePlayer, AVWeakReference, NSError, NSMutableArray;
@protocol AVCallbackCancellation, OS_dispatch_queue;

@interface AVPlayerLooperInternal : NSObject
{
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    CDStruct_e83c9415 loopRange;
    long long loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long playerOriginalActionAtItemEnd;
    CDStruct_1b6d18a9 forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    BOOL waitingForLastLoopingCopyToFinish;
    long long status;
    NSError *error;
    id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
    NSMutableArray *loopingItemStatusKVOInvokers;
    AVWeakReference *weakReference;
    BOOL listeningForItemFailedToPlayToEndTime;
}

@end

