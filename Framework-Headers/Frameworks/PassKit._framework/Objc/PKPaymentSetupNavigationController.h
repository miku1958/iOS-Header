//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKNavigationController.h>

#import <PassKit/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate>
{
    long long _context;
    BOOL _showsWelcomeViewController;
    BOOL _allowsManualEntry;
    PKPaymentProvisioningController *_provisioningController;
    id<PKPaymentSetupDelegate> _setupDelegate;
}

@property (nonatomic) BOOL allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property (nonatomic) id<PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (nonatomic) BOOL showsWelcomeViewController; // @synthesize showsWelcomeViewController=_showsWelcomeViewController;
@property (readonly) Class superclass;

+ (id)viewControllerForPresentingPaymentError:(id)arg1;
- (void)_handleAssociatedCredentialsDidChangeNotification:(id)arg1;
- (void)_reconfigureRootViewController;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;

@end

