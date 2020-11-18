//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalDate, NSMutableArray;

@interface HDCodableAllergyReaction : PBCodable <NSCopying>
{
    NSMutableArray *_manifestationCodings;
    HDCodableMedicalDate *_onsetDate;
    HDCodableMedicalCoding *_severityCoding;
}

@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (readonly, nonatomic) BOOL hasSeverityCoding;
@property (strong, nonatomic) NSMutableArray *manifestationCodings; // @synthesize manifestationCodings=_manifestationCodings;
@property (strong, nonatomic) HDCodableMedicalDate *onsetDate; // @synthesize onsetDate=_onsetDate;
@property (strong, nonatomic) HDCodableMedicalCoding *severityCoding; // @synthesize severityCoding=_severityCoding;

+ (Class)manifestationCodingsType;
- (void).cxx_destruct;
- (void)addManifestationCodings:(id)arg1;
- (void)clearManifestationCodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifestationCodingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestationCodingsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
