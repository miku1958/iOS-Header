//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <WorkflowUI/WFTextField-Protocol.h>

@class NSAttributedString, NSDictionary, NSSet, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, WFVariableInputCoordinator;
@protocol UITextInputDelegate, UITextInputTokenizer, WFVariableInsertionFieldDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenTextField : UITextField <WFTextField>
{
    BOOL _variablesDisabled;
    NSSet *_allowedVariableTypes;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    unsigned long long _syntaxHighlightingType;
    id<WFVariableInsertionFieldDelegate> _variableInsertionDelegate;
    NSString *_customButtonTitle;
    CDUnknownBlockType _variableBlock;
    CDUnknownBlockType _customButtonBlock;
    WFVariableInputCoordinator *_variableCoordinator;
    struct UIEdgeInsets _edgeInsets;
}

@property (copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (copy, nonatomic) CDUnknownBlockType customButtonBlock; // @synthesize customButtonBlock=_customButtonBlock;
@property (copy, nonatomic) NSString *customButtonTitle; // @synthesize customButtonTitle=_customButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (strong, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (copy, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property (strong, nonatomic) WFVariableInputCoordinator *variableCoordinator; // @synthesize variableCoordinator=_variableCoordinator;
@property (weak, nonatomic) id<WFVariableInsertionFieldDelegate> variableInsertionDelegate; // @synthesize variableInsertionDelegate=_variableInsertionDelegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property (nonatomic) BOOL variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)convertNonbreakingSpacesInClipboardIfNecessary;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)paste:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)shouldChangeCharactersWithNonbreakingSpacesIfNecessaryInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)textWithRegularSpaces;
- (void)tintColorDidChange;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (void)updateVariableBlock;
- (BOOL)usesNonbreakingSpaces;

@end
