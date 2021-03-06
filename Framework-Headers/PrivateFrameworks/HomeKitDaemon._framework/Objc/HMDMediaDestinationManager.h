//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMediaDestinationBackingStoreHandlerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationManager-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationMessageHandlerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationMessageHandlerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFStagedValueDelegate-Protocol.h>

@class HMDMediaDestinationBackingStoreHandler, HMDMediaDestinationMessageHandler, HMFStagedValue, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate>
{
    NSUUID *_identifier;
    HMDMediaDestinationMessageHandler *_messageHandler;
    HMDMediaDestinationBackingStoreHandler *_backingStoreHandler;
    id<HMDMediaDestinationManagerDataSource> _dataSource;
    id<HMDMediaDestinationManagerDelegate> _delegate;
    HMFStagedValue *_stagedAudioGroupIdentifier;
}

@property (readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler; // @synthesize backingStoreHandler=_backingStoreHandler;
@property (readonly) HMMediaDestination *committedDestination;
@property (weak) id<HMDMediaDestinationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDMediaDestinationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMMediaDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property (readonly) HMFStagedValue *stagedAudioGroupIdentifier; // @synthesize stagedAudioGroupIdentifier=_stagedAudioGroupIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)configureWithHome:(id)arg1;
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;
- (id)dataSourceRootDestinationManager;
- (id)dataSourceTargetAccessory;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;
- (id)logIdentifier;
- (void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;
- (BOOL)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2;
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;
- (id)privateDescription;
- (void)stageAudioGroupIdentifier:(id)arg1;
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;
- (id)updateAudioGroupIdentifier:(id)arg1;
- (id)updateSupportedOptions:(unsigned long long)arg1;

@end

