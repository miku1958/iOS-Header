//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICSharedPasswordUtilities.h>

@class NSString, UIAlertController;

@interface ICPasswordUtilities : ICSharedPasswordUtilities
{
    BOOL _authenticationInProgress;
    UIAlertController *_displayedAlertController;
    NSString *_divergedAccountPassword;
}

@property (nonatomic) BOOL authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
@property (weak, nonatomic) UIAlertController *displayedAlertController; // @synthesize displayedAlertController=_displayedAlertController;
@property (strong, nonatomic) NSString *divergedAccountPassword; // @synthesize divergedAccountPassword=_divergedAccountPassword;

+ (void)authenticateForMovingNotes:(id)arg1 toNoteContainer:(id)arg2 displayWindow:(id)arg3 authenticateFailureHandler:(CDUnknownBlockType)arg4 movingBlock:(CDUnknownBlockType)arg5;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)arg1 account:(id)arg2 confirmButtonTitle:(id)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (BOOL)deviceHasPasscode;
+ (unsigned long long)faceIDAccess;
+ (BOOL)faceIDAccessAllowedViaTCC;
+ (BOOL)faceIDEnabledForSharedPasswordForAccountID:(id)arg1;
+ (id)faceIDFailurePrompt;
+ (id)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (void)requestAllowFaceIDIfRequired:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (BOOL)touchIDEnabledForSharedPasswordForAccountID:(id)arg1;
+ (void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg1;
- (void).cxx_destruct;
- (void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(BOOL)arg4 wrongAccountName:(id)arg5 displayWindow:(id)arg6 failedAttemptHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (BOOL)_keychainContainsValidItemForSyncingObject:(id)arg1;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(BOOL)arg5 wrongAccountName:(id)arg6;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithBiometricIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithBiometricIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)hidePasswordEntrySheet;
- (id)init;
- (BOOL)keychainContainsValidItemForAccount:(id)arg1;
- (BOOL)keychainContainsValidItemForNote:(id)arg1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)arg1 oldPassword:(id)arg2 account:(id)arg3 displayWindow:(id)arg4;

@end

