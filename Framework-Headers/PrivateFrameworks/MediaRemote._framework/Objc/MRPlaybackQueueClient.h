//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueClient : NSObject
{
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *playbackQueueClients;

- (void).cxx_destruct;
- (void)_handleApplicationRemovedNotification:(id)arg1;
- (void)_handleOriginRemovedNotification:(id)arg1;
- (void)_handlePlayerPathRemovedNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)playbackQueueClientForPlayerPath:(id)arg1;
- (void)removeClientIfPredicate:(CDUnknownBlockType)arg1;

@end

