//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentPass, PKPaymentSetupAddToWatchOfferView;

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController
{
    PKPaymentPass *_pass;
    long long _context;
    CDUnknownBlockType _dismissalHandler;
    PKPaymentSetupAddToWatchOfferView *_offerView;
}

@property (nonatomic) long long context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property (readonly, strong, nonatomic) PKPaymentSetupAddToWatchOfferView *offerView; // @synthesize offerView=_offerView;
@property (readonly, strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_addLaterTapped:(id)arg1;
- (void)_configureNavigationItem;
- (void)_doneTapped:(id)arg1;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_handleDismissal:(BOOL)arg1;
- (void)_hideSpinner;
- (void)_openAppTapped:(id)arg1;
- (void)_setIdleTimerDisabled:(BOOL)arg1;
- (void)_showSpinner;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(CDUnknownBlockType)arg3;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
