//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentity, NSString, SBApplication;

@protocol SBApplicationDropSessionSceneProviding <NSObject>
- (BOOL)isApplicationActiveAndVisible:(SBApplication *)arg1;
- (FBSSceneIdentity *)mostRecentSceneIdentityExcludingLiveScenesForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)preferredSceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 preferNewScene:(BOOL)arg3;
@end

