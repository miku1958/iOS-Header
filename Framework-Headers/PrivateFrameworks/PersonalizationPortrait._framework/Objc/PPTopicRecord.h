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

@class NSSet, NSString, PPSource, PPTopic, PPTopicMetadata;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>
{
    PPTopic *_topic;
    PPSource *_source;
    unsigned long long _algorithm;
    double _initialScore;
    double _decayRate;
    BOOL _isLocal;
    NSString *_extractionOsBuild;
    unsigned int _extractionAssetVersion;
    PPTopicMetadata *_metadata;
    BOOL _bucketizedSentimentScore;
}

@property (readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property (readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property (readonly, nonatomic) unsigned int extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property (readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property (readonly, nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property (readonly, nonatomic) PPTopicMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property (readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property (readonly, nonatomic) PPTopic *topic; // @synthesize topic=_topic;

+ (id)algorithmForName:(id)arg1;
+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTopicRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

