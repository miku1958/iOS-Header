//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying>
{
    NSMutableArray *_addons;
    int _confidence;
    int _expertType;
    NSMutableArray *_instances;
    int _modelType;
    int _sampleCounts;
    struct {
        unsigned int confidence:1;
        unsigned int expertType:1;
        unsigned int modelType:1;
        unsigned int sampleCounts:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *addons; // @synthesize addons=_addons;
@property (nonatomic) int confidence; // @synthesize confidence=_confidence;
@property (nonatomic) int expertType; // @synthesize expertType=_expertType;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasExpertType;
@property (nonatomic) BOOL hasModelType;
@property (nonatomic) BOOL hasSampleCounts;
@property (strong, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property (nonatomic) int modelType; // @synthesize modelType=_modelType;
@property (nonatomic) int sampleCounts; // @synthesize sampleCounts=_sampleCounts;

+ (Class)addonsType;
+ (Class)instancesType;
- (void)addAddons:(id)arg1;
- (void)addInstances:(id)arg1;
- (id)addonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addonsCount;
- (void)clearAddons;
- (void)clearInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
