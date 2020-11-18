//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFParameterEventObserver-Protocol.h>
#import <WorkflowKit/WFUUIDProvider-Protocol.h>
#import <WorkflowKit/WFVariableProvider-Protocol.h>

@class ICApp, NSArray, NSAttributedString, NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSProgress, NSSet, NSString, WFActionParameterSummary, WFContentCollection, WFImage, WFParameter, WFResourceManager, WFWorkflow;
@protocol WFActionParameterInputProvider, WFUserInterface, WFVariableDataSource;

@interface WFAction : NSObject <WFUUIDProvider, WFParameterEventObserver, NSCopying, WFVariableProvider>
{
    BOOL _running;
    BOOL _inputParameterUnlocked;
    BOOL _skipsProcessingHiddenParameters;
    NSArray *_parameters;
    WFResourceManager *_resourceManager;
    NSArray *_inputContentClasses;
    NSArray *_outputContentClasses;
    NSProgress *_progress;
    NSString *_identifier;
    NSDictionary *_definition;
    WFContentCollection *_input;
    WFContentCollection *_output;
    id<WFUserInterface> _userInterface;
    id<WFVariableDataSource> _variableSource;
    NSHashTable *_eventObservers;
    NSDictionary *_initialSerializedParameters;
    NSDictionary *_parametersByKey;
    NSMutableDictionary *_userDefinedParameterStates;
    NSMutableDictionary *_supplementalSerializedParameters;
    CDUnknownBlockType _completionHandler;
    WFWorkflow *_workflow;
    NSDictionary *_processedParameters;
    id<WFActionParameterInputProvider> _parameterInputProvider;
}

@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *accessibilityName;
@property (readonly, nonatomic) NSSet *allPossibleDescriptionRequires;
@property (readonly, nonatomic) NSArray *allPossibleDescriptionResults;
@property (readonly, nonatomic) ICApp *app;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *appSection;
@property (readonly, nonatomic) NSAttributedString *attributedLocalizedName;
@property (readonly, nonatomic) NSString *attribution;
@property (readonly, nonatomic) NSArray *availableOutputActions;
@property (readonly, nonatomic) NSArray *availableVariableNames;
@property (readonly, nonatomic) BOOL blocksSnapping;
@property (readonly, nonatomic) NSArray *categories;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) Class configurationViewClass;
@property (readonly, nonatomic, getter=isConstructorAction) BOOL constructorAction;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isDebugAction) BOOL debugAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultOutputName;
@property (readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic) NSString *descriptionInput;
@property (readonly, nonatomic) NSString *descriptionNote;
@property (readonly, nonatomic) NSString *descriptionOfAccessResources;
@property (readonly, nonatomic) NSString *descriptionRequires;
@property (readonly, nonatomic) NSString *descriptionResult;
@property (readonly, nonatomic) NSString *descriptionSummary;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property (readonly, nonatomic, getter=isDiscoverableInSearch) BOOL discoverableInSearch;
@property (readonly, nonatomic) BOOL displaysParameterSummary;
@property (readonly, nonatomic) NSHashTable *eventObservers; // @synthesize eventObservers=_eventObservers;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDictionary *initialSerializedParameters; // @synthesize initialSerializedParameters=_initialSerializedParameters;
@property (readonly, nonatomic) long long initialSuggestionBehavior;
@property (readonly, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property (readonly, nonatomic) NSArray *inputContentClasses; // @synthesize inputContentClasses=_inputContentClasses;
@property (readonly, nonatomic) WFParameter *inputParameter;
@property (readonly, nonatomic) NSString *inputParameterKey;
@property (nonatomic) BOOL inputParameterUnlocked; // @synthesize inputParameterUnlocked=_inputParameterUnlocked;
@property (readonly, nonatomic) BOOL inputPassthrough;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) BOOL inputTypePassthrough;
@property (readonly, nonatomic) NSArray *inputTypes;
@property (readonly, nonatomic) BOOL inputsMultipleItems;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isRelevantToUser;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) WFImage *keyImage;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *localizedAttribution;
@property (readonly, nonatomic) NSArray *localizedCategories;
@property (readonly, nonatomic) NSString *localizedDefaultOutputName;
@property (readonly, nonatomic) NSAttributedString *localizedDescriptionAttribution;
@property (readonly, nonatomic) NSString *localizedDescriptionInput;
@property (readonly, nonatomic) NSString *localizedDescriptionNote;
@property (readonly, nonatomic) NSString *localizedDescriptionRequires;
@property (readonly, nonatomic) NSString *localizedDescriptionResult;
@property (readonly, nonatomic) NSString *localizedDescriptionSummary;
@property (readonly, nonatomic) NSAttributedString *localizedFooter;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, nonatomic) NSArray *localizedKeywords;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic, getter=isMissing) BOOL missing;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL neverSuggested;
@property (strong, nonatomic) WFContentCollection *output; // @synthesize output=_output;
@property (readonly, nonatomic) NSArray *outputContentClasses; // @synthesize outputContentClasses=_outputContentClasses;
@property (readonly, nonatomic) WFImage *outputIcon;
@property (readonly, nonatomic) NSString *outputMeasurementUnitType;
@property (copy, nonatomic) NSString *outputName;
@property (readonly, nonatomic) NSArray *outputTypes;
@property (readonly, nonatomic) BOOL outputsMultipleItems;
@property (readonly, nonatomic) unsigned long long parameterCollapsingBehavior;
@property (readonly, nonatomic) NSArray *parameterDefinitions;
@property (readonly, nonatomic) id<WFActionParameterInputProvider> parameterInputProvider; // @synthesize parameterInputProvider=_parameterInputProvider;
@property (readonly, nonatomic) WFActionParameterSummary *parameterSummary;
@property (readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property (copy, nonatomic) NSDictionary *parametersByKey; // @synthesize parametersByKey=_parametersByKey;
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (copy, nonatomic) NSDictionary *processedParameters; // @synthesize processedParameters=_processedParameters;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) long long rateLimitDelay;
@property (readonly, nonatomic) long long rateLimitThreshold;
@property (readonly, nonatomic) long long rateLimitTimeout;
@property (readonly, nonatomic) NSArray *requiredResources;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (readonly, nonatomic) WFResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly, nonatomic) Class runningViewClass;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) Class settingsViewControllerClass;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL shouldBeIncludedInAppsList;
@property (readonly, nonatomic) BOOL showsSettingsWhenResourcesUnavailable;
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters; // @synthesize skipsProcessingHiddenParameters=_skipsProcessingHiddenParameters;
@property (readonly, nonatomic) BOOL snappingPassthrough;
@property (readonly, nonatomic) NSArray *specifiedInputContentClasses;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *supplementalSerializedParameters; // @synthesize supplementalSerializedParameters=_supplementalSerializedParameters;
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (readonly, nonatomic) NSArray *unsupportedEnvironments;
@property (strong, nonatomic) NSMutableDictionary *userDefinedParameterStates; // @synthesize userDefinedParameterStates=_userDefinedParameterStates;
@property (strong, nonatomic) id<WFUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property (readonly, nonatomic) NSArray *userInterfaceTypes;
@property (strong, nonatomic) id<WFVariableDataSource> variableSource; // @synthesize variableSource=_variableSource;
@property (readonly, nonatomic, getter=isWatchCompatible) BOOL watchCompatible;
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property (readonly, nonatomic) NSArray *workflowInputClasses;

