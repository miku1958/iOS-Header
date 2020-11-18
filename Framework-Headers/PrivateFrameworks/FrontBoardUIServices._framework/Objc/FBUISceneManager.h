//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUISceneManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FBUISceneManager : NSObject <FBUISceneManager>
{
    NSMutableDictionary *_workspacesByID;
    NSMutableDictionary *_sceneHostsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)invalidateSceneWorkspace:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
- (void)workspace:(id)arg1 destroySceneWithIdentity:(id)arg2;
- (id)workspace:(id)arg1 identityForSceneWithName:(id)arg2 specification:(id)arg3;

@end

