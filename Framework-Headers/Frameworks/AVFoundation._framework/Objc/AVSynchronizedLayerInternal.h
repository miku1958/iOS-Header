//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSynchronizedLayerInternal : NSObject
{
    AVPlayerItem *playerItem;
    BOOL isVisible;
    NSObject<OS_dispatch_queue> *serialQueue;
}

@end

