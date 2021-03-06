//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContinuityPaymentServiceDelegate-Protocol.h>

@class NSString, PKContinuityPaymentService, PKRemotePaymentRequest;
@protocol OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate>
{
    PKContinuityPaymentService *_continuityPaymentService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;
    BOOL _isUpdatingDevices;
    PKRemotePaymentRequest *_currentRemotePaymentRequest;
    long long _messageSendCount;
    long long _messageSendCompleteCount;
    id<PKContinuityPaymentCoordinatorDelegate> _delegate;
    double _updatePaymentDeviceTimeout;
}

@property (readonly, nonatomic, getter=isAwaitingReply) BOOL awaitingReply;
@property (readonly, nonatomic) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKContinuityPaymentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout; // @synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout;

- (void).cxx_destruct;
- (void)_deviceUpdateTimerDidTimeout;
- (void)_deviceUpdateTotalTimerDidTimeout;
- (void)_queue_sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetRequest;
- (void)_send_didReceiveCancellation;
- (void)_send_didReceivePayment:(id)arg1;
- (void)_send_didReceiveUpdatedPaymentDevice:(id)arg1;
- (void)_send_didTimeoutTotalUpdatePaymentDevices;
- (void)_send_didTimeoutUpdatePaymentDevices;
- (void)cancelRemotePaymentRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (id)initWithContinuityPaymentService:(id)arg1;
- (void)sendPaymentClientUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePaymentDevices;

@end

