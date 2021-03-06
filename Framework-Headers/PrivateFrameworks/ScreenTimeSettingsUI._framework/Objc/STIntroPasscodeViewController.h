//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ScreenTimeSettingsUI/BFFPasscodeInputViewDelegate-Protocol.h>

@class NSString, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate>
{
    BOOL _askForRecoveryAppleID;
    BOOL _childOrNotSignedIntoiCloud;
    BOOL _numeric;
    STIntroductionModel *_model;
    NSString *_altDSID;
    CDUnknownBlockType _continueHandler;
    long long _passcodeState;
    NSString *_initialPasscode;
    unsigned long long _numericLength;
}

@property (readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (readonly) BOOL askForRecoveryAppleID; // @synthesize askForRecoveryAppleID=_askForRecoveryAppleID;
@property (readonly, getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // @synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud;
@property (readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSString *initialPasscode; // @synthesize initialPasscode=_initialPasscode;
@property (readonly) STIntroductionModel *model; // @synthesize model=_model;
@property (getter=isNumeric) BOOL numeric; // @synthesize numeric=_numeric;
@property unsigned long long numericLength; // @synthesize numericLength=_numericLength;
@property long long passcodeState; // @synthesize passcodeState=_passcodeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_passcodeView;
- (void)_transitionToFirstPasscodePaneWithState:(long long)arg1;
- (id)initWithIntroductionModel:(id)arg1 askForRecoveryAppleID:(BOOL)arg2 altDSID:(id)arg3 isChildOrNotSignedIntoiCloud:(BOOL)arg4 continueHandler:(CDUnknownBlockType)arg5;
- (void)loadView;
- (void)nextButtonTapped;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeInputView;
- (void)passcodeTypeChanged:(BOOL)arg1;
- (void)updatePasscodeType;
- (void)userEnteredPasscode:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

