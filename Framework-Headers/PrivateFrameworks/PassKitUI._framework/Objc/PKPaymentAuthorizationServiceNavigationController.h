//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    PKPaymentAuthorizationLayout *_layout;
    PKPaymentAuthorizationServiceViewController *_authorizationViewController;
    id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;
}

@property (readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate; // @synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end

