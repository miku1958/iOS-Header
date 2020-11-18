//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTCellularPlanItem, NSArray;

@interface PSUICellularPlanManager : NSObject
{
    BOOL _cacheIsValid;
    NSArray *_planItems;
    CTCellularPlanItem *_selectedPlanItem;
    BOOL _hasSubscriptions;
    BOOL _hasHomePlan;
    BOOL _isMultipleDataPlanSupportAvailable;
    BOOL _isRoamingPlanSupportAvailable;
}

@property (readonly, nonatomic) BOOL hasSubscriptions;
@property (readonly, nonatomic) BOOL isMultipleDataPlanSupportAvailable;
@property (readonly, nonatomic) BOOL isRoamingPlanSupportAvailable;
@property (readonly, nonatomic) BOOL isSelectedPlanActivating;
@property (readonly, nonatomic) BOOL isSelectedPlanExpired;
@property (readonly, nonatomic) NSArray *planItems;
@property (strong, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property (readonly, nonatomic) BOOL shouldShowAccountRenew;
@property (readonly, nonatomic) BOOL shouldShowAccountSetup;
@property (readonly, nonatomic) BOOL shouldShowAddPlan;
@property (readonly, nonatomic) BOOL shouldShowDataPlanList;
@property (readonly, nonatomic) BOOL shouldShowPlanSelector;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_fetchPlanItemsIfNeeded;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (void)_subscriptionDidUpdate;
- (void)dealloc;
- (id)init;

@end

