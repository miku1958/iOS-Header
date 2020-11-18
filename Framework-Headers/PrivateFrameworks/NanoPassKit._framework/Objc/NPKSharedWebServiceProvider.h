//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentWebServiceCompanionTargetDeviceDelegate-Protocol.h>

@class NPKCompanionAgentConnection, NPKPaymentWebServiceCompanionTargetDevice, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>
{
    PKPaymentWebService *_webService;
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NPKPeerPaymentWebServiceCompanionTargetDevice *_peerPaymentTargetDevice;
}

@property (strong, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property (strong, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice; // @synthesize peerPaymentTargetDevice=_peerPaymentTargetDevice;
@property (strong, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // @synthesize peerPaymentWebService=_peerPaymentWebService;
@property (readonly) Class superclass;
@property (strong, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property (strong, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

+ (id)sharedWebServiceProvider;
- (void).cxx_destruct;
- (void)_deviceFailedToPair:(id)arg1;
- (id)_peerPaymentAccount;
- (id)_peerPaymentWebServiceContext;
- (id)_webServiceContext;
- (void)archiveWebServiceBackgroundContext:(id)arg1;
- (void)archiveWebServiceContext:(id)arg1;
- (void)dealloc;
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(BOOL)arg2;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePushToken:(id)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
- (id)init;
- (void)loadWebService;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)showPaymentSetupForAppDisplayName:(id)arg1;

@end

