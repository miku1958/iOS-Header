//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKit/PKPaymentAuthorizationServiceProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol>
{
    long long _paymentAuthorizationStyle;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKPaymentAuthorizationDataModel *_dataModel;
    id<PKPaymentAuthorizationHostProtocol> _delegate;
}

@property (readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
@property (readonly, nonatomic) long long paymentAuthorizationStyle; // @synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle;
@property (readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

