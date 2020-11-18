//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFConditionCollection, HFDurationEventBuilder, HFMutableSetDiff, HFTriggerAnonymousActionSetBuilder, HMTrigger, NSArray, NSString;
@protocol HFTriggerBuilderContextProviding;

@interface HFTriggerBuilder : HFItemBuilder
{
    BOOL _enabled;
    NSString *_name;
    HFTriggerAnonymousActionSetBuilder *_anonymousActionSetBuilder;
    id<HFTriggerBuilderContextProviding> _context;
    HFConditionCollection *_conditionCollection;
    HFMutableSetDiff *_actionSetBuilders;
    HFMutableSetDiff *_endEventBuildersDiff;
}

@property (strong, nonatomic) HFMutableSetDiff *actionSetBuilders; // @synthesize actionSetBuilders=_actionSetBuilders;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (strong, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder; // @synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder;
@property (strong, nonatomic) HFConditionCollection *conditionCollection; // @synthesize conditionCollection=_conditionCollection;
@property (strong, nonatomic) id<HFTriggerBuilderContextProviding> context; // @synthesize context=_context;
@property (readonly, nonatomic) HFDurationEventBuilder *designatedDurationEventBuilder;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) NSArray *endEventBuilders;
@property (strong, nonatomic) HFMutableSetDiff *endEventBuildersDiff; // @synthesize endEventBuildersDiff=_endEventBuildersDiff;
@property (readonly, nonatomic) BOOL hasActions;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL requiresConfirmationToRun;
@property (readonly, nonatomic) BOOL requiresFMFDeviceToRun;
@property (readonly, nonatomic) BOOL requiresHomeHub;
@property (readonly, nonatomic) BOOL requiresLocationServicesAuthorization;
@property (readonly, nonatomic) BOOL requiresUpdatedHomeHub;
@property (readonly, nonatomic) BOOL secureActionsRequireConfirmationToRun;
@property (readonly, nonatomic) BOOL supportsConditions;
@property (readonly, nonatomic) BOOL supportsEndEvents;
@property (readonly, nonatomic) HMTrigger *trigger;

+ (Class)homeKitRepresentationClass;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)_commitAddTriggerToHome:(id)arg1;
- (id)_deleteTrigger:(id)arg1 fromHome:(id)arg2;
- (void)_didReplaceBackingTrigger;
- (id)_performValidation;
- (id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateConditions;
- (id)_updateEnabledState;
- (id)_updateEndEvents;
- (id)_updateName;
- (void)addAction:(id)arg1;
- (void)addActionSet:(id)arg1;
- (void)addEndEventBuilder:(id)arg1;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)deleteTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2;
- (BOOL)markTriggerAsHomeAppCreated;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeAllEndEventBuilders;
- (void)removeEndEventBuilder:(id)arg1;
- (id)replaceCurrentTriggerWithTrigger:(id)arg1;
- (void)setEndEvent:(id)arg1;
- (void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1;
- (void)setTrigger:(id)arg1;
- (void)updateAction:(id)arg1;
- (void)updateActionSet:(id)arg1;
- (void)updateEndEventBuilder:(id)arg1;

@end
