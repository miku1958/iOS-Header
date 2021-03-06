//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputContext, BSAtomicSignal, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSNotificationCenter, NSString;
@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding;

@interface SBAVSystemControllerCache : NSObject
{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _dataProviderInitializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    AVOutputContext *_queue_outputContext;
    id<SBAVSystemControllerDataProviding> _queue_dataProvider;
    NSMutableDictionary *_notificationToHandlerMap;
    NSMutableDictionary *_notificationToBackgroundQueryCancellationSignalMap;
    BOOL _queue_initialized;
    BSAtomicSignal *_queue_serverDeathSignal;
    BOOL _queue_fullyMuted;
    float _queue_volumeLimit;
    BOOL _queue_volumeLimitEnforced;
    NSString *_queue_activeAudioRoute;
    NSDictionary *_queue_activeAudioRouteInfo;
    NSArray *_queue_pickableRoutes;
    NSArray *_queue_activeOutputDevices;
    BOOL _outputContextSupportsMultipleOutputDevices;
    BOOL _queue_airplayDisplayActive;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
}

@property (readonly, copy, nonatomic) NSString *activeAudioRoute; // @dynamic activeAudioRoute;
@property (readonly, copy, nonatomic) NSDictionary *activeAudioRouteInfo; // @dynamic activeAudioRouteInfo;
@property (readonly, copy, nonatomic) NSArray *activeOutputDevices; // @dynamic activeOutputDevices;
@property (readonly, nonatomic, getter=isAirplayDisplayActive) BOOL airplayDisplayActive; // @dynamic airplayDisplayActive;
@property (readonly, nonatomic, getter=isFullyMuted) BOOL fullyMuted; // @dynamic fullyMuted;
@property (readonly, copy, nonatomic) NSArray *pickableRoutes; // @dynamic pickableRoutes;
@property (readonly, nonatomic) float volumeLimit; // @dynamic volumeLimit;
@property (readonly, nonatomic, getter=isVolumeLimitEnforced) BOOL volumeLimitEnforced; // @dynamic volumeLimitEnforced;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_queryActiveOutputDevicesFromContext:(id)arg1;
- (id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg1;
- (void)_queue_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_rebuildCache;
- (void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg1;
- (void)_queue_updateActiveAudioRouteFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateActiveOutputDevicesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateFullyMutedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updatePickableRoutesFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateVolumeLimitEnforcedFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateVolumeLimitFromNotification:(id)arg1 allowingBackgroundQueries:(BOOL)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_receiveUpdatedValueFromNotification:(id)arg1;
- (void)_serverDied:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCallOutQueue:(id)arg1 notificationCenter:(id)arg2 dataProviderInitializer:(CDUnknownBlockType)arg3;

@end

