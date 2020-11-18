//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKPaymentSetupViewController;
@protocol SUPaymentSetupViewControllerDelegate;

@interface SUPaymentSetupViewController : UIViewController
{
    id<SUPaymentSetupViewControllerDelegate> _delegate;
    PKPaymentSetupRequest *_paymentSetupRequest;
    PKPaymentSetupViewController *_childViewController;
}

@property (strong, nonatomic) PKPaymentSetupViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (weak, nonatomic) id<SUPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest; // @synthesize paymentSetupRequest=_paymentSetupRequest;

- (void).cxx_destruct;
- (void)_setup;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPaymentSetupRequest:(id)arg1;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;

@end
