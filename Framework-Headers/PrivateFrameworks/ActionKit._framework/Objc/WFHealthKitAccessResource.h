//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFGranularAccessResource.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class HKHealthStore, NSString, WFAction;

@interface WFHealthKitAccessResource : WFGranularAccessResource <WFActionEventObserver>
{
    unsigned long long _globalLevelStatus;
    WFAction *_action;
    HKHealthStore *_healthStore;
}

@property (weak, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly) Class superclass;

+ (BOOL)alwaysMakeAvailable;
+ (BOOL)isSystemResource;
+ (Class)perWorkflowStateClass;
- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)objectTypes;
- (id)objectTypesForAccessType:(id)arg1;
- (id)protectedResourceDescription;
- (id)readTypes;
- (id)readableUnauthorizedResourceDescription;
- (void)refreshAvailability;
- (id)requestedEntries;
- (id)writeTypes;

@end
