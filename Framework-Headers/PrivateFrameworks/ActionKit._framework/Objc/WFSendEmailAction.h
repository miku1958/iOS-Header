//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
{
    BOOL _contentManaged;
}

@property (nonatomic, getter=isContentManaged) BOOL contentManaged; // @synthesize contentManaged=_contentManaged;

+ (id)userInterfaceProtocol;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (BOOL)checkManagementLevel:(id)arg1 error:(id *)arg2;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)generatedAccessResource;
- (void)getRecipientsFromParameterValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleWatchResponse:(id)arg1;
- (BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1;
- (BOOL)populatesInputFromInputParameter;
- (void)prepareEmailContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)requiredResourcesForIntentAvailableResource;
- (BOOL)requiresRemoteExecution;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;
- (id)targetContentAttribution;

@end

