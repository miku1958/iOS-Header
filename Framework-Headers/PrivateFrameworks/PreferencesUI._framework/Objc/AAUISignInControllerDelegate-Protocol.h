//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PreferencesUI/UINavigationControllerDelegate-Protocol.h>

@class AAUISignInController, NSError;

@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(NSError *)arg3;
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
@end

