//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMTextLayoutManager, FKTextDetector;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    FKTextDetector *_textDetector;
    AXMTextLayoutManager *_textLayoutManager;
    BOOL _detectDiacritics;
    BOOL _returnSubFeatures;
    BOOL _minimizeFalsePositives;
    unsigned long long _detectionFlavor;
    double _minimumCharacterHeight;
}

@property (nonatomic) BOOL detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property (nonatomic) unsigned long long detectionFlavor; // @synthesize detectionFlavor=_detectionFlavor;
@property (nonatomic) BOOL minimizeFalsePositives; // @synthesize minimizeFalsePositives=_minimizeFalsePositives;
@property (nonatomic) double minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
@property (nonatomic) BOOL returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;

+ (BOOL)isSupported;
+ (id)supportedDetectionLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)title;
- (void).cxx_destruct;
- (void)_evaluateWithFutharkFlavor:(id)arg1;
- (void)_evaluateWithVisionFlavor:(id)arg1;
- (id)_visionTextDetectionOptionForLangauge:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)freeResources;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)shouldEvaluate:(id)arg1;

@end

