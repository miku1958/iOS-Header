//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>

@class HUAccessorySettingsSiriRecognitionLanguageItemManager, NAFuture, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>
{
    NAFuture *_changeLanguageFuture;
    long long _selectedLanguageIndex;
}

@property (strong, nonatomic) NAFuture *changeLanguageFuture; // @synthesize changeLanguageFuture=_changeLanguageFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager; // @dynamic itemManager;
@property (nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1;
- (void)_changeSiriLanguageOnlyForThisHomePod:(id)arg1 turnOffVoiceID:(BOOL)arg2;
- (void)_clearSpinner;
- (BOOL)_isAnyHomePodOnSupportedVoiceRecognitionLanguage;
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForThisORAllHomePods:(id)arg1 indexPath:(id)arg2;
- (BOOL)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1;
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllHomePods:(id)arg1;
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;

@end

