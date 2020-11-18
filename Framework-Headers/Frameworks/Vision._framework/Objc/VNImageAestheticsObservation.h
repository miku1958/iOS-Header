//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@interface VNImageAestheticsObservation : VNObservation
{
    float _aestheticScore;
    float _wellFramedSubjectScore;
    float _wellChosenBackgroundScore;
    float _tastefullyBlurredScore;
    float _sharplyFocusedSubjectScore;
    float _wellTimedShotScore;
    float _pleasantLightingScore;
    float _pleasantReflectionsScore;
    float _harmoniousColorScore;
    float _livelyColorScore;
    float _pleasantSymmetryScore;
    float _pleasantPatternScore;
    float _immersivenessScore;
    float _pleasantPerspectiveScore;
    float _pleasantPostProcessingScore;
    float _noiseScore;
    float _failureScore;
    float _pleasantCompositionScore;
    float _interestingSubjectScore;
    float _intrusiveObjectPresenceScore;
    float _pleasantCameraTiltScore;
    float _lowKeyLightingScore;
}

@property (readonly, nonatomic) float aestheticScore; // @synthesize aestheticScore=_aestheticScore;
@property (readonly, nonatomic) float failureScore; // @synthesize failureScore=_failureScore;
@property (readonly, nonatomic) float harmoniousColorScore; // @synthesize harmoniousColorScore=_harmoniousColorScore;
@property (readonly, nonatomic) float immersivenessScore; // @synthesize immersivenessScore=_immersivenessScore;
@property (readonly, nonatomic) float interestingSubjectScore; // @synthesize interestingSubjectScore=_interestingSubjectScore;
@property (readonly, nonatomic) float intrusiveObjectPresenceScore; // @synthesize intrusiveObjectPresenceScore=_intrusiveObjectPresenceScore;
@property (readonly, nonatomic) float livelyColorScore; // @synthesize livelyColorScore=_livelyColorScore;
@property (readonly, nonatomic) float lowKeyLightingScore; // @synthesize lowKeyLightingScore=_lowKeyLightingScore;
@property (readonly, nonatomic) float noiseScore; // @synthesize noiseScore=_noiseScore;
@property (readonly, nonatomic) float pleasantCameraTiltScore; // @synthesize pleasantCameraTiltScore=_pleasantCameraTiltScore;
@property (readonly, nonatomic) float pleasantCompositionScore; // @synthesize pleasantCompositionScore=_pleasantCompositionScore;
@property (readonly, nonatomic) float pleasantLightingScore; // @synthesize pleasantLightingScore=_pleasantLightingScore;
@property (readonly, nonatomic) float pleasantPatternScore; // @synthesize pleasantPatternScore=_pleasantPatternScore;
@property (readonly, nonatomic) float pleasantPerspectiveScore; // @synthesize pleasantPerspectiveScore=_pleasantPerspectiveScore;
@property (readonly, nonatomic) float pleasantPostProcessingScore; // @synthesize pleasantPostProcessingScore=_pleasantPostProcessingScore;
@property (readonly, nonatomic) float pleasantReflectionsScore; // @synthesize pleasantReflectionsScore=_pleasantReflectionsScore;
@property (readonly, nonatomic) float pleasantSymmetryScore; // @synthesize pleasantSymmetryScore=_pleasantSymmetryScore;
@property (readonly, nonatomic) float sharplyFocusedSubjectScore; // @synthesize sharplyFocusedSubjectScore=_sharplyFocusedSubjectScore;
@property (readonly, nonatomic) float tastefullyBlurredScore; // @synthesize tastefullyBlurredScore=_tastefullyBlurredScore;
@property (readonly, nonatomic) float wellChosenBackgroundScore; // @synthesize wellChosenBackgroundScore=_wellChosenBackgroundScore;
@property (readonly, nonatomic) float wellChosenSubjectScore;
@property (readonly, nonatomic) float wellFramedSubjectScore; // @synthesize wellFramedSubjectScore=_wellFramedSubjectScore;
@property (readonly, nonatomic) float wellTimedShotScore; // @synthesize wellTimedShotScore=_wellTimedShotScore;

+ (id)allScorePropertyNames;
+ (BOOL)supportsSecureCoding;
- (id)_scoresDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 overallAestheticScore:(float)arg2 wellFramedSubjectScore:(float)arg3 wellChosenBackgroundScore:(float)arg4 tastefullyBlurredScore:(float)arg5 sharplyFocusedSubjectScore:(float)arg6 wellTimedShotScore:(float)arg7 pleasantLightingScore:(float)arg8 pleasantReflectionsScore:(float)arg9 harmoniousColorScore:(float)arg10 livelyColorScore:(float)arg11 pleasantSymmetryScore:(float)arg12 pleasantPatternScore:(float)arg13 immersivenessScore:(float)arg14 pleasantPerspectiveScore:(float)arg15 pleasantPostProcessingScore:(float)arg16 noiseScore:(float)arg17 failureScore:(float)arg18 pleasantCompositionScore:(float)arg19 interestingSubjectScore:(float)arg20 intrusiveObjectPresenceScore:(float)arg21 pleasantCameraTiltScore:(float)arg22 lowKeyLightingScore:(float)arg23;

@end
