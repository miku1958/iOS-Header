//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueuePlayerClient : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_offsets;
    NSMutableSet *_requests;
    void *_playerPath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) void *playerPath;

- (void)_onQueue_invalidate;
- (id)_onQueue_writeData;
- (void)addRequest:(void *)arg1;
- (void *)contentItemForOffset:(long long)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasRequest:(id)arg1;
- (id)initWithPlayerPath:(void *)arg1 queue:(id)arg2;
- (void)invalidate;
- (void *)nowPlayingItem;
- (id)offsetForIdentifier:(id)arg1;
- (void)readData:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void *)requestForContentItem:(void *)arg1;
- (void *)requestForIdentifer:(id)arg1;
- (void)subscribeToPlaybackQueue:(void *)arg1 forRequest:(void *)arg2;
- (id)subscribedContentItemRequests:(id)arg1;
- (id)subscribedContentItems:(id)arg1;
- (id)subscribedContentItems:(id)arg1 forRequest:(void *)arg2;
- (id)subscribedContentItemsIdentifiers:(id)arg1 forRequest:(void *)arg2;
- (BOOL)verifyCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;

@end

