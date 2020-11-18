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

+ (BOOL)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (BOOL)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (BOOL)isAuthenticatedForAccount:(id)arg1;
+ (BOOL)isAuthenticatedForDefaultAccount;
+ (BOOL)isAuthenticatedForNote:(id)arg1;
+ (BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+ (BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+ (BOOL)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (BOOL)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (BOOL)isSharedPasswordCorrect:(id)arg1;
+ (void)lockAllNotes;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (BOOL)passwordCapabableAccountExists;
+ (void)resetAllSharedPasswords;
+ (void)resetTimeoutTimer;
+ (BOOL)setSharedPassword:(id)arg1 hint:(id)arg2;
+ (BOOL)setSharedPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3;
+ (BOOL)sharedPasswordExists;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(struct UIWindow *)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(struct UIWindow *)arg1;
+ (id)snippetForPasswordProtectedNote:(id)arg1;
+ (void)transferSharedPasswordIfNecessary;
+ (BOOL)unlockedNotesOrKeysExist;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toSharedPassword:(id)arg2 fromAccount:(id)arg3;
- (void).cxx_destruct;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
