//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDGLState;

@protocol KNAnimationPluginContext <NSObject>

@property (readonly, nonatomic) TSDGLState *GLState;
@property (readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property (nonatomic) struct CGRect boundingRect;
@property (readonly, nonatomic) struct CGRect boundingRectOnCanvas;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isBuild;
@property (readonly, nonatomic) BOOL isFrameRenderer;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) BOOL isMetalRenderer;
@property (readonly, nonatomic) BOOL isMotionBlurred;
@property (readonly, nonatomic) BOOL isOpenGLRenderer;
@property (readonly, nonatomic) BOOL isPreview;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL isWarmingUp;
@property (readonly, nonatomic) NSArray *magicMoveMatches;
@property (readonly, nonatomic) double percent;
@property (readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property (readonly, nonatomic) NSDictionary *scaledTextures;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSArray *textures;
@property (readonly, nonatomic) NSDictionary *transitionAttributes;

@end
