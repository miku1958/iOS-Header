//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/HKGLView.h>

#import <ActivityAchievementsUI/UIGestureRecognizerDelegate-Protocol.h>

@class AAUIBadge, AAUIBadgeModelConfiguration, GLKTextureInfo, NSAttributedString, NSDictionary, NSObject, NSString, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AAUIBadgeViewDelegate, OS_dispatch_queue;

@interface AAUIBadgeView : HKGLView <UIGestureRecognizerDelegate>
{
    AAUIBadge *_badge;
    union _GLKMatrix4 _viewProjectionMatrix;
    GLKTextureInfo *_colorTexture;
    GLKTextureInfo *_envTexture;
    GLKTextureInfo *_backTexture;
    GLKTextureInfo *_fleckNormalTexture;
    unsigned long long _shape;
    UIImage *_backAppleLogo;
    NSAttributedString *_backsideAttributedString;
    BOOL _backTextureNeedsRegeneration;
    unsigned int _program;
    unsigned int _faceProgram;
    unsigned int _inlayFaceProgram;
    unsigned int _triColorFaceProgram;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    int _numGroups;
    int *_groupTriangleCounts;
    int *_materialIndices;
    struct __UniformBindings _uniformBindings;
    struct __UniformBindings _faceUniformBindings;
    struct __UniformBindings _inlayFaceUniformBindings;
    struct __UniformBindings _triColorFaceUniformBindings;
    NSDictionary *_tweakableUniforms;
    union _GLKMatrix4 _modelTransform;
    double _spinRate;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    BOOL _magnetsEngaged;
    union _GLKVector3 _modelBaseColor;
    union _GLKVector3 _modelEnamelColor;
    BOOL _modelUsesFullColorEnamel;
    BOOL _modelUsesEarnedShader;
    BOOL _modelFaceHasMetalInlay;
    BOOL _modelUsesTriColorEnamel;
    union _GLKVector3 _triColors[3];
    BOOL _verticalPanningDisabled;
    AAUIBadgeModelConfiguration *_configuration;
    CDUnknownBlockType _shortenedBadgeBacksideStringProvider;
    id<AAUIBadgeViewDelegate> _badgeDelegate;
    NSObject<OS_dispatch_queue> *_pauseByNotificationQueueOverride;
}

@property (weak, nonatomic) id<AAUIBadgeViewDelegate> badgeDelegate; // @synthesize badgeDelegate=_badgeDelegate;
@property (strong, nonatomic) AAUIBadgeModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pauseByNotificationQueueOverride; // @synthesize pauseByNotificationQueueOverride=_pauseByNotificationQueueOverride;
@property (copy, nonatomic) CDUnknownBlockType shortenedBadgeBacksideStringProvider; // @synthesize shortenedBadgeBacksideStringProvider=_shortenedBadgeBacksideStringProvider;
@property (readonly) Class superclass;
@property (nonatomic) BOOL verticalPanningDisabled; // @synthesize verticalPanningDisabled=_verticalPanningDisabled;

+ (double)badgeAspectRatio;
+ (double)screenScaleMaximum;
+ (double)screenScaleMultiple;
- (void).cxx_destruct;
- (void)_applyImpulse:(double)arg1;
- (double)_attenuatedSpinRate:(double)arg1;
- (double)_attenuatedVelocity:(double)arg1;
- (void)_context_createBuffers;
- (void)_context_destroyBuffers;
- (void)_context_drawInRect:(struct CGRect)arg1;
- (void)_context_loadBadgeModel;
- (void)_context_loadBadgeModelWithConfiguration:(id)arg1;
- (void)_context_loadShaders;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_setup;
- (void)_context_setupScene;
- (id)_defaultTweaks;
- (void)_disengageMagnets;
- (void)_engageMagnets;
- (void)_forEachProgram:(CDUnknownBlockType)arg1;
- (void)_generateBackTexture;
- (void)_longPressInternalOnly:(id)arg1;
- (float)_normalizeAngle:(float)arg1;
- (void)_panned:(id)arg1;
- (void)_pauseByNotification:(id)arg1;
- (void)_setBackTextureNeedsRegeneration;
- (void)_spin360Degrees;
- (void)_tapped:(id)arg1;
- (id)_unearnedShaderDefaultTweaks;
- (id)_valueForTweak:(id)arg1;
- (void)dealloc;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initUsingEarnedShader:(BOOL)arg1;
- (double)playFlipInAnimation;
- (double)playFlipOutAnimation;
- (void)playRevealAnimationWithDuration:(double)arg1;
- (long long)preferredStatusBarStyle;
- (void)render360RotationPNGSequenceWithNumberOfFrames:(unsigned long long)arg1;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBadgeBacksideAttributedString:(id)arg1;
- (void)setBadgeBacksideIcon:(id)arg1;
- (void)setBadgeModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (void)setFixedBadgeAngle:(double)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)update;

@end
