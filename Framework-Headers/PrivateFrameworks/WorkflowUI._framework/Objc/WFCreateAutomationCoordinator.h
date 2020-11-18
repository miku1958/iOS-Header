//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/HUTriggerEditorDelegate-Protocol.h>
#import <WorkflowUI/WFAutomationSelectTypeViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFAutomationSummaryViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFAutomationTypeChooserViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerComposeViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerConfigurationViewControllerDelegate-Protocol.h>

@class NSString, UINavigationController, WFConfiguredTriggerRecord, WFDatabase, WFHomeManager, WFTriggerManager, WFWorkflow, WFWorkflowReference;
@protocol WFCreateAutomationCoordinatorDelegate;

@interface WFCreateAutomationCoordinator : NSObject <WFAutomationTypeChooserViewControllerDelegate, WFAutomationSelectTypeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, HUTriggerEditorDelegate>
{
    UINavigationController *_navigationController;
    id<WFCreateAutomationCoordinatorDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    NSString *_triggerIdentifier;
    WFDatabase *_database;
    WFConfiguredTriggerRecord *_triggerRecord;
    WFWorkflow *_workflow;
    WFWorkflowReference *_workflowReference;
    WFHomeManager *_homeManager;
}

@property (strong, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCreateAutomationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WFHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *triggerIdentifier; // @synthesize triggerIdentifier=_triggerIdentifier;
@property (strong, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property (strong, nonatomic) WFConfiguredTriggerRecord *triggerRecord; // @synthesize triggerRecord=_triggerRecord;
@property (strong, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property (strong, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;

- (void).cxx_destruct;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)automationTypeChooser:(id)arg1 didChooseAutomationType:(unsigned long long)arg2;
- (void)buildViewControllerForAutomationTypeChooserStepWithCompletion:(CDUnknownBlockType)arg1;
- (void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)finishWithTriggerRecord:(id)arg1;
- (id)initWithDatabase:(id)arg1 homeManager:(id)arg2;
- (void)openHomeApp;
- (void)selectTypeViewController:(id)arg1 didChooseTriggerClass:(Class)arg2;
- (void)startAtStep:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)triggerComposeViewControllerDidCancel:(id)arg1;
- (void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;

@end
