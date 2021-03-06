//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSHashTable, NSMapTable, WFWorkflow;
@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject
{
    BOOL _extensionInputVariableUsed;
    WFWorkflow *_workflow;
    NSMapTable *_providingActionsByVariableName;
    NSMapTable *_variableScopeLevelsByGroupingIdentifier;
    NSMapTable *_variableScopeEndActionsByStartAction;
    NSMapTable *_actionOutputVariableActionsByUUID;
    NSCache *_cachedContentClassesForVariableNameAtIndex;
    NSHashTable *_variableObservers;
    NSObject<OS_dispatch_queue> *_actionOutputWorkQueue;
}

@property (strong, nonatomic) NSMapTable *actionOutputVariableActionsByUUID; // @synthesize actionOutputVariableActionsByUUID=_actionOutputVariableActionsByUUID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *actionOutputWorkQueue; // @synthesize actionOutputWorkQueue=_actionOutputWorkQueue;
@property (strong, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex; // @synthesize cachedContentClassesForVariableNameAtIndex=_cachedContentClassesForVariableNameAtIndex;
@property (readonly, nonatomic) BOOL extensionInputVariableUsed; // @synthesize extensionInputVariableUsed=_extensionInputVariableUsed;
@property (strong, nonatomic) NSMapTable *providingActionsByVariableName; // @synthesize providingActionsByVariableName=_providingActionsByVariableName;
@property (strong, nonatomic) NSHashTable *variableObservers; // @synthesize variableObservers=_variableObservers;
@property (strong, nonatomic) NSMapTable *variableScopeEndActionsByStartAction; // @synthesize variableScopeEndActionsByStartAction=_variableScopeEndActionsByStartAction;
@property (strong, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier; // @synthesize variableScopeLevelsByGroupingIdentifier=_variableScopeLevelsByGroupingIdentifier;
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;

+ (BOOL)actionIsEligibleForOutputVariable:(id)arg1;
- (void).cxx_destruct;
- (id)_possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (void)actionsDidMove;
- (id)actionsProvidingVariableName:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addVariableObserver:(id)arg1;
- (BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)arg1;
- (BOOL)areVariablesAvailableAtIndex:(unsigned long long)arg1;
- (id)availableOutputActionsAtIndex:(unsigned long long)arg1;
- (id)availableVariableNamesAtIndex:(unsigned long long)arg1;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)arg1;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)invalidateActionOutputProviderCache;
- (void)invalidateCache;
- (void)invalidateContentClassCache;
- (BOOL)isVariableAvailableAtIndex:(unsigned long long)arg1 withActionTest:(CDUnknownBlockType)arg2;
- (BOOL)isVariableWithName:(id)arg1 availableAtIndex:(unsigned long long)arg2;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)notifyContentClassesChanged;
- (void)notifyVariablesChanged;
- (void)populateActionOutputVariableActionsByUUID;
- (void)populateCache;
- (id)possibleContentClassesForVariableNamed:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3 excludingAction:(id)arg4;
- (void)removeVariableObserver:(id)arg1;
- (void)renameVariable:(id)arg1 to:(id)arg2 fromAction:(id)arg3;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)arg1;

@end

