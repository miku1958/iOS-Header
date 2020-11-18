//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKInstallmentPlan;
@protocol PKBusinessChatContext;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject
{
    PKInstallmentPlan *_earlyInstallmentPlan;
    id<PKBusinessChatContext> _businessChatContext;
}

@property (strong, nonatomic) id<PKBusinessChatContext> businessChatContext; // @synthesize businessChatContext=_businessChatContext;
@property (strong, nonatomic) PKInstallmentPlan *earlyInstallmentPlan; // @synthesize earlyInstallmentPlan=_earlyInstallmentPlan;

- (void).cxx_destruct;
- (id)description;

@end
