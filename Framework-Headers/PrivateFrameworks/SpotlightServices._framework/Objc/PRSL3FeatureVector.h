//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>
#import <SpotlightServices/PRSFeatureVector-Protocol.h>

@class NSString;

@interface PRSL3FeatureVector : NSObject <NSSecureCoding, NSCopying, PRSFeatureVector>
{
    double floating_point_features[7];
    double *expanded_floating_point_features;
    double *server_features;
    NSString *bundle_id;
}

@property (strong, nonatomic) NSString *bundle_id; // @synthesize bundle_id;

+ (void)addSizeOfEncodedFeatures:(unsigned long long)arg1;
+ (BOOL)doesFeatureExist:(id)arg1;
+ (unsigned long long)getSizeOfFeatureVector;
+ (void)initialize;
+ (void)reArrangeOrderedSetBySet:(id)arg1 withInflation:(unsigned long long)arg2 andInflatedMap:(id)arg3;
+ (void)setServerFeatureSize:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getExpandedFeatureVectorAsArray;
- (id)getExpandedFeaturesAsDictionary;
- (id)getFeaturesAsDictionary;
- (double)getServerFeatureAtIndex:(unsigned long long)arg1;
- (double)getValueAtIndex:(unsigned long long)arg1;
- (double)getValueForFeature:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)resetFeatureValues;
- (void)setExpandedSet:(double *)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setValue:(id)arg1 forFeature:(id)arg2;
- (void)setValue:(id)arg1 forFeatureEnum:(unsigned long long)arg2;

@end

