//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBApplicationSceneHandle, SBLayoutState, SBSceneManager;

@protocol SBSceneManagerObserver <NSObject>

@optional
- (void)sceneManager:(SBSceneManager *)arg1 didAddExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
- (void)sceneManager:(SBSceneManager *)arg1 didChangeFromLayoutState:(SBLayoutState *)arg2 toLayoutState:(SBLayoutState *)arg3;
- (void)sceneManager:(SBSceneManager *)arg1 didRemoveExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
- (void)sceneManagerDidInvalidate:(SBSceneManager *)arg1;
@end

