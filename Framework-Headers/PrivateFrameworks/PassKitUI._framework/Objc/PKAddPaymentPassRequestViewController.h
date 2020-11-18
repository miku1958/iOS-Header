//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CLInUseAssertion, NSArray, NSObject, NSString, OBPrivacyLinkController, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKPaymentProvisioningController, PKPaymentWebService, PKTableHeaderView, RemoteUIController;
@protocol NSObject, OS_dispatch_source, PKAddPaymentPassRequestViewControllerDelegate;

@interface PKAddPaymentPassRequestViewController : UITableViewController
{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_details;
    long long _headerState;
    id<NSObject> _notificationToken;
    PKPaymentProvisioningController *_provisioningController;
    PKAddPaymentPassRequestConfiguration *_configuration;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_source> *_datasourceTimeout;
    PKAddPaymentPassRequest *_addRequest;
    struct CGSize _lastBoundsSize;
    BOOL _offsetForTextfieldWasCalculated;
    double _offsetForTextfield;
    BOOL _viewAppearing;
    BOOL _preconditionsValidated;
    PKTableHeaderView *_headerView;
    OBPrivacyLinkController *_privacyController;
    RemoteUIController *_termsController;
    BOOL _hidePrivacy;
    BOOL _singleTarget;
    id<PKAddPaymentPassRequestViewControllerDelegate> _delegate;
    PKPaymentWebService *_webService;
}

@property (weak, nonatomic) id<PKAddPaymentPassRequestViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL hidePrivacy; // @synthesize hidePrivacy=_hidePrivacy;
@property (nonatomic) BOOL singleTarget; // @synthesize singleTarget=_singleTarget;
@property (readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

- (void).cxx_destruct;
- (void)_applyHeaderState;
- (void)_cancelDatasourceTimeout;
- (void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1;
- (void)_fetchCertificates;
- (void)_handleAdd:(id)arg1;
- (void)_performEligibility;
- (void)_performMoreInfoItemPush;
- (void)_performNextProvisioningStep;
- (void)_performPreconditionValidation;
- (void)_performProvisioning:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_presentDisplayableError:(id)arg1;
- (void)_presentDisplayableError:(id)arg1 allowEarlyExit:(BOOL)arg2;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_setHeaderState:(long long)arg1;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(CDUnknownBlockType)arg2;
- (void)_showEligibilityIssueForStatus:(long long)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_titleForCurrentHeaderState;
- (void)_updateHeaderSize;
- (void)_updateHeaderWithSubtitle:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

