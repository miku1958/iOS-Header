//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICSharedPasswordUtilities.h>

@class NSString, UIAlertController;

@interface ICPasswordUtilities : ICSharedPasswordUtilities
{
    BOOL _authenticationInProgress;
    UIAlertController *_displayedAlertController;
    NSString *_divergedSharedPassword;
}

@property (nonatomic) BOOL authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
@property (weak, nonatomic) UIAlertController *displayedAlertController; // @synthesize displayedAlertController=_displayedAlertController;
@property (strong, nonatomic) NSString *divergedSharedPassword; // @synthesize divergedSharedPassword=_divergedSharedPassword;

+ (BOOL)authenticateDevicePasscodeIfNecessaryWithReason:(id)arg1;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)arg1 confirmButtonTitle:(id)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)deviceHasPasscode;
+ (struct UIImage *)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (void)setTouchIDEnabledForSharedPassword:(BOOL)arg1;
+ (id)sharedInstance;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (BOOL)touchIDEnabledForSharedPassword;
+ (BOOL)touchIDHardwareIsAvailable;
+ (BOOL)touchIDIsEnrolled;
- (void).cxx_destruct;
- (void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(BOOL)arg4 displayWindow:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)_keychainContainsValidItemForSyncingObject:(id)arg1;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(BOOL)arg5;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithTouchIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithTouchIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;
- (BOOL)keychainContainsValidItemForAccount:(id)arg1;
- (BOOL)keychainContainsValidItemForNote:(id)arg1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showUpdateDivergedPasswordForSharedPassword:(id)arg1 oldPassword:(id)arg2 displayWindow:(id)arg3;

@end

