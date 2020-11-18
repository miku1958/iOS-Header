//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FKTextDetector : NSObject
{
    struct FKSession *_sessions[8];
    struct CGSize _size;
    struct CGRect _roi;
    unsigned int _timeDownscale[8];
    unsigned int _timeBinarizer[8];
    unsigned int _timeConcomps[8];
    unsigned int _timeSequences[8];
    unsigned int _timeRecognizer[8];
    BOOL _detectDiacritics;
    BOOL _returnSubFeatures;
    BOOL _minimizeFalseDetections;
    BOOL _createFeaturesForAllConcomps;
    BOOL _enableBinarizerFiltering;
    int _minimumCharacterHeight;
    int _binarizerLimit;
    long long _thresholdingAlgorithm;
    NSString *_recognitionLanguage;
    CDStruct_74dcf1ab _mergeSettings;
}

@property (nonatomic) int binarizerLimit; // @synthesize binarizerLimit=_binarizerLimit;
@property (nonatomic) BOOL createFeaturesForAllConcomps; // @synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps;
@property (nonatomic) BOOL detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property (nonatomic) BOOL enableBinarizerFiltering; // @synthesize enableBinarizerFiltering=_enableBinarizerFiltering;
@property (nonatomic) CDStruct_74dcf1ab mergeSettings; // @synthesize mergeSettings=_mergeSettings;
@property (nonatomic) BOOL minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property (nonatomic) int minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
@property (copy, nonatomic) NSString *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
@property (nonatomic) BOOL returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;
@property (nonatomic) long long thresholdingAlgorithm; // @synthesize thresholdingAlgorithm=_thresholdingAlgorithm;

- (id)createFeaturesForROI:(struct CGRect)arg1 originalSize:(struct CGSize)arg2 lastID:(long long *)arg3;
- (id)createFeaturesForSessionScale:(int)arg1 roi:(struct CGRect)arg2 originalSize:(struct CGSize)arg3 startID:(long long *)arg4;
- (void)dealloc;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 withRegionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (id)initWithDimensions:(struct CGSize)arg1;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (void)mergeFeature:(id)arg1 withArray:(id)arg2;
- (void)resetOptions;
- (void)resetTimers;
- (void)runRecognizerOnFeatures:(id)arg1 roi:(struct CGRect)arg2 size:(struct CGSize)arg3 lastID:(long long *)arg4;
- (void)translatePropertiesToOptionsWithNumSessions:(int)arg1;

@end

