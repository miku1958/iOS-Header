//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, PKAccount, PKAssertion, PKFeatureApplication, PKPaymentProvisioningController, PKPaymentService, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol;

@interface PKApplyController : NSObject <PKSetupFlowControllerProtocol, PKPaymentServiceDelegate>
{
    PKPaymentWebService *_webService;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSMutableArray *_viewControllers;
    unsigned long long _viewControllerIndex;
    PKPaymentService *_paymentService;
    NSArray *_encryptionCertificates;
    NSMutableSet *_shownTermsIdentifiers;
    NSMutableSet *_processedTermsIdentifiers;
    PKAccount *_account;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _endedApplyFlow;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    PKAssertion *_notificationSupressionAssertion;
    unsigned long long _runningApplicationUpdates;
    unsigned long long _featureIdentifier;
    PKFeatureApplication *_featureApplication;
    long long _context;
    PKPaymentProvisioningController *_provisioningController;
    id<PKSetupFlowControllerProtocol> _parentFlowController;
}

@property (readonly, nonatomic) long long context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKFeatureApplication *featureApplication; // @synthesize featureApplication=_featureApplication;
@property (readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController; // @synthesize parentFlowController=_parentFlowController;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireAssertion;
- (void)_deviceMetadataFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_displayableErrorForError:(id)arg1 showDetailedErrorFlow:(BOOL)arg2;
- (void)_handleApplyResponse:(id)arg1 originalFeatureApplication:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleResponseError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidateAssertion;
- (void)_invalidateIDVSession;
- (id)_nextQueuedViewController;
- (void)_performApplyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performCreateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performWithdrawWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queueAcceptedFlowWithPage:(id)arg1;
- (void)_queueActionFlowWithPage:(id)arg1;
- (void)_queueApplicationTermsFlow;
- (void)_queueCannotResumeIDVFlow;
- (void)_queueDeclinedFlowWithPage:(id)arg1;
- (void)_queueEmailRequiredErrorViewController;
- (void)_queueExpiredFlowWithPage:(id)arg1;
- (void)_queueFieldsFlowWithNextStepInfo:(id)arg1;
- (void)_queueGenericErrorViewController;
- (void)_queueGenericErrorViewControllerWithPage:(id)arg1;
- (void)_queueInfoFlowWithNextWithPage:(id)arg1;
- (void)_queueOfferFlowWithPage:(id)arg1;
- (void)_queuePassActiviationFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queueStateReasonExplanationFlowWithPage:(id)arg1;
- (void)_queueTerminalStateFlowWithPage:(id)arg1;
- (void)_reset;
- (void)_startCoreIDVSessionWithStepInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)applicationUpdatedAlertControllerWithHandler:(CDUnknownBlockType)arg1;
- (void)applyFlowDidAppear;
- (void)dealloc;
- (void)endApplyFlow;
- (void)featureApplicationChanged:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (id)initWithFeatureApplication:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitActionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitDocumentPage:(id)arg1 selectedDocument:(id)arg2 frontImage:(id)arg3 backImage:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)submitFieldsPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)termsAccepted:(BOOL)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)termsDataForFeatureWithFormat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)termsShownWithIdentifier:(id)arg1;
- (void)withdrawApplicationWithCompletion:(CDUnknownBlockType)arg1;

@end

