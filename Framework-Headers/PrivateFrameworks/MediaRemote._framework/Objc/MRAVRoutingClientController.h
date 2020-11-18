//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVRoutingClientController : NSObject
{
    struct MRMediaRemoteService *_mediaRemoteService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property (readonly, nonatomic) struct MRMediaRemoteService *mediaRemoteService; // @synthesize mediaRemoteService=_mediaRemoteService;

- (void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithMediaRemoteService:(struct MRMediaRemoteService *)arg1;

@end

