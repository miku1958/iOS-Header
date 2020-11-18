//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKInputProvider-Protocol.h>

@class PKStroke;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKStrokeGenerator : NSObject <PKInputProvider>
{
    vector_58517711 _drawPoints;
    vector_03cfcf00 _outputPoints;
    long long _outputImmutableCount;
    BOOL _inputHasChanged;
    NSObject<OS_dispatch_queue> *_inputQueue;
    PKStroke *_currentStroke;
    long long _currentInputType;
    long long _immutableCount;
    vector_58517711 _updatedDrawPoints;
    BOOL _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    BOOL _useRuler;
    BOOL _isSnappedToRulerTopSide;
    BOOL _canSnapToRuler;
    BOOL _isSnappedToRuler;
    double _rulerWidth;
    double _strokeMaxForce;
    NSObject<OS_dispatch_queue> *_outputQueue;
    double _touchSensitivity;
    struct PKInputProviderInitial *_inputProvider;
    struct PKPixelSmoothingFilter *_pixelSmoothingFilter;
    struct PKPointReductionFilter *_pointReductionFilter;
    struct PKStartHookFilter *_startHookFilter;
    struct PKEndHookFilter *_endHookFilter;
    struct PKVelocityCalculationFilter *_velocityFilter;
    struct PKInputSmoother *_inputSmoother;
    struct PKInputToOutputFilter *_inputToOutputFilter;
    struct PKStartCapsFilter *_startCapFilter;
    struct PKAzimuthFilter *_azimuthFilter;
    struct PKEndCapsFilter *_endCapFilter;
    struct PKRulerExtremaFilter *_rulerExtremaFilter;
    struct PKEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct PKCompressionFilter *_compressionFilter;
    struct PKDecompressionFilter *_decompressionFilter;
    double _eraserIndicatorAlpha;
    double _inputScale;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

@property (nonatomic) struct PKAzimuthFilter *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property (nonatomic) BOOL canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property (nonatomic) struct PKCompressionFilter *compressionFilter; // @synthesize compressionFilter=_compressionFilter;
@property (nonatomic) struct PKDecompressionFilter *decompressionFilter; // @synthesize decompressionFilter=_decompressionFilter;
@property (nonatomic) struct PKEndCapsFilter *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property (nonatomic) struct PKEndHookFilter *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property (nonatomic) struct PKEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property (nonatomic) struct PKInputProviderInitial *inputProvider; // @synthesize inputProvider=_inputProvider;
@property (nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property (nonatomic) struct PKInputSmoother *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property (nonatomic) struct PKInputToOutputFilter *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property BOOL isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
@property (nonatomic) BOOL isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property (readonly) BOOL lastPointIsMasked;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property (nonatomic) struct PKPixelSmoothingFilter *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property (nonatomic) struct PKPointReductionFilter *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property (nonatomic) struct PKRulerExtremaFilter *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property (nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property (nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property (nonatomic) struct PKStartCapsFilter *startCapFilter; // @synthesize startCapFilter=_startCapFilter;
@property (nonatomic) struct PKStartHookFilter *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property (nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property (nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property (nonatomic) BOOL useRuler; // @synthesize useRuler=_useRuler;
@property (nonatomic) struct PKVelocityCalculationFilter *velocityFilter; // @synthesize velocityFilter=_velocityFilter;

+ (void)initialize;
+ (vector_58517711)inputPointsFromPath:(struct CGPath *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)addPoint:(CDStruct_f17e9403)arg1;
- (void)addPoints:(vector_58517711)arg1;
- (void)allowSnappingToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_58517711 *)arg2;
- (void)dealloc;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (void)drawingBeganWithStroke:(id)arg1 inputType:(long long)arg2 inputScale:(double)arg3 start:(CDUnknownBlockType)arg4;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEndedWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (long long)fetchFilteredPointsFromIndex:(long long)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (vector_58517711 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (vector_03cfcf00 *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (id)init;
- (void)maskToRuler;
- (struct _PKStrokePoint)outputCurrentStrokePoint:(CDStruct_f17e9403)arg1;
- (PKInputProvider_28cf270a *)outputFilter;
- (struct _PKStrokePoint)outputPoint:(CDStruct_f17e9403)arg1 baseValues:(struct _PKStrokePoint)arg2;
- (void)removePredictedTouches;
- (void)reset;
- (BOOL)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (void)snapToRuler;
- (id)strokeFromPath:(struct CGPath *)arg1 ink:(id)arg2 inputScale:(double)arg3;
- (void)updateImmutableCount;
- (void)updateRulerSnapping;

@end
