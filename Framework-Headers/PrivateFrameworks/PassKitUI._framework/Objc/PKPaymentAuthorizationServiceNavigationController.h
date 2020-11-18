//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@class PKPaymentAuthorizationLayout, UIViewController;
@protocol PKPaymentAuthorizationServiceProtocol, UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController
{
    PKPaymentAuthorizationLayout *_layout;
    UIViewController<PKPaymentAuthorizationServiceProtocol> *_authorizationViewController;
    id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;
}

@property (readonly, nonatomic) UIViewController<PKPaymentAuthorizationServiceProtocol> *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
@property (strong, nonatomic) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate; // @synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate;

- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

