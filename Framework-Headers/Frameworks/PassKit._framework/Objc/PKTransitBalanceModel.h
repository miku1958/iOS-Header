//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, PKPaymentPass, PKTransitPassProperties;

@interface PKTransitBalanceModel : NSObject
{
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    PKPaymentPass *_pass;
    NSArray *_displayableBalances;
    NSArray *_displayableCommutePlanBalances;
    NSArray *_transitCommutePlans;
    NSArray *_displayableCommutePlans;
    NSMutableArray *_balanceFields;
}

@property (strong, nonatomic) NSMutableArray *balanceFields; // @synthesize balanceFields=_balanceFields;
@property (readonly, nonatomic) NSArray *displayableBalances; // @synthesize displayableBalances=_displayableBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances; // @synthesize displayableCommutePlanBalances=_displayableCommutePlanBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlans; // @synthesize displayableCommutePlans=_displayableCommutePlans;
@property (readonly, nonatomic) BOOL hasBalanceContent;
@property (readonly, nonatomic) BOOL hasCommutePlanContent;
@property (readonly, nonatomic) NSString *primaryDisplayableBalance; // @dynamic primaryDisplayableBalance;
@property (readonly, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;

- (void).cxx_destruct;
- (void)_updateBalancesAndPlans;
- (id)balanceForIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)filteredActionsForDisplayableEntities;
- (id)initWithPass:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setDynamicBalances:(id)arg1;
- (void)setDynamicBalancesByID:(id)arg1;
- (void)setTransitProperties:(id)arg1;

@end
