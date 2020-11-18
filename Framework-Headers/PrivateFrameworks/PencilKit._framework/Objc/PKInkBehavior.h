//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKInkBehavior : NSObject
{
    vector_2b0a8222 _radiusOutput;
    vector_2b0a8222 _opacityOutput;
    vector_2b0a8222 _edgeWidthOutput;
    vector_2b0a8222 _aspectRatioOutput;
    vector_2b0a8222 _brushOpacityOutput;
    double _baseRadiusStylus;
    double _baseRadiusTouchPad;
    double _baseRadiusTouchPhone;
    BOOL _rotateEachParticle;
    BOOL _randomRotation;
    BOOL _adjustEndCapParticleAlpha;
    BOOL _variableSnappedWidth;
    BOOL _usesAzimuth;
    BOOL _isEraser;
    BOOL _isObjectEraser;
    BOOL _immutableVelocity;
    BOOL _showBrushIndicator;
    BOOL _timeDependent;
    unsigned int _particleCount;
    NSString *_actionName;
    NSString *_textureName;
    NSString *_accessibilityToolName;
    NSString *_accessibilityToolSelectedString;
    NSString *_toolIcon;
    unsigned long long _type;
    unsigned long long _blendMode;
    double _baseAlpha;
    double _blendAlpha;
    double _targetMultiple;
    double _particleSpacing;
    double _dynamicStep;
    double _touchStartCapTime;
    double _touchStartCapFade;
    double _touchEndCapTime;
    double _touchEndCapFade;
    double _stylusSmoothing;
    double _touchSmoothing;
    double _velocitySmoothing;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    struct CGSize _particleSize;
}

@property (nonatomic) NSString *accessibilityToolName; // @synthesize accessibilityToolName=_accessibilityToolName;
@property (nonatomic) NSString *accessibilityToolSelectedString; // @synthesize accessibilityToolSelectedString=_accessibilityToolSelectedString;
@property (copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property (nonatomic) BOOL adjustEndCapParticleAlpha; // @synthesize adjustEndCapParticleAlpha=_adjustEndCapParticleAlpha;
@property (nonatomic) double baseAlpha; // @synthesize baseAlpha=_baseAlpha;
@property (nonatomic) double blendAlpha; // @synthesize blendAlpha=_blendAlpha;
@property (nonatomic) unsigned long long blendMode; // @synthesize blendMode=_blendMode;
@property (nonatomic) double dynamicStep; // @synthesize dynamicStep=_dynamicStep;
@property (nonatomic) BOOL immutableVelocity; // @synthesize immutableVelocity=_immutableVelocity;
@property (nonatomic) BOOL isEraser; // @synthesize isEraser=_isEraser;
@property (nonatomic) BOOL isObjectEraser; // @synthesize isObjectEraser=_isObjectEraser;
@property (nonatomic) unsigned int particleCount; // @synthesize particleCount=_particleCount;
@property (nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property (nonatomic) double particleSpacing; // @synthesize particleSpacing=_particleSpacing;
@property (nonatomic) BOOL randomRotation; // @synthesize randomRotation=_randomRotation;
@property (nonatomic) BOOL rotateEachParticle; // @synthesize rotateEachParticle=_rotateEachParticle;
@property (nonatomic) double rulerOffsetConstant; // @synthesize rulerOffsetConstant=_rulerOffsetConstant;
@property (nonatomic) double rulerOffsetScale; // @synthesize rulerOffsetScale=_rulerOffsetScale;
@property (nonatomic) BOOL showBrushIndicator; // @synthesize showBrushIndicator=_showBrushIndicator;
@property (nonatomic) double stylusSmoothing; // @synthesize stylusSmoothing=_stylusSmoothing;
@property (nonatomic) double targetMultiple; // @synthesize targetMultiple=_targetMultiple;
@property (copy, nonatomic) NSString *textureName; // @synthesize textureName=_textureName;
@property (nonatomic) BOOL timeDependent; // @synthesize timeDependent=_timeDependent;
@property (copy, nonatomic) NSString *toolIcon; // @synthesize toolIcon=_toolIcon;
@property (nonatomic) double touchEndCapFade; // @synthesize touchEndCapFade=_touchEndCapFade;
@property (nonatomic) double touchEndCapTime; // @synthesize touchEndCapTime=_touchEndCapTime;
@property (nonatomic) double touchSmoothing; // @synthesize touchSmoothing=_touchSmoothing;
@property (nonatomic) double touchStartCapFade; // @synthesize touchStartCapFade=_touchStartCapFade;
@property (nonatomic) double touchStartCapTime; // @synthesize touchStartCapTime=_touchStartCapTime;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (nonatomic) BOOL usesAzimuth; // @synthesize usesAzimuth=_usesAzimuth;
@property (nonatomic) BOOL variableSnappedWidth; // @synthesize variableSnappedWidth=_variableSnappedWidth;
@property (nonatomic) double velocitySmoothing; // @synthesize velocitySmoothing=_velocitySmoothing;

+ (id)plistDictionaryForInk:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)alphaForStroke:(id)arg1;
- (double)baseRadiusForInputType:(long long)arg1;
- (double)brushOpacityForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (id)init;
- (id)initWithInk:(id)arg1;
- (id)initWithInk:(id)arg1 version:(unsigned long long)arg2;
- (void)loadBaseRadius:(id)arg1;
- (unique_ptr_61416811)loadFunction:(id)arg1;
- (void)loadInkWithDictionary:(id)arg1;
- (void)loadInkWithName:(id)arg1 version:(unsigned long long)arg2;
- (vector_2b0a8222)loadOutput:(id)arg1;
- (struct _PKStrokePoint)outputForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (struct _PKStrokePoint)outputTimePoint:(struct _PKStrokePoint)arg1 atTime:(double)arg2 stillChanging:(BOOL *)arg3;
- (unsigned int)particleTexture;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint)arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (id)setupParticleShader:(id)arg1 resourceHandler:(id)arg2;
- (id)shaderFrom:(id)arg1;
- (double)solve:(vector_2b0a8222 *)arg1 forPoint:(CDStruct_f17e9403)arg2 context:(CDStruct_5237edf5 *)arg3;
- (double)solveForTime:(vector_2b0a8222 *)arg1 forTime:(double)arg2 stillChanging:(BOOL *)arg3;
- (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier *)arg1;
- (void)verifyParameters;

@end
