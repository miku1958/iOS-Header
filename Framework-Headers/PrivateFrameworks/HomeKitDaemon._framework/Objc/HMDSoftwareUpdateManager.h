//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAppleMediaAccessory, HMDHomeManager, NSHashTable, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver>
{
    HMDAppleMediaAccessory *_accessory;
    HMDHomeManager *_homeManager;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_activeClients;
}

@property (weak) HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSHashTable *activeClients; // @synthesize activeClients=_activeClients;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (BOOL)isSupported;
- (void).cxx_destruct;
- (void)_handleStart:(id)arg1;
- (void)_handleStop:(id)arg1;
- (void)_handleUpdateAvailableUpdate:(id)arg1;
- (BOOL)_shouldAcceptMessage:(id)arg1;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithHomeManager:(id)arg1;
- (id)messageDestination;
- (void)registerForMessages;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

