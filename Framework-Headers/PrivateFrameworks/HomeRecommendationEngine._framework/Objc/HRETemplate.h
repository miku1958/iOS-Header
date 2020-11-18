//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol HFIconDescriptor;

@interface HRETemplate : NSObject
{
    NSMutableDictionary *_config;
}

@property (strong, nonatomic) NSMutableDictionary *config; // @synthesize config=_config;
@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) NSSet *optionalTypes;
@property (readonly, nonatomic) NSDictionary *rankingConfig;
@property (readonly, nonatomic) NSSet *requiredTypeGroups;
@property (readonly, nonatomic) NSSet *requiredTypes;
@property (readonly, nonatomic) NSString *title;

+ (id)characteristicsTypesAllowingFullVarianceInVarianceDictionary:(id)arg1;
+ (BOOL)representableAccessoryObject:(id)arg1 containsObject:(id)arg2;
+ (id)representableObjectToUseForVerboseString:(id)arg1 actionableObjects:(id)arg2;
+ (id)representableObjectsFromHomeObjects:(id)arg1 context:(id)arg2;
+ (BOOL)shouldUseVerboseStringWithObjectsInContext:(id)arg1 actionableObjectsInActions:(id)arg2 actionableObjectsInEvents:(id)arg3;
+ (id)staticTemplates;
+ (BOOL)targetValue:(id)arg1 withinAllowedVariance:(id)arg2;
+ (id)typesForObjectsInContext:(id)arg1 intersectingWithObjects:(id)arg2;
- (void).cxx_destruct;
- (id)iconDescriptorForHomeObjects:(id)arg1 forRecommendation:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)involvedTypes;
- (id)naturalLanguageTitleForObjectsInContext:(id)arg1 forRecommendation:(id)arg2 options:(id)arg3;
- (id)naturalLanguageTitleForRecommendation:(id)arg1 options:(id)arg2;
- (id)processedActionMap;
- (id)recommendationSplitStrategy;
- (id)triggerCharacteristicTypes;
- (id)triggerType;

@end
