//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowEditor/WFParameterEventObserver-Protocol.h>
#import <WorkflowEditor/WFParameterValuePickerViewControllerDelegate-Protocol.h>

@class NSArray, NSString, WFEnumerationParameter, WFParameterValuePickerViewController, WFTextTokenChooser, WFVariableSubstitutableParameterState;

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    WFVariableSubstitutableParameterState *_currentState;
    CDUnknownBlockType _cancelHandler;
    WFEnumerationParameter *_parameter;
    NSArray *_parameterStates;
    CDUnknownBlockType _completionHandler;
    WFParameterValuePickerViewController *_parameterValuePickerViewController;
    WFTextTokenChooser *_textTokenChooser;
    long long _editingSlotArrayIndex;
}

@property (copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) WFVariableSubstitutableParameterState *currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long editingSlotArrayIndex; // @synthesize editingSlotArrayIndex=_editingSlotArrayIndex;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;
@property (copy, nonatomic) NSArray *parameterStates; // @synthesize parameterStates=_parameterStates;
@property (strong, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController; // @synthesize parameterValuePickerViewController=_parameterValuePickerViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFTextTokenChooser *textTokenChooser; // @synthesize textTokenChooser=_textTokenChooser;

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 editingSlotArrayIndex:(long long)arg3 initialCollection:(id)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 processing:(BOOL)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9 viewController:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)cancelOperation;
- (void)dealloc;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithParameter:(id)arg1 currentState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)parameterValuePickerViewController:(id)arg1 didFinishWithObject:(id)arg2;
- (void)parameterValuePickerViewControllerDidCancel:(id)arg1;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)updatePossibleStates;

@end

