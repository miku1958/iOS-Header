//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying>
{
    long long _count;
    double _max;
    double _min;
    double _mostRecent;
    double _mostRecentDate;
    double _mostRecentDuration;
    double _valueInCanonicalUnit;
    double _valueInOriginalUnit;
    NSString *_originalUnitString;
    NSMutableArray *_quantitySeriesDatas;
    HDCodableSample *_sample;
    BOOL _final;
    BOOL _frozen;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int min:1;
        unsigned int mostRecent:1;
        unsigned int mostRecentDate:1;
        unsigned int mostRecentDuration:1;
        unsigned int valueInCanonicalUnit:1;
        unsigned int valueInOriginalUnit:1;
        unsigned int final:1;
        unsigned int frozen:1;
    } _has;
}

@property (nonatomic) long long count; // @synthesize count=_count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL final; // @synthesize final=_final;
@property (nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL hasFrozen;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasMostRecent;
@property (nonatomic) BOOL hasMostRecentDate;
@property (nonatomic) BOOL hasMostRecentDuration;
@property (readonly, nonatomic) BOOL hasOriginalUnitString;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasValueInCanonicalUnit;
@property (nonatomic) BOOL hasValueInOriginalUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic) double max; // @synthesize max=_max;
@property (nonatomic) double min; // @synthesize min=_min;
@property (nonatomic) double mostRecent; // @synthesize mostRecent=_mostRecent;
@property (nonatomic) double mostRecentDate; // @synthesize mostRecentDate=_mostRecentDate;
@property (nonatomic) double mostRecentDuration; // @synthesize mostRecentDuration=_mostRecentDuration;
@property (strong, nonatomic) NSString *originalUnitString; // @synthesize originalUnitString=_originalUnitString;
@property (strong, nonatomic) NSMutableArray *quantitySeriesDatas; // @synthesize quantitySeriesDatas=_quantitySeriesDatas;
@property (strong, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property (readonly) Class superclass;
@property (nonatomic) double valueInCanonicalUnit; // @synthesize valueInCanonicalUnit=_valueInCanonicalUnit;
@property (nonatomic) double valueInOriginalUnit; // @synthesize valueInOriginalUnit=_valueInOriginalUnit;

+ (Class)quantitySeriesDataType;
- (void).cxx_destruct;
- (BOOL)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (void)addQuantitySeriesData:(id)arg1;
- (BOOL)applyToObject:(id)arg1;
- (void)clearQuantitySeriesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSeries;
- (void)mergeFrom:(id)arg1;
- (id)quantitySeriesDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySeriesDatasCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

