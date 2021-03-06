//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/WFVariableObserver-Protocol.h>
#import <WorkflowEditor/WFVariableShortcutsBarDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableShortcutsTrayDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableSuggesterDelegate-Protocol.h>

@class NSSet, NSString, UIColor, UIResponder, UIView, WFVariableShortcutsBar, WFVariableShortcutsTray, WFVariableSuggester;
@protocol WFInputViewMutable, WFVariableProvider, WFVariableTypingContext, WFVariableUIDelegate;

@interface WFVariableInputCoordinator : NSObject <WFVariableShortcutsBarDelegate, WFVariableShortcutsTrayDelegate, WFVariableSuggesterDelegate, WFVariableObserver>
{
    BOOL _showsDoneButton;
    BOOL _undocked;
    UIResponder<WFInputViewMutable> *_responder;
    id<WFVariableTypingContext> _variableTypingContext;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    NSString *_customButtonTitle;
    UIView *_inputViewWhenTrayCollapsed;
    UIColor *_tintColor;
    CDUnknownBlockType _variableBlock;
    CDUnknownBlockType _customButtonBlock;
    WFVariableShortcutsBar *_shortcutsBar;
    WFVariableShortcutsTray *_shortcutsTray;
    WFVariableSuggester *_variableSuggester;
    struct CGRect _previousFrame;
}

@property (copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property (copy, nonatomic) CDUnknownBlockType customButtonBlock; // @synthesize customButtonBlock=_customButtonBlock;
@property (copy, nonatomic) NSString *customButtonTitle; // @synthesize customButtonTitle=_customButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIView *inputViewWhenTrayCollapsed; // @synthesize inputViewWhenTrayCollapsed=_inputViewWhenTrayCollapsed;
@property (nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property (weak, nonatomic) UIResponder<WFInputViewMutable> *responder; // @synthesize responder=_responder;
@property (strong, nonatomic) WFVariableShortcutsBar *shortcutsBar; // @synthesize shortcutsBar=_shortcutsBar;
@property (strong, nonatomic) WFVariableShortcutsTray *shortcutsTray; // @synthesize shortcutsTray=_shortcutsTray;
@property (nonatomic) BOOL showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (nonatomic) BOOL undocked; // @synthesize undocked=_undocked;
@property (copy, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property (strong, nonatomic) WFVariableSuggester *variableSuggester; // @synthesize variableSuggester=_variableSuggester;
@property (weak, nonatomic) id<WFVariableTypingContext> variableTypingContext; // @synthesize variableTypingContext=_variableTypingContext;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;

- (void).cxx_destruct;
- (void)availableVariablesDidChange;
- (void)collapseTrayAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)reloadCurrentVariables;
- (void)revealTray;
- (void)shortcutsBar:(id)arg1 didSelectVariable:(id)arg2;
- (void)shortcutsBarDidDismiss:(id)arg1;
- (void)shortcutsBarDidOpenTray:(id)arg1;
- (void)shortcutsBarDidSelectCustomButton:(id)arg1;
- (void)shortcutsBarDidSelectMagicVariable:(id)arg1;
- (void)showActionOutputPicker;
- (BOOL)showsMagicVariables;
- (BOOL)showsUserDefinedVariables;
- (id)specialVariables;
- (void)updateInputViews;
- (void)variableShortcutsTray:(id)arg1 didSelectVariable:(id)arg2;
- (void)variableShortcutsTrayDidSelectMagicVariable:(id)arg1;
- (void)variableSuggesterSuggestionsDidChange:(id)arg1;

@end

