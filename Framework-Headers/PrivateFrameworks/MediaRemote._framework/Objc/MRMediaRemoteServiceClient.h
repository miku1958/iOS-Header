//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVRoutingClientController, MRMediaRemoteService, MRNotificationClient, MRNotificationServiceClient, MRPlayerPath, NSArray, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    MRNotificationServiceClient *_notificationService;
    MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
}

@property (strong, nonatomic) MRPlayerPath *activePlayerPath;
@property (readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // @synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) MRMediaRemoteService *service; // @synthesize service=_service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;

+ (id)sharedServiceClient;
- (void).cxx_destruct;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)isOriginRegistered:(id)arg1;
- (void)processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeInvalidationHandler:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

