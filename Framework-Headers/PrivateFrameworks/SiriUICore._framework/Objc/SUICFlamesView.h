//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, FlameGroup, MISSING_TYPE, NSMutableArray, SUICAudioLevelSmoother, UIColor, UIImage, UIImageView, UIScreen;
@protocol SUICFlamesViewDelegate;

@interface SUICFlamesView : UIView
{
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    int _flameProgramHandle;
    int _auraProgramHandle;
    int _vShadID;
    int _fShadID;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned int _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    unsigned int _auraVertexCircles;
    float _maxSubdivisionLevel;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    NSMutableArray *_flameGroups;
    FlameGroup *_currentFlameGroup;
    int _viewWidth;
    int _viewHeight;
    float _dictationUnitSize;
    UIScreen *_screen;
    UIImageView *_overlayImageView;
    double _startTime;
    double _dictationRedColor;
    double _dictationGreenColor;
    double _dictationBlueColor;
    SUICAudioLevelSmoother *_levelSmoother;
    int _fidelity;
    BOOL _isInitialized;
    BOOL _hasCustomActiveFrame;
    BOOL _shadersAreCompiled;
    BOOL _reduceMotionEnabled;
    BOOL _showAura;
    BOOL _reduceFrameRate;
    BOOL _renderInBackground;
    int _mode;
    int _state;
    id<SUICFlamesViewDelegate> _delegate;
    UIImage *_overlayImage;
    UIColor *_dictationColor;
    struct CGRect _activeFrame;
}

@property (nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property (weak, nonatomic) id<SUICFlamesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIColor *dictationColor; // @synthesize dictationColor=_dictationColor;
@property (nonatomic) int mode; // @synthesize mode=_mode;
@property (strong, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property (nonatomic) BOOL reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property (nonatomic) BOOL renderInBackground; // @synthesize renderInBackground=_renderInBackground;
@property (nonatomic) BOOL showAura; // @synthesize showAura=_showAura;
@property (nonatomic) int state; // @synthesize state=_state;

+ (Class)layerClass;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3 prewarmInBackground:(BOOL)arg4;
- (void).cxx_destruct;
- (void)_cleanupGL;
- (float)_currentMicPowerLevel;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(BOOL)arg6 withCullingForAura:(BOOL)arg7 forVertices:(struct *)arg8;
- (BOOL)_initGLAndSetupDisplayLink:(BOOL)arg1;
- (unsigned int)_numVerticesPerCircle;
- (MISSING_TYPE *)_predeterminedVertexPositionForAuraWithPolarVertex: /* Error: Ran out of types for this method. */;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (BOOL)_resizeFromLayer:(id)arg1;
- (void)_setValuesForFidelity:(int)arg1;
- (void)_setupDisplayLink;
- (BOOL)_setupFramebuffer;
- (BOOL)_setupShaders;
- (BOOL)_setupVertexBuffer;
- (void)_tearDownDisplayLink;
- (void)_updateCurveLayer:(id)arg1;
- (void)_updateOrthoProjection;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)inDictationMode;
- (BOOL)inSiriMode;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(double)arg2 fidelity:(int)arg3;
- (void)layoutSubviews;
- (void)prewarmShadersForCurrentMode;
- (void)resetAndReinitializeGL:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)stopRenderingAndCleanupGL;

@end

