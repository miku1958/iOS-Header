//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer;

@protocol KNAnimationPluginContext <NSObject>

@property (readonly, nonatomic) TSDGLState *GLState;
@property (readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property (readonly, nonatomic) struct CGRect animationFrame;
@property (readonly, nonatomic) TSDAnimationSet *animationSet;
@property (nonatomic) struct CGRect boundingRect;
@property (readonly, nonatomic) struct CGRect boundingRectOnCanvas;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) struct CGRect drawableFrame;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isBuild;
@property (readonly, nonatomic) BOOL isFrameRenderer;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) BOOL isMetalRenderer;
@property (readonly, nonatomic) BOOL isMotionBlurred;
@property (readonly, nonatomic) BOOL isMovieExport;
@property (readonly, nonatomic) BOOL isOpenGLRenderer;
@property (readonly, nonatomic) BOOL isPreview;
@property (readonly, nonatomic) BOOL isSceneRenderingEnabled;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL isWarmingUp;
@property (readonly, nonatomic) NSArray *magicMoveMatches;
@property (readonly, nonatomic) TSDMetalContext *metalContext;
@property (readonly, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property (readonly, nonatomic) double percent;
@property (readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property (readonly, nonatomic) NSArray *scaledTextures;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSArray *textures;
@property (readonly, nonatomic) NSDictionary *transitionAttributes;
@property (readonly, nonatomic) BOOL willRenderWithLiveTextureSources;

@end
