//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable <NSCopying>
{
    long long _populationCeiling;
    long long _populationFloor;
    NSMutableArray *_configBuckets;
    NTPBConfig *_configControl;
    struct {
        unsigned int populationCeiling:1;
        unsigned int populationFloor:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *configBuckets; // @synthesize configBuckets=_configBuckets;
@property (strong, nonatomic) NTPBConfig *configControl; // @synthesize configControl=_configControl;
@property (readonly, nonatomic) BOOL hasConfigControl;
@property (nonatomic) BOOL hasPopulationCeiling;
@property (nonatomic) BOOL hasPopulationFloor;
@property (nonatomic) long long populationCeiling; // @synthesize populationCeiling=_populationCeiling;
@property (nonatomic) long long populationFloor; // @synthesize populationFloor=_populationFloor;

+ (Class)configBucketsType;
- (void).cxx_destruct;
- (void)addConfigBuckets:(id)arg1;
- (void)clearConfigBuckets;
- (id)configBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)configBucketsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

