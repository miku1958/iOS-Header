//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetAestheticProperties : PHAssetPropertySet
{
    float _wellFramedSubjectScore;
    float _wellChosenSubjectScore;
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
    float _lowLight;
}

@property (readonly, nonatomic) float failureScore; // @synthesize failureScore=_failureScore;
@property (readonly, nonatomic) float harmoniousColorScore; // @synthesize harmoniousColorScore=_harmoniousColorScore;
@property (readonly, nonatomic) float immersivenessScore; // @synthesize immersivenessScore=_immersivenessScore;
@property (readonly, nonatomic) float interestingSubjectScore; // @synthesize interestingSubjectScore=_interestingSubjectScore;
@property (readonly, nonatomic) float intrusiveObjectPresenceScore; // @synthesize intrusiveObjectPresenceScore=_intrusiveObjectPresenceScore;
@property (readonly, nonatomic) float livelyColorScore; // @synthesize livelyColorScore=_livelyColorScore;
@property (readonly, nonatomic) float lowLight; // @synthesize lowLight=_lowLight;
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
@property (readonly, nonatomic) float wellChosenSubjectScore; // @synthesize wellChosenSubjectScore=_wellChosenSubjectScore;
@property (readonly, nonatomic) float wellFramedSubjectScore; // @synthesize wellFramedSubjectScore=_wellFramedSubjectScore;
@property (readonly, nonatomic) float wellTimedShotScore; // @synthesize wellTimedShotScore=_wellTimedShotScore;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

