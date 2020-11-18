//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <WorkflowUI/UIKeyInput-Protocol.h>
#import <WorkflowUI/WFVariableConfigurationAccessoryViewDelegate-Protocol.h>
#import <WorkflowUI/WFVariableConfigurationViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFVariableDelegate-Protocol.h>

@class NSString, UITextInputPasswordRules, UIView, WFVariable, WFVariableConfigurationAccessoryView, WFVariableConfigurationView;
@protocol WFVariableConfigurationResponderDelegate;

@interface WFVariableConfigurationResponder : UIResponder <WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput>
{
    BOOL _showsAccessoryActions;
    UIView *_nextResponder;
    id<WFVariableConfigurationResponderDelegate> _delegate;
    unsigned long long _exitAccessory;
    WFVariable *_variable;
    WFVariableConfigurationAccessoryView *_accessoryView;
    WFVariableConfigurationView *_configurationView;
}

@property (readonly, nonatomic) WFVariableConfigurationAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) WFVariableConfigurationView *configurationView; // @synthesize configurationView=_configurationView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFVariableConfigurationResponderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) unsigned long long exitAccessory; // @synthesize exitAccessory=_exitAccessory;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (weak, nonatomic) UIView *nextResponder; // @synthesize nextResponder=_nextResponder;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) BOOL showsAccessoryActions; // @synthesize showsAccessoryActions=_showsAccessoryActions;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;

+ (BOOL)shouldShowConfigurationOnInsertionOfVariable:(id)arg1;
- (void).cxx_destruct;
- (void)accessoryViewDidDelete:(id)arg1;
- (void)accessoryViewDidDismiss:(id)arg1;
- (void)accessoryViewDidRename:(id)arg1;
- (void)accessoryViewDidReturnToKeyboard:(id)arg1;
- (void)accessoryViewDidRevealAction:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)configurationViewController:(id)arg1 didUpdateVariable:(id)arg2;
- (void)configurationViewController:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)deleteBackward;
- (id)initWithVariable:(id)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (void)insertText:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)updateAccessoryView;
- (void)variableDidChange:(id)arg1;

@end
