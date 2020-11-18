//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMDHomeMediaSystemMessageHandlerDelegate, OS_dispatch_queue;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver>
{
    HMDHome *_home;
    id<HMDHomeMediaSystemMessageHandlerDelegate> _delegate;
    HMFMessageDispatcher *_messageDispatcher;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HMDHomeMediaSystemMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak) HMDHome *home; // @synthesize home=_home;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAddMediaSystem:(id)arg1;
- (void)_handleAddMediaSystemWithPreProcessedMessage:(id)arg1;
- (void)_handleRemoveMediaSystem:(id)arg1;
- (void)_registerForMessages;
- (void)handleUpdateMediaSystem:(id)arg1;
- (id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4;
- (id)messageDestination;
- (id)preProcessMediaSystemMessage:(id)arg1;

@end
