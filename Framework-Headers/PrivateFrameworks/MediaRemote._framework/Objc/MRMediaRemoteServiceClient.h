//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRAVRoutingClientController, MRNotificationClient, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    void *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSString *_preparedBundleID;
    struct MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
}

@property (nonatomic) void *activePlayerPath;
@property (readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (copy, nonatomic) NSString *preparedBundleID;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerSerialQueue;

+ (id)sharedServiceClient;
- (void)_onQueue_setActivePlayerPath:(void *)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)registerOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

