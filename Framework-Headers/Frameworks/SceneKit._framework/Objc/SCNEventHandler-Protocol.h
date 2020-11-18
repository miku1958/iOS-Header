//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNCameraControlConfiguration-Protocol.h>

@class NSArray, SCNNode, SCNView;

@protocol SCNEventHandler <SCNCameraControlConfiguration>

@property (nonatomic) BOOL enableFreeCamera;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) SCNNode *freeCamera;
@property (nonatomic) SCNView *view;

- (void)activateFreeCamera;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (NSArray *)gestureRecognizers;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (BOOL)wantsRedraw;
@end

