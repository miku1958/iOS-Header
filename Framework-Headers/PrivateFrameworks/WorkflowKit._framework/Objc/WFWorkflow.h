//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFActionEventObserver-Protocol.h>
#import <WorkflowKit/WFNaming-Protocol.h>

@class NSArray, NSString, WFActionGroupingCache, WFVariableAvailability, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowRecord, WFWorkflowReference;
@protocol WFRecordStorageProvider;

@interface WFWorkflow : NSObject <WFNaming, WFActionEventObserver, NSCopying, NSSecureCoding>
{
    BOOL _saveDisabled;
    NSArray *_actions;
    WFVariableAvailability *_variableAvailability;
    WFActionGroupingCache *_groupingCache;
    NSArray *_inputClasses;
    NSArray *_importQuestions;
    WFWorkflowRecord *_record;
    long long _environment;
    WFWorkflowQuarantine *_quarantine;
    WFWorkflowReference *_overridenReference;
    id<WFRecordStorageProvider> _storageProvider;
}

@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) NSString *actionsDescription;
@property (readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property (readonly, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) WFActionGroupingCache *groupingCache; // @synthesize groupingCache=_groupingCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hiddenFromLibraryAndSync;
@property (nonatomic) BOOL hiddenInComplication;
@property (strong, nonatomic) WFWorkflowIcon *icon;
@property (copy, nonatomic) NSArray *importQuestions; // @synthesize importQuestions=_importQuestions;
@property (copy, nonatomic) NSArray *inputClasses; // @synthesize inputClasses=_inputClasses;
@property (copy, nonatomic) NSString *legacyName;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WFWorkflowReference *overridenReference; // @synthesize overridenReference=_overridenReference;
@property (strong, nonatomic) WFWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property (readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (nonatomic) long long remoteQuarantineStatus;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (nonatomic) BOOL saveDisabled; // @synthesize saveDisabled=_saveDisabled;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) id<WFRecordStorageProvider> storageProvider; // @synthesize storageProvider=_storageProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFVariableAvailability *variableAvailability; // @synthesize variableAvailability=_variableAvailability;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSArray *workflowTypes;

+ (BOOL)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id *)arg3;
+ (id)defaultName;
+ (id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2;
+ (id)localizedSubtitleWithActionCount:(unsigned long long)arg1;
+ (id)supportedInputClassNames;
+ (id)supportedInputClasses;
+ (BOOL)supportsSecureCoding;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2;
- (id)actionForSuggestionsDrawer;
- (void)actionNameDidChange:(id)arg1;
- (void)actionOutputDetailsDidChange:(id)arg1;
- (id)actionsGroupedWithAction:(id)arg1;
- (void)addAction:(id)arg1;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)authorizeAccessResourcesIfNeeded;
- (Class)classForKeyedArchiver;
- (void)configureAsSingleStepShortcutIfNecessary:(CDUnknownBlockType)arg1;
- (void)configureWithShortcut:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createUserActivityForViewing;
- (void)dealloc;
- (id)editingDelegate;
- (id)effectiveInputClasses;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDictionary;
- (void)generateShortcutRepresentation:(CDUnknownBlockType)arg1;
- (BOOL)hasStorageProvider;
- (id)init;
- (id)initWithActionDonation:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id *)arg5;
- (id)initWithShortcut:(id)arg1 error:(id *)arg2;
- (void)initializeAddedAction:(id)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertActions:(id)arg1 atIndexes:(id)arg2;
- (BOOL)isUntitled;
- (void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadFromRecord;
- (id)localizedActionsSummary;
- (id)localizedSubtitle;
- (void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)overrideReference:(id)arg1;
- (void)performBatchOperation:(CDUnknownBlockType)arg1;
- (void)reloadFromRecord;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)save;
- (void)saveActionsToRecordIfNeeded;
- (void)setActions:(id)arg1;
- (void)setEditingDelegate:(id)arg1;
- (void)updateVariablesForAction:(id)arg1 includingImportedVariables:(BOOL)arg2;
- (id)validImportQuestions;
- (id)workflowByClearingPrivateImportQuestionData;

@end
