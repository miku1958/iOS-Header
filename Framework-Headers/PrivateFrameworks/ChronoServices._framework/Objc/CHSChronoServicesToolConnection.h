//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChronoServices/CHSChronoToolServiceClient-Protocol.h>
#import <ChronoServices/CHSChronoToolServiceServer-Protocol.h>

@class BSServiceConnection, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CHSChronoServicesToolConnection : NSObject <CHSChronoToolServiceClient, CHSChronoToolServiceServer>
{
    NSMutableSet *_clients;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property (strong, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property (strong, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_createConnection;
- (id)_init;
- (void)_invalidateConnection;
- (void)_queue_addClient:(id)arg1;
- (void)_queue_removeClient:(id)arg1;
- (id)_remoteTarget;
- (void)addClient:(id)arg1;
- (oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)disableWakeBudgetWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeClient:(id)arg1;
- (oneway void)resetCaches:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)resetWakeBudgetWithCompletion:(CDUnknownBlockType)arg1;
- (void)timelineForWidgetKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)widgetsWithTimelines:(CDUnknownBlockType)arg1;

@end
