//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSMutableCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>
#import <PersonalizationPortrait/PPRecord-Protocol.h>

@class NSArray, NSSet, NSString, NSUUID, PPLocation, PPSource;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>
{
    NSUUID *_uuid;
    PPLocation *_location;
    PPSource *_source;
    unsigned char _algorithm;
    float _initialScore;
    float _decayRate;
    NSArray *_contextualNamedEntities;
    NSString *_extractionOsBuild;
    unsigned int _extractionAssetVersion;
    BOOL _bucketizedSentimentScore;
    BOOL _isAmbiguous;
}

@property (readonly, nonatomic) unsigned short algorithm;
@property (readonly, nonatomic) NSArray *contextualNamedEntities; // @synthesize contextualNamedEntities=_contextualNamedEntities;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) BOOL isAmbiguous; // @synthesize isAmbiguous=_isAmbiguous;
@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) NSUUID *uuid;

+ (id)algorithmForName:(id)arg1;
+ (id)describeAlgorithm:(unsigned short)arg1;
+ (id)sharedAmbiguousRecord;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initAmbiguousRecord;
- (id)initWithCoder:(id)arg1;
- (id)init_;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocationRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)supplementFieldsWithClusterID:(id)arg1 locationWithLatLong:(id)arg2;

@end
