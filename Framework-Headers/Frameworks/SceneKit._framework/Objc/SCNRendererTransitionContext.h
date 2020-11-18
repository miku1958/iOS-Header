//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCNNode, SCNOffscreenRenderer, SCNScene, SKTransition;

@interface SCNRendererTransitionContext : NSObject
{
    double _transitionStartTime;
    SKTransition *_transition;
    SCNScene *_outgoingScene;
    SCNNode *_outgoingPointOfView;
    CDUnknownBlockType completionHandler;
    struct __C3DFXPass *_transitionPass;
    SCNOffscreenRenderer *_renderers[2];
}

@property (strong, nonatomic) SCNNode *outgoingPointOfView; // @synthesize outgoingPointOfView=_outgoingPointOfView;
@property (strong, nonatomic) SCNScene *outgoingScene; // @synthesize outgoingScene=_outgoingScene;
@property (strong, nonatomic) SKTransition *transition; // @synthesize transition=_transition;
@property (nonatomic) double transitionStartTime; // @synthesize transitionStartTime=_transitionStartTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(struct CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5;
- (struct __C3DFXPass *)transitionPass;

@end
