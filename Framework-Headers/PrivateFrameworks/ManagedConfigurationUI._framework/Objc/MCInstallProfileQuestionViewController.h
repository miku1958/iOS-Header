//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>
#import <ManagedConfigurationUI/UITextFieldDelegate-Protocol.h>

@class MCUIFieldCollection, NSString, UIAlertView, UITextField;
@protocol MCProfileQuestionsControllerDelegate;

@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate>
{
    MCUIFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    BOOL _waitingForPasscodePreflight;
    int _outDirection;
    UIAlertView *_activeAlert;
    BOOL _showingKeyboard;
    BOOL _isLastQuestion;
    id<MCProfileQuestionsControllerDelegate> _questionsDelegate;
    UITextField *_textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int outDirection; // @synthesize outDirection=_outDirection;
@property (weak, nonatomic) id<MCProfileQuestionsControllerDelegate> questionsDelegate; // @synthesize questionsDelegate=_questionsDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (void)_cancelActiveAlert:(BOOL)arg1;
- (void)_cancelButtonClicked;
- (void)_cancelInput;
- (void)_cancelPayload;
- (void)_configureQuestionField:(id)arg1;
- (void)_continueOrFinish;
- (void)_continueWithCurrentField;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_disableRightButton;
- (void)_enableRightButton;
- (void)_finishInput;
- (void)_hideKeyboard:(BOOL)arg1;
- (void)_hideProgressIndicator;
- (void)_nextButtonClicked;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_questionFieldEmpty:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryPayload;
- (void)_retryWithCurrentField;
- (void)_setup;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)_showKeyboard:(BOOL)arg1;
- (void)_showNavButtonsAnimated:(BOOL)arg1;
- (void)_showProgressIndicator;
- (void)_skipPayload;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_textFieldValueChanged:(id)arg1;
- (void)_updateNavigationBar;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithFieldCollection:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithUserInput:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)stopWaitingForMoreInput;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateWithUserInput:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)waitForMoreInput;

@end

