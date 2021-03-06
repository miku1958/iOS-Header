//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFModuleSummaryEditor.h>

#import <WorkflowEditor/HUTriggerActionBuilderEditorDelegate-Protocol.h>
#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFHomeAccessoryPickerParameterSummaryEditor : WFModuleSummaryEditor <HUTriggerActionBuilderEditorDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionBuilderEditor:(id)arg1 didFinishWithTriggerActionSetBuilder:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;

@end

