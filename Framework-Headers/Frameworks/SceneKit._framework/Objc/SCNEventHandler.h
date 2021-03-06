//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode, SCNView;

@interface SCNEventHandler : NSObject
{
    SCNView *_view;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}

@property BOOL autoSwitchToFreeCamera;
@property BOOL enableFreeCamera;
@property (readonly) SCNNode *freeCamera;
@property (readonly) SCNView *view;

- (void)activateFreeCamera;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)dealloc;
- (id)gestureRecognizers;
- (id)init;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (BOOL)wantsRedraw;

@end

