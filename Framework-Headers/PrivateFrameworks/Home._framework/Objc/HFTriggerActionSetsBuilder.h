//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFMutableSetDiff, HFSetDiff, HFTriggerAnonymousActionSetBuilder, HMHome, HMShortcutAction, NSArray, WFHomeWorkflow;

@interface HFTriggerActionSetsBuilder : NSObject
{
    HFTriggerAnonymousActionSetBuilder *_anonymousActionSetBuilder;
    HMHome *_home;
    HFMutableSetDiff *_actionSetBuilders;
    HMShortcutAction *_shortcutAction;
}

@property (strong, nonatomic) HFMutableSetDiff *actionSetBuilders; // @synthesize actionSetBuilders=_actionSetBuilders;
@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (readonly, nonatomic) NSArray *allActionBuilders;
@property (readonly, nonatomic) NSArray *allActionSets;
@property (readonly, nonatomic) NSArray *anonymousActionBuilder;
@property (strong, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder; // @synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) WFHomeWorkflow *homeWorkflow;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (readonly, nonatomic) NSArray *namedActionSets;
@property (readonly, nonatomic) HFSetDiff *namedActionSetsDiff;
@property (strong, nonatomic) HMShortcutAction *shortcutAction; // @synthesize shortcutAction=_shortcutAction;

- (void).cxx_destruct;
- (void)_generateStandaloneServices:(id)arg1 andMediaAccessories:(id)arg2;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_removeAllNamedActionsSets;
- (id)_removeDuplicateActionSets:(id)arg1;
- (id)_removeEmptyActionSets:(id)arg1;
- (id)_uniqueServiceGroupForServices:(id)arg1;
- (id)actionSetsSummary;
- (void)addActionSetBuilder:(id)arg1;
- (void)addActionSetIfNotPresent:(id)arg1;
- (void)addAnonymousActionBuilder:(id)arg1;
- (void)convertToHomeWorkflowActionSet:(id)arg1;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)defaultActionsForShortcut;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2 filterEmptyActionSets:(BOOL)arg3;
- (id)mediaAccessoriesForPlaybackAction:(id)arg1;
- (void)removeActionSetBuilder:(id)arg1;
- (void)removeActionSetIfPresent:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeAnonymousActionBuilder:(id)arg1;
- (void)resetActionSetBuilders;
- (void)resetAllActionSets;
- (void)updateActionSetBuilder:(id)arg1;
- (void)updateAnonymousActionBuilder:(id)arg1;
- (void)updateFromTriggerActionSetsBuilder:(id)arg1;

@end

