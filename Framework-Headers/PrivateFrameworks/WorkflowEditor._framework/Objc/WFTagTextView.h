//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <WorkflowEditor/WFTextField-Protocol.h>

@class NSAttributedString, NSSet, NSString, UIColor, UIFont, WFVariableInputCoordinator;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFTagTextView : UITextView <WFTextField>
{
    BOOL _variablesDisabled;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    unsigned long long _syntaxHighlightingType;
    CDUnknownBlockType _variableBlock;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property (copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (strong, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartQuotesType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property (strong, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property (nonatomic) BOOL variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setReturnKeyType:(long long)arg1;
- (void)textDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;

@end
