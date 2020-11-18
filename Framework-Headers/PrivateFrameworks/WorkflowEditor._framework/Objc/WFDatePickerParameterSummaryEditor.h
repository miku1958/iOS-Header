//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFModuleSummaryEditor.h>

#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowEditor/WFNonViewResponderDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableUIDelegate-Protocol.h>

@class NSString, UIDatePicker, UIView, UIViewController, WFNonViewResponder, WFVariableInputCoordinator;

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate>
{
    BOOL _isPickingMagicVariable;
    UIViewController *_presentedViewController;
    UIView *_sourceView;
    UIDatePicker *_datePicker;
    WFNonViewResponder *_datePickerResponder;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property (strong, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property (strong, nonatomic) WFNonViewResponder *datePickerResponder; // @synthesize datePickerResponder=_datePickerResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isPickingMagicVariable; // @synthesize isPickingMagicVariable=_isPickingMagicVariable;
@property (weak, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)datePickerValueChanged:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)responderWillResign:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(BOOL)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sourceViewTintColorDidChange;

@end
