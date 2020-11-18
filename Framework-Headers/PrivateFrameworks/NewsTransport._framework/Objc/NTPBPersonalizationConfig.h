//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBBinningConfig, NTPBPersonalizationTreatment;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying>
{
    long long _moduloForHashing;
    NTPBBinningConfig *_binningConfig;
    NTPBPersonalizationTreatment *_defaultPersonalizationTreatment;
    NSMutableArray *_personalizationBuckets;
    NSMutableArray *_personalizationTreatments;
    struct {
        unsigned int moduloForHashing:1;
    } _has;
}

@property (strong, nonatomic) NTPBBinningConfig *binningConfig; // @synthesize binningConfig=_binningConfig;
@property (strong, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment; // @synthesize defaultPersonalizationTreatment=_defaultPersonalizationTreatment;
@property (readonly, nonatomic) BOOL hasBinningConfig;
@property (readonly, nonatomic) BOOL hasDefaultPersonalizationTreatment;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) long long moduloForHashing; // @synthesize moduloForHashing=_moduloForHashing;
@property (strong, nonatomic) NSMutableArray *personalizationBuckets; // @synthesize personalizationBuckets=_personalizationBuckets;
@property (strong, nonatomic) NSMutableArray *personalizationTreatments; // @synthesize personalizationTreatments=_personalizationTreatments;

+ (Class)personalizationBucketsType;
+ (Class)personalizationTreatmentsType;
- (void).cxx_destruct;
- (void)addPersonalizationBuckets:(id)arg1;
- (void)addPersonalizationTreatments:(id)arg1;
- (void)clearPersonalizationBuckets;
- (void)clearPersonalizationTreatments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personalizationBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationBucketsCount;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationTreatmentsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
