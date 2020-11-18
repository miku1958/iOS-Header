//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MPNowPlayingPlaybackQueueCache : NSObject
{
    NSMutableSet *_items;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_changedItems;
    BOOL _coalescingUpdates;
}

- (void).cxx_destruct;
- (void)_contentItemChanged:(id)arg1;
- (void)_pushContentItemChangedNotification;
- (void)_scheduleContentItemChangedNotification:(id)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;

@end
