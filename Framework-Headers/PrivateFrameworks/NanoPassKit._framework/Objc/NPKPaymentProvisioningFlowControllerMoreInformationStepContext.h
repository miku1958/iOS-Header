//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext
{
    NSArray *_moreInfoItems;
    PKPaymentPass *_paymentPass;
}

@property (strong, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property (strong, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

