//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NPSDomainAccessor, NPSManager, NSString;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>
{
    NPSDomainAccessor *_globalDomainAccessor;
    NPSManager *_preferencesSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NPSManager *preferencesSyncManager; // @synthesize preferencesSyncManager=_preferencesSyncManager;
@property (readonly) Class superclass;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)arg1;
- (id)account;
- (id)bridgedClientInfo;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)deviceRegion;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (void)setUserHasDisabledPeerPayment:(BOOL)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)userHasDisabledPeerPayment;

@end

