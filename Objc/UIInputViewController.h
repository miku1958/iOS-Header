//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UITextInputDelegate-Protocol.h>
#import <UIKitCore/_UITextDocumentInterfaceDelegate-Protocol.h>

@class NSString, UIInputView, UIKeyboard;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate>
{
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    double _touchBegan;
    BOOL _alignsToContentViewController;
    BOOL _autosizeToCurrentKeyboard;
    BOOL _hasDictationKey;
    id<UITextDocumentProxy> _textDocumentProxy;
    NSString *_primaryLanguage;
}

@property (nonatomic) BOOL _alignsToContentViewController; // @synthesize _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard; // @synthesize _autosizeToCurrentKeyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDictationKey; // @synthesize hasDictationKey=_hasDictationKey;
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<UITextDocumentProxy> textDocumentProxy; // @synthesize textDocumentProxy=_textDocumentProxy;

+ (BOOL)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)_canResignIfContainsFirstResponder;
- (id)_compatibilityController;
- (void)_didResetDocumentState;
- (id)_extensionContext;
- (id)_proxyInterface;
- (void)_setExtensionContextUUID:(id)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)_setupInputController;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_textDocumentInterface;
- (void)_updateConformanceCache;
- (void)_willResetDocumentState;
- (void)advanceToNextInputMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissKeyboard;
- (void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)requestSupplementaryLexiconWithCompletion:(CDUnknownBlockType)arg1;
- (void)returnToPreviousInputMode;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_autosizeToCurrentKeyboard:(BOOL)arg1;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

