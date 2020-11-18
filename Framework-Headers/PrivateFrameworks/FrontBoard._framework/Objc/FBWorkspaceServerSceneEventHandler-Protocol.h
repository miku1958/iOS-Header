//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSWorkspaceSceneActionsEvent, FBSWorkspaceSceneClientSettingsChangedEvent, FBSWorkspaceSceneLayerEvent;

@protocol FBWorkspaceServerSceneEventHandler <NSObject>
- (void)sceneAttachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneDetachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneDidReceiveActions:(FBSWorkspaceSceneActionsEvent *)arg1;
- (void)sceneDidUpdateClientSettings:(FBSWorkspaceSceneClientSettingsChangedEvent *)arg1;
- (void)sceneUpdateLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
@end

