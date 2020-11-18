//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, NSArray, NSMutableArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject
{
    CNUIUserActionItem *_defaultAction;
    NSMutableArray *_actions;
    NSArray *_recentActions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

@property (strong, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property (strong, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
@property (strong, nonatomic) NSArray *directoryServiceActions; // @synthesize directoryServiceActions=_directoryServiceActions;
@property (strong, nonatomic) NSArray *foundOnDeviceActions; // @synthesize foundOnDeviceActions=_foundOnDeviceActions;
@property (strong, nonatomic) NSArray *recentActions; // @synthesize recentActions=_recentActions;

+ (id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;
- (void).cxx_destruct;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;
- (id)model;
- (void)promoteLoneActionToBeDefault;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)removeDefaultActionFromListOfActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeUninterestingItentActions;

@end

