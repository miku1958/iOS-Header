//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol NPKRemoteInterfacePresenterDelegate;

@interface NPKRemoteInterfacePresenter : NSObject
{
    id<NPKRemoteInterfacePresenterDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<NPKRemoteInterfacePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)arg1 withError:(id)arg2;
- (id)init;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)presentPasscodeUpgradeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSetupApplePayAlert:(id)arg1;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(BOOL)arg1 error:(id)arg2;

@end

