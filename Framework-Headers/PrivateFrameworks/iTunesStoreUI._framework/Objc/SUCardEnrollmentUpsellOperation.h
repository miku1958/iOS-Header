//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/SUPaymentSetupViewControllerDelegate-Protocol.h>

@class NSObject, NSString, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_referrerIdentifier;
    long long _paymentSetupFeatureState;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    UIViewController *_viewController;
}

@property (readonly, nonatomic) BOOL didSucceed;
@property (nonatomic) long long paymentSetupFeatureState; // @synthesize paymentSetupFeatureState=_paymentSetupFeatureState;
@property (copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)_paymentSetupFeature;
- (id)initWithViewController:(id)arg1;
- (void)paymentSetupViewControllerDidDismiss;
- (void)run;

@end

