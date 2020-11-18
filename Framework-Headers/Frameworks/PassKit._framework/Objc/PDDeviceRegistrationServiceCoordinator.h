//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class NSMutableArray, NSString, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDScheduledActivityClient>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(BOOL)arg2;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)dealloc;
- (id)init;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (void)notePasscodeChanged;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceRegister:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