+ (id)iconCache;
+ (id)indentationLevelsForActions:(id)arg1;
+ (void)showImplicitChooseFromListWithInput:(id)arg1 userInterface:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3 selectionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)_processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (id)actionForAppIdentifier:(id)arg1;
- (id)actionProvidingVariableWithOutputUUID:(id)arg1;
- (id)actionsProvidingVariableName:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)addVariableObserver:(id)arg1;
- (void)askForValuesOfParameters:(id)arg1 withDefaultStates:(id)arg2 input:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2;
- (BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 includingCoercedTypes:(BOOL)arg3;
- (void)cancel;
- (void)checkUserInterfaceAndRunWithInput:(id)arg1;
- (id)classesForTypeArray:(id)arg1 includeAllOutputTypes:(BOOL)arg2;
- (void)configureRuntimeResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)containedVariables;
- (id)containedVariablesOfClass:(Class)arg1;
- (BOOL)containsVariableOfType:(id)arg1;
- (id)copyForProcessing;
- (id)copyParameterStates;
- (id)copyWithDefinition:(id)arg1 serializedParameters:(id)arg2;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createAccompanyingActions;
- (id)createResourceManager;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)defaultParameterStateForKey:(id)arg1;
- (BOOL)descriptionInputIncludesSupportingItemClasses;
- (void)didChangeVariableName:(id)arg1 to:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg1;
- (BOOL)getInputContentFromVariablesInParameterState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasAvailableActionOutputVariables;
- (BOOL)hasAvailableVariables;
- (BOOL)hasChildren;
- (BOOL)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)inheritedInputVariableInWorkflow:(id)arg1;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)initializeParameters;
- (id)inputSourceInWorkflow:(id)arg1;
- (BOOL)isUnsupportedWhenRunWithEnvironment:(id)arg1;
- (BOOL)isVariableWithNameAvailable:(id)arg1;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)arg1;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedSubcategoryForCategory:(id)arg1;
- (void)lockInputParameter;
- (void)makeAccessResourcesAvailableAtWorkflowLevelAndRun;
- (id)minimumSupportedClientVersion;
- (void)nameUpdated;
- (void)outputDetailsUpdated;
- (id)outputDictionary;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)parameterStateForKey:(id)arg1;
- (id)parameterStateForKey:(id)arg1 fallingBackToDefaultValue:(BOOL)arg2;
- (void)parameterStateValidityCriteriaDidChange:(id)arg1;
- (id)parameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (id)populatedInputWithProcessedParameterValues:(id)arg1;
- (id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
- (id)previousAction;
- (void)processParameterStates:(id)arg1 withInput:(id)arg2 skippingHiddenParameters:(BOOL)arg3 askForValuesIfNecessary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)processParametersWithoutAskingForValuesWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)providedVariableNames;
- (void)removeEventObserver:(id)arg1;
- (void)removeVariableObserver:(id)arg1;
- (BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)arg1;
- (BOOL)requiresUserInteractionWhenRunWithInput:(id)arg1;
- (void)resetOutput;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)runAsynchronouslyWithInput:(id)arg1 userInterfaceType:(id)arg2 userInterface:(id)arg3;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2;
- (id)serializedParameters;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;
- (void)setDefaultCoercionOptionsOnContentCollection:(id)arg1;
- (void)setDefaultCoercionOptionsOnInputs;
- (void)setOutput:(id)arg1 onVariableSource:(id)arg2;
- (void)setParameterInputProvider:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)setSupplementalParameterValue:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)arg1 withOutputsConsumedByFollowingActions:(id)arg2;
- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)arg1;
- (void)snapInputParameterIfNecessary;
- (id)subcategoryForCategory:(id)arg1;
- (id)supplementalParameterValueForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)supportsUserInterfaceType:(id)arg1;
- (id)typeDescriptionWithTypes:(id)arg1 explanationText:(id)arg2 multiple:(BOOL)arg3 optional:(BOOL)arg4;
- (void)unlockInputParameter;
- (id)visibleParametersWithProcessing:(BOOL)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
