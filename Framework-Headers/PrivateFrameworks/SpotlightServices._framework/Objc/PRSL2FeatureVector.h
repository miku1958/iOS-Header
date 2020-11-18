//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PRSL2FeatureVector : NSObject <NSSecureCoding, NSCopying>
{
    float _features[1144];
    float *_expanded_floating_point_features;
    unsigned long long _expanded_floating_point_features_count;
    float _originalL2Score;
    float _experimentalScore;
    NSString *_bundleID;
    NSString *_device_type;
    NSDictionary *_searchThroughCEPData;
    struct ranking_index_score_t _indexScore;
}

@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
@property (nonatomic) float experimentalScore; // @synthesize experimentalScore=_experimentalScore;
@property (nonatomic) struct ranking_index_score_t indexScore; // @synthesize indexScore=_indexScore;
@property (nonatomic) float originalL2Score; // @synthesize originalL2Score=_originalL2Score;
@property (strong, nonatomic) NSDictionary *searchThroughCEPData; // @synthesize searchThroughCEPData=_searchThroughCEPData;

+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (unsigned long long)featureForName:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithoutDefaultValues:(BOOL)arg1;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedArrayRepresentation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setExpandedSet:(float *)arg1 expandedCount:(unsigned long long)arg2;
- (void)setFeatureName:(id)arg1 value:(float)arg2;
- (void)setFloat:(float)arg1 forFeature:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forFeature:(unsigned long long)arg2;
- (float)valueForFeature:(unsigned long long)arg1;
- (float)valueForFeatureName:(id)arg1;

@end

