//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSNumber, NSString, PKPassView, PKPaymentPass, PKPaymentProvisioningController, PKPaymentWebService, PKVerificationRequestRecord, UIImage;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentVerificationControllerDelegate;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate>
{
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    UIImage *_passSnapshot;
    BOOL _bankAppNotFound;
    PKPaymentPass *_pass;
    id<PKPaymentVerificationControllerDelegate> _delegate;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
    long long _context;
    long long _verificationContext;
    PKVerificationRequestRecord *_verificationRecord;
    PKPaymentProvisioningController *_provisioningController;
    PKPassView *_passView;
}

@property (readonly) NSString *alternateMethodButtonTitle;
@property (nonatomic) long long context; // @synthesize context=_context;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentVerificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property (strong, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly) BOOL shouldDisabledVerificationButton;
@property (readonly) Class superclass;
@property (readonly) NSString *verificationBodyString;
@property (nonatomic) long long verificationContext; // @synthesize verificationContext=_verificationContext;
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord; // @synthesize verificationRecord=_verificationRecord;
@property (readonly) NSString *verificationTitleString;
@property (readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

- (void).cxx_destruct;
- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned long long)_channelType;
- (void)_completeVerificationUsingBankApp;
- (void)_completeVerificationUsingOutboundCall;
- (void)_didChangePresentation;
- (void)_downloadAndAddPassWithCompletion:(CDUnknownBlockType)arg1;
- (id)_formattedPhoneNumber:(id)arg1 forTextMessage:(BOOL)arg2;
- (BOOL)_isBankAppInstalled;
- (void)_launchBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_performStoreLookupForBankApp;
- (void)_presentVerificationViewControllerForStepIdentifier:(id)arg1;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_queue_sharedPaymentWebServiceChanged;
- (void)_requestDelegatePresentationOfViewController:(id)arg1;
- (void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg1;
- (void)continueVerification;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5 setupDelegate:(id)arg6 verificationContext:(long long)arg7;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)passSnapshot;
- (void)performVerificationOptionsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performVerificationUpdateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectOtherVerificationMethod;
- (void)setVerificationRecord:(id)arg1;
- (void)sharedPaymentServiceChanged;
- (void)submitVerificationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
