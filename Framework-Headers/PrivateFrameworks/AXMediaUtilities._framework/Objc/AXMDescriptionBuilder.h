//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMVisionFeature, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface AXMDescriptionBuilder : NSObject
{
    long long _builderOptions;
    NSMutableString *_speakableDescription;
    NSMutableString *_visualDescription;
    NSMutableArray *_faceFeatures;
    NSMutableDictionary *_classificationLabelsToLocValuesMap;
    NSMutableArray *_iconClassFeatures;
    AXMVisionFeature *_captionFeature;
    BOOL _isNSFW;
    BOOL _shouldModifyCaptionForSensitiveContent;
    AXMVisionFeature *_blurFeature;
    AXMVisionFeature *_brightnessFeature;
    AXMVisionFeature *_primarySensitiveContentFeature;
}

@property (strong, nonatomic) AXMVisionFeature *blurFeature; // @synthesize blurFeature=_blurFeature;
@property (strong, nonatomic) AXMVisionFeature *brightnessFeature; // @synthesize brightnessFeature=_brightnessFeature;
@property (nonatomic) BOOL isNSFW; // @synthesize isNSFW=_isNSFW;
@property (strong, nonatomic) AXMVisionFeature *primarySensitiveContentFeature; // @synthesize primarySensitiveContentFeature=_primarySensitiveContentFeature;
@property (nonatomic) BOOL shouldModifyCaptionForSensitiveContent; // @synthesize shouldModifyCaptionForSensitiveContent=_shouldModifyCaptionForSensitiveContent;

+ (id)builderWithOptions:(long long)arg1;
- (void).cxx_destruct;
- (void)_addBlurInformationToDescription:(id)arg1;
- (void)_addBrightnessInformationToDescription:(id)arg1;
- (void)_addCaptionInformationToDescription:(id)arg1;
- (void)_addClassificationInformationToDescription:(id)arg1;
- (void)_addDetailedFaceInformationToDescription:(id)arg1;
- (void)_addFaceInformationToDescription:(id)arg1;
- (void)_addGenericTemplateForCaptionInformationToDescription:(id)arg1;
- (void)_addIconClassInformationToDescription:(id)arg1;
- (void)_addPersonSummaryToDescription:(id)arg1;
- (void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2;
- (void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3;
- (id)_ignoredTagsForTags:(id)arg1;
- (id)_initWithOptions:(long long)arg1;
- (BOOL)_shouldReplaceCaptionWithGenericTemplate;
- (BOOL)_shouldSummarizeDetectedPeople;
- (id)_stringForPauseType:(long long)arg1;
- (id)_subsumedTagsForTags:(id)arg1;
- (id)_templateRulesForTag:(id)arg1;
- (BOOL)_usesTemplateForLowConfidenceAndExplicitFeatures;
- (void)addDetectedClassificationFeatures:(id)arg1;
- (void)addDetectedClassificationLocalizedValue:(id)arg1 forLabel:(id)arg2;
- (void)addDetectedFaces:(id)arg1;
- (void)addDetectedIconClasses:(id)arg1;
- (id)buildSpeakableDescription;
- (id)buildVisualDescription;
- (void)setDetectedCaption:(id)arg1;

@end
