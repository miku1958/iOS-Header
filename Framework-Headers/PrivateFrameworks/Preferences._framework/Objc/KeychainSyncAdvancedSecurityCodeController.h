//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>
{
    double _cellTextWidth;
    UIFont *_cellFont;
    BOOL _showsDisableRecoveryOption;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishedWithSpecifier:(id)arg1;
- (void)nextPressed;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)viewDidLoad;

@end

