//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFRunShortcutsAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (id)associatedAppIdentifier;
- (id)attemptRecoveryFromGlobalLevelErrorMessage;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)protectedResourceDescription;
- (id)workflowLevelDeniedStatusMessage;
- (id)workflowLevelMessageTemplate;
- (id)workflowLevelNotDeterminedStatusMessage;
- (id)workflowLevelPromptTemplate;

@end
