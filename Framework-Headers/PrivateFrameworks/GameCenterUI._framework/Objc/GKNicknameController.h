//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/UITextFieldDelegate-Protocol.h>

@class GKReachability, NSArray, NSString, UIActivityIndicatorView, UITextField;
@protocol GKNicknameControllerDelegate;

@interface GKNicknameController : NSObject <UITextFieldDelegate>
{
    BOOL _nicknameWasEdited;
    BOOL _nicknameChangeWasCommitted;
    BOOL _shouldShakeTextFieldOnError;
    BOOL _shouldUseSuggestedNicknameOnDefaultNickname;
    UITextField *_nickname;
    UIActivityIndicatorView *_activityIndicator;
    id<GKNicknameControllerDelegate> _delegate;
    GKReachability *_reachability;
    NSArray *_suggestedNicknames;
    NSString *_defaultNickname;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSString *defaultNickname; // @synthesize defaultNickname=_defaultNickname;
@property (weak) id<GKNicknameControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UITextField *nickname; // @synthesize nickname=_nickname;
@property (nonatomic) BOOL nicknameChangeWasCommitted; // @synthesize nicknameChangeWasCommitted=_nicknameChangeWasCommitted;
@property (nonatomic) BOOL nicknameWasEdited; // @synthesize nicknameWasEdited=_nicknameWasEdited;
@property (strong, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property (nonatomic) BOOL shouldShakeTextFieldOnError; // @synthesize shouldShakeTextFieldOnError=_shouldShakeTextFieldOnError;
@property (nonatomic) BOOL shouldUseSuggestedNicknameOnDefaultNickname; // @synthesize shouldUseSuggestedNicknameOnDefaultNickname=_shouldUseSuggestedNicknameOnDefaultNickname;
@property (strong, nonatomic) NSArray *suggestedNicknames; // @synthesize suggestedNicknames=_suggestedNicknames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)commitNicknameChanges:(CDUnknownBlockType)arg1;
- (void)didSelectSuggestion:(id)arg1;
- (void)displayNicknameSuggestions;
- (id)init;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadSuggestedNicknames:(CDUnknownBlockType)arg1;
- (void)nicknameTextChanged:(id)arg1;
- (void)reset;
- (void)shakeNicknameTextFieldWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startObservingKeyboardEvents;
- (void)stopObservingKeyboardEvents;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateReturnKeyEnabledState;

@end

