//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSharedPasswordUtilities : NSObject
{
    id _displayedSheet;
}

@property (strong, nonatomic) id displayedSheet; // @synthesize displayedSheet=_displayedSheet;

+ (BOOL)accountPasswordExists;
+ (id)accountWithPassword:(id)arg1;
+ (BOOL)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (BOOL)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (void)clearRecentPasswordChangeCountAsReset:(BOOL)arg1;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (BOOL)hasAnyAccountWithPassword;
+ (BOOL)hasMultiplePasswordCapableAccounts;
+ (BOOL)hasSameCryptoKeyForNote:(id)arg1 andAccount:(id)arg2;
+ (void)incrementRecentPasswordChangeCountAsReset:(BOOL)arg1;
+ (BOOL)isAuthenticatedForAccount:(id)arg1;
+ (BOOL)isAuthenticatedForDefaultAccount;
+ (BOOL)isAuthenticatedForNote:(id)arg1;
+ (BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+ (BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+ (BOOL)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (BOOL)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (BOOL)isPasswordSetForAccount:(id)arg1;
+ (void)lockAllNotes;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (BOOL)passwordCapableAccountExists;
+ (id)passwordCapableAccounts;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)arg1;
+ (id)preferredHintAccount;
+ (long long)recentPasswordChangeCountAsReset:(BOOL)arg1;
+ (void)resetAllSharedPasswords;
+ (void)resetPasswordForAccount:(id)arg1;
+ (void)resetTimeoutTimer;
+ (BOOL)setPassword:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (BOOL)setPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3 forAccount:(id)arg4;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(id)arg1;
+ (BOOL)unlockedNotesOrKeysExist;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toAccountPassword:(id)arg2 fromAccount:(id)arg3;
- (void).cxx_destruct;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

