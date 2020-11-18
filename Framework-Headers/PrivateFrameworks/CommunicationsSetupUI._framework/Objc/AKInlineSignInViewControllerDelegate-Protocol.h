//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationContext, AKInlineSignInViewController, NSDictionary, NSError, NSMutableDictionary;

@protocol AKInlineSignInViewControllerDelegate <NSObject>

@optional
- (void)signInViewController:(AKInlineSignInViewController *)arg1 didAuthenticateWithResults:(NSDictionary *)arg2 error:(NSError *)arg3;
- (BOOL)signInViewController:(AKInlineSignInViewController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
- (void)signInViewController:(AKInlineSignInViewController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4 completion:(void (^)(BOOL))arg5;
@end

