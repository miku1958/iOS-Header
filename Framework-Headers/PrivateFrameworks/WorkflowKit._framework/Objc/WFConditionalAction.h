//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFControlFlowAction.h>

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>
#import <WorkflowKit/WFVariableDelegate-Protocol.h>

@class NSString;
@protocol WFVariableProvider;

@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate>
{
    id<WFVariableProvider> _parentVariableProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<WFVariableProvider> parentVariableProvider; // @synthesize parentVariableProvider=_parentVariableProvider;
@property (readonly) Class superclass;

+ (id)serializedParametersForHome:(id)arg1;
- (void).cxx_destruct;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (id)actionsProvidingVariableName:(id)arg1;
- (void)clearLegacyComparisonBehaviorFlag;
- (id)copyForProcessing;
- (id)createAccompanyingActions;
- (id)defaultOutputName;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)fileSizeForQuantityValue:(id)arg1;
- (BOOL)groupContainsOtherwiseAction;
- (BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (void)initializeParameters;
- (id)inputContentClasses;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)inputSourceInWorkflow:(id)arg1;
- (BOOL)isDeletable;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)measurementForQuantityValue:(id)arg1;
- (id)minimumSupportedClientVersion;
- (id)name;
- (BOOL)populatesInputFromInputParameter;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (id)predicateForComparisonOperator:(long long)arg1 rightDate:(id)arg2 secondRightDate:(id)arg3 comparableTimeUnits:(unsigned long long)arg4 rightDurationValue:(id)arg5;
- (void)reloadOpenActionInWorkflow:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)setTruth:(BOOL)arg1 withVariableSource:(id)arg2;
- (Class)settingsViewControllerClass;
- (BOOL)skipsProcessingHiddenParameters;
- (long long)subjectContentType;
- (id)subjectState;
- (id)timeIntervalForQuantityValue:(id)arg1;
- (BOOL)truthWithVariableSource:(id)arg1;
- (void)updatePossibleOperators;
- (void)updateRightExpressionParameters;
- (BOOL)useLegacyComparisonBehavior;
- (BOOL)usesLegacyInputBehavior;
- (void)variableDidChange:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end

