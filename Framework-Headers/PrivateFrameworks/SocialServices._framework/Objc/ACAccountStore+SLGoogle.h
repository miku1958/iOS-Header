//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (SLGoogle)
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 delegateClassName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end

