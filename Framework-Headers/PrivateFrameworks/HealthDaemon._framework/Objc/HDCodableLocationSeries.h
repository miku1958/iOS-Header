//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSData, NSMutableArray, NSString;

@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying>
{
    NSData *_continuationUUID;
    NSMutableArray *_locationDatas;
    HDCodableSample *_sample;
    BOOL _final;
    BOOL _frozen;
    struct {
        unsigned int final:1;
        unsigned int frozen:1;
    } _has;
}

@property (strong, nonatomic) NSData *continuationUUID; // @synthesize continuationUUID=_continuationUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL final; // @synthesize final=_final;
@property (nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
@property (readonly, nonatomic) BOOL hasContinuationUUID;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL hasFrozen;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *locationDatas; // @synthesize locationDatas=_locationDatas;
@property (strong, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property (readonly) Class superclass;

+ (Class)locationDataType;
- (void).cxx_destruct;
- (void)addLocationData:(id)arg1;
- (BOOL)applyToObject:(id)arg1;
- (void)clearLocationDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (id)locationDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationDatasCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

