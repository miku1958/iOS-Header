//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController
{
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    double _keyboardHeight;
    BOOL _showsAdvancedSettings;
    int _mode;
    int _securityCodeType;
    NSString *_firstPasscodeEntry;
}

@property (strong, nonatomic) NSString *firstPasscodeEntry; // @synthesize firstPasscodeEntry=_firstPasscodeEntry;
@property (nonatomic) int mode; // @synthesize mode=_mode;
@property (nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
@property (nonatomic) BOOL showsAdvancedSettings; // @synthesize showsAdvancedSettings=_showsAdvancedSettings;

- (void).cxx_destruct;
- (id)_configureTextEntryCell;
- (void)animatePasscodeFieldLeft:(BOOL)arg1;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (void)dismissAlerts;
- (void)forgotSecurityCode;
- (void)generateRandomCode;
- (id)init;
- (void)keyboardWillShow:(id)arg1;
- (id)placeholderText;
- (void)showAdvancedOptions;
- (id)specifiers;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (void)textEntryViewDidChange:(id)arg1;
- (void)updateNextButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
