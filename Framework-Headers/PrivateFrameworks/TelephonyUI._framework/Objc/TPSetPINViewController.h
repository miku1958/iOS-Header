//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TelephonyUI/TPSimpleNumberPadDelegate-Protocol.h>

@class NSString, TPPasscodeView, TPSimpleNumberPad, UILabel, UIView;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>
{
    BOOL _confirmPIN;
    int _initialState;
    int _state;
    unsigned int _minPINLength;
    unsigned int _maxPINLength;
    id<TPSetPINViewControllerDelegate> _delegate;
    NSString *_promptTextForOldPIN;
    NSString *_promptTextForNewPIN;
    NSString *_promptTextForConfirmingNewPIN;
    NSString *_promptTextForSavingPIN;
    UIView *_customBackgroundView;
    UILabel *_statusLabel;
    TPPasscodeView *_passcodeView;
    TPSimpleNumberPad *_numberPad;
    NSString *_oldPIN;
    NSString *_unconfirmedPIN;
}

@property BOOL confirmPIN; // @synthesize confirmPIN=_confirmPIN;
@property (strong) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property id<TPSetPINViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property int initialState; // @synthesize initialState=_initialState;
@property unsigned int maxPINLength; // @synthesize maxPINLength=_maxPINLength;
@property unsigned int minPINLength; // @synthesize minPINLength=_minPINLength;
@property (strong) TPSimpleNumberPad *numberPad; // @synthesize numberPad=_numberPad;
@property (strong) NSString *oldPIN; // @synthesize oldPIN=_oldPIN;
@property (strong) TPPasscodeView *passcodeView; // @synthesize passcodeView=_passcodeView;
@property (strong, nonatomic) NSString *promptTextForConfirmingNewPIN; // @synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN;
@property (strong, nonatomic) NSString *promptTextForNewPIN; // @synthesize promptTextForNewPIN=_promptTextForNewPIN;
@property (strong, nonatomic) NSString *promptTextForOldPIN; // @synthesize promptTextForOldPIN=_promptTextForOldPIN;
@property (strong, nonatomic) NSString *promptTextForSavingPIN; // @synthesize promptTextForSavingPIN=_promptTextForSavingPIN;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (strong) NSString *unconfirmedPIN; // @synthesize unconfirmedPIN=_unconfirmedPIN;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (void)_updateStatusLabel;
- (void)_updateUIForStateChange;
- (void)dealloc;
- (id)init;
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (void)loadView;
- (double)numberPadTopConstraintConstant;
- (void)resetWithErrorPrompt:(id)arg1;
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;
- (void)simpleNumberPadDeletePressed:(id)arg1;
- (BOOL)wantsFullScreenLayout;

@end

