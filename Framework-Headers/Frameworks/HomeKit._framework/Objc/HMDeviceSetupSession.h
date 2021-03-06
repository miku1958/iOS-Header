//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFActivity, HMFUnfairLock, NSDictionary, NSString, NSUUID, _HMContext;
@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    HMFActivity *_activity;
    BOOL _open;
    NSDictionary *_userInfo;
    id<HMDeviceSetupSessionDelegate> _delegate;
    NSUUID *_identifier;
    long long _role;
    _HMContext *_context;
}

@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HMDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property (readonly) long long role; // @synthesize role=_role;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)homeManagerDestination;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)__closeWithError:(id)arg1;
- (void)__handleClose:(id)arg1;
- (void)__handleReceivedExchangeData:(id)arg1;
- (void)__registerForMessages;
- (void)_closeWithError:(id)arg1;
- (void)_handleDisconnection:(id)arg1;
- (void)_handleOpenedSession;
- (void)_reallySendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithRole:(long long)arg1 delegate:(id)arg2;
- (id)logIdentifier;
- (id)messageDestination;
- (void)open;
- (void)sendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setUserInfo:(id)arg1;

@end

