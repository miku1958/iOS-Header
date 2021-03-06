//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class FCPersonalizationFeature;

@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_targetSectionFeature;
    double _targetSectionFeatureClickPrior;
    double _targetSectionFeatureImpressionPrior;
    FCPersonalizationFeature *_competingSectionFeature;
    double _competingSectionFeatureClickPrior;
    double _competingSectionFeatureImpressionPrior;
    double _scalar;
}

@property (copy, nonatomic) FCPersonalizationFeature *competingSectionFeature; // @synthesize competingSectionFeature=_competingSectionFeature;
@property (nonatomic) double competingSectionFeatureClickPrior; // @synthesize competingSectionFeatureClickPrior=_competingSectionFeatureClickPrior;
@property (nonatomic) double competingSectionFeatureImpressionPrior; // @synthesize competingSectionFeatureImpressionPrior=_competingSectionFeatureImpressionPrior;
@property (nonatomic) double scalar; // @synthesize scalar=_scalar;
@property (copy, nonatomic) FCPersonalizationFeature *targetSectionFeature; // @synthesize targetSectionFeature=_targetSectionFeature;
@property (nonatomic) double targetSectionFeatureClickPrior; // @synthesize targetSectionFeatureClickPrior=_targetSectionFeatureClickPrior;
@property (nonatomic) double targetSectionFeatureImpressionPrior; // @synthesize targetSectionFeatureImpressionPrior=_targetSectionFeatureImpressionPrior;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

