//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

#import <FamilyCircle/FAFamilySetupPrompterDelegate-Protocol.h>

@class ACAccount, FAFamilySetupPrompter, NSString, UIViewController;

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate>
{
    FAFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
    BOOL _isFirstRun;
    UIViewController *_presentingViewController;
    ACAccount *_iTunesAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property BOOL isFirstRun; // @synthesize isFirstRun=_isFirstRun;
@property UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemonWithOptions:(id)arg1;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (void)launchiCloudFamilySettings;
- (void)launchiCloudFamilySettingsWithOptions:(id)arg1;

@end
