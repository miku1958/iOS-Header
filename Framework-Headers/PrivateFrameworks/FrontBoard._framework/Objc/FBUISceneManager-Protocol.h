//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBUISceneIdentity, FBUISceneSpecification, NSString;
@protocol FBUISceneWorkspace;

@protocol FBUISceneManager <NSObject>
- (void)invalidateSceneWorkspace:(id<FBUISceneWorkspace>)arg1;
- (void)registerSceneWorkspace:(id<FBUISceneWorkspace>)arg1;
- (void)workspace:(id<FBUISceneWorkspace>)arg1 createSceneWithName:(NSString *)arg2 specification:(FBUISceneSpecification *)arg3;
- (void)workspace:(id<FBUISceneWorkspace>)arg1 destroySceneWithIdentity:(FBUISceneIdentity *)arg2;
- (FBUISceneIdentity *)workspace:(id<FBUISceneWorkspace>)arg1 identityForSceneWithName:(NSString *)arg2 specification:(FBUISceneSpecification *)arg3;
@end

