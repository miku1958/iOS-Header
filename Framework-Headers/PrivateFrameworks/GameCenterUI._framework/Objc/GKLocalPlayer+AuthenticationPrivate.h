//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKLocalPlayer.h>

#import <GameCenterUI/GKLocalPlayerAuthenticationUIPersonality-Protocol.h>

@class NSString;

@interface GKLocalPlayer (AuthenticationPrivate) <GKLocalPlayerAuthenticationUIPersonality>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)authenticationPersonality;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)sharedLocalPlayerAuthenticator;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (void)cancelAuthentication;
- (BOOL)isAuthenticating;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)startLegacyAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validateAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
@end

