//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface TDDeviceTraits : NSObject <NSCopying>
{
    double _scale;
    long long _idiomValue;
    NSArray *_hostedIdiomValues;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamutValue;
    long long _deploymentTargetValue;
    long long _memoryPerformanceClass;
    long long _graphicsPerformanceClass;
    long long _graphicsFeatureSetClassValue;
    NSArray *_graphicsFeatureSetFallbackValues;
    NSArray *_subtypeFallbackValues;
    long long _dynamicDisplayModeValue;
}

@property (strong, nonatomic) NSString *deploymentTarget;
@property (nonatomic) long long deploymentTargetValue; // @synthesize deploymentTargetValue=_deploymentTargetValue;
@property (strong, nonatomic) NSString *displayGamut;
@property (nonatomic) long long displayGamutValue; // @synthesize displayGamutValue=_displayGamutValue;
@property (strong, nonatomic) NSString *dynamicDisplayMode;
@property (nonatomic) long long dynamicDisplayModeValue; // @synthesize dynamicDisplayModeValue=_dynamicDisplayModeValue;
@property (strong, nonatomic) NSString *graphicsFeatureSetClass;
@property (nonatomic) long long graphicsFeatureSetClassValue; // @synthesize graphicsFeatureSetClassValue=_graphicsFeatureSetClassValue;
@property (copy, nonatomic) NSArray *graphicsFeatureSetFallbackValues; // @synthesize graphicsFeatureSetFallbackValues=_graphicsFeatureSetFallbackValues;
@property (strong, nonatomic) NSArray *graphicsFeatureSetFallbacks;
@property (nonatomic) long long graphicsPerformanceClass; // @synthesize graphicsPerformanceClass=_graphicsPerformanceClass;
@property (copy, nonatomic) NSArray *hostedIdiomValues; // @synthesize hostedIdiomValues=_hostedIdiomValues;
@property (strong, nonatomic) NSArray *hostedIdioms;
@property (strong, nonatomic) NSString *idiom;
@property (nonatomic) long long idiomValue; // @synthesize idiomValue=_idiomValue;
@property (nonatomic) long long memoryPerformanceClass; // @synthesize memoryPerformanceClass=_memoryPerformanceClass;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property (strong, nonatomic) NSArray *subtypeFallbackValues; // @synthesize subtypeFallbackValues=_subtypeFallbackValues;

- (long long)_deploymentTargetFromTraitString:(id)arg1;
- (id)_deploymentTargetToTraitString:(long long)arg1;
- (long long)_displayGamutFromTraitString:(id)arg1;
- (id)_displayGamutToTraitString:(long long)arg1;
- (long long)_dynamicDisplayModeFromTraitString:(id)arg1;
- (id)_dynamicDisplayModeToTraitString:(long long)arg1;
- (long long)_graphicsFeatureSetClassFromTraitString:(id)arg1;
- (id)_graphicsFeatureSetClassToTraitString:(long long)arg1;
- (long long)_idiomFromTraitString:(id)arg1;
- (id)_idiomToTraitString:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end
