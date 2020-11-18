//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKLocalPlayer, NSDate, NSString, UIViewController;

@interface GKLocalPlayerAuthenticator : NSObject
{
    NSString *_username;
    NSString *_password;
    GKLocalPlayer *_resultantLocalPlayer;
    GKLocalPlayer *_inputLocalPlayer;
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _forceAuthentication;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    UIViewController *_presentingViewController;
}

@property (getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property BOOL forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property (strong) GKLocalPlayer *inputLocalPlayer; // @synthesize inputLocalPlayer=_inputLocalPlayer;
@property (strong) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property (strong) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property (copy) NSString *password; // @synthesize password=_password;
@property UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong) GKLocalPlayer *resultantLocalPlayer; // @synthesize resultantLocalPlayer=_resultantLocalPlayer;
@property (copy) NSString *username; // @synthesize username=_username;

+ (id)authenticatorForExistingPlayer:(id)arg1;
+ (id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3;
+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateUsingAuthUI:(BOOL)arg1 authUIDismissHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateUsingAuthUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authenticationDidComplete;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)reset;

@end

