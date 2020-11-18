//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject
{
    double _timePreviousUpdate;
    struct SKCRenderer *_skcRenderer;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    SKScene *_scene;
    float _prevBackingScaleFactor;
    BOOL showsFPS;
    BOOL showsNodeCount;
    double _backingScaleFactor;
    struct CGRect _bounds;
}

@property (nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (strong, nonatomic) SKScene *scene; // @synthesize scene=_scene;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS; // @synthesize showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount; // @synthesize showsNodeCount;
@property (nonatomic) BOOL showsPhysics;

+ (int)getOpenGLFramebuffer:(id)arg1;
+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (void)restoreDefaultOpenGLState:(id)arg1 frameBuffer:(int)arg2;
+ (void)setPrefersOpenGL:(BOOL)arg1;
- (void).cxx_destruct;
- (double)_fps;
- (MISSING_TYPE *)_getDestBounds;
- (CDStruct_f1db2b5e)_getMatrix;
- (id)_getOptions;
- (MISSING_TYPE *)_getViewport;
- (void)_initialize;
- (id)_scene;
- (BOOL)_shouldCenterStats;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsCoreAnimationFPS;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (BOOL)_showsOutlineInterior;
- (BOOL)_showsSpriteBounds;
- (BOOL)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSKCRenderer:(struct SKCRenderer *)arg1;
- (struct CGSize)pixelSize;
- (void)render:(BOOL)arg1;
- (void)renderToFramebuffer:(int)arg1 shouldClear:(BOOL)arg2;
- (void)renderTransition:(id)arg1 toFramebuffer:(int)arg2 withInputTexture:(unsigned int)arg3 outputTexture:(unsigned int)arg4 inputTextureSize:(struct CGSize)arg5 outputTextureSize:(struct CGSize)arg6 time:(float)arg7;
- (void)renderTransition:(id)arg1 withInputTexture:(unsigned int)arg2 outputTexture:(unsigned int)arg3 inputTextureSize:(struct CGSize)arg4 outputTextureSize:(struct CGSize)arg5 time:(float)arg6;
- (void)setShowsQuadCount:(BOOL)arg1;
- (void)setShowsSpriteBounds:(BOOL)arg1;
- (void)set_shouldCenterStats:(BOOL)arg1;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsCoreAnimationFPS:(BOOL)arg1;
- (void)set_showsCulledNodesInNodeCount:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
- (void)set_showsOutlineInterior:(BOOL)arg1;
- (void)set_showsSpriteBounds:(BOOL)arg1;
- (void)set_showsTotalAreaRendered:(BOOL)arg1;
- (void)settingsForTransition:(id)arg1 atTime:(double)arg2 renderIncomingToTexture:(BOOL *)arg3 renderOutgoingToTexture:(BOOL *)arg4 renderIncomingToScreen:(BOOL *)arg5 renderOutgoingToScreen:(BOOL *)arg6;
- (void)setupContext;
- (BOOL)showsQuadCount;
- (BOOL)showsSpriteBounds;
- (void)updateAtTime:(double)arg1;

@end

