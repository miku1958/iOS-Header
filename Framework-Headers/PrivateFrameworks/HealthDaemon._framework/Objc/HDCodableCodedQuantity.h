//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCoding, NSString;

@interface HDCodableCodedQuantity : PBCodable <NSCopying>
{
    HDCodableMedicalCoding *_comparatorCoding;
    NSString *_rawValue;
    HDCodableMedicalCoding *_unitCoding;
}

@property (strong, nonatomic) HDCodableMedicalCoding *comparatorCoding; // @synthesize comparatorCoding=_comparatorCoding;
@property (readonly, nonatomic) BOOL hasComparatorCoding;
@property (readonly, nonatomic) BOOL hasRawValue;
@property (readonly, nonatomic) BOOL hasUnitCoding;
@property (strong, nonatomic) NSString *rawValue; // @synthesize rawValue=_rawValue;
@property (strong, nonatomic) HDCodableMedicalCoding *unitCoding; // @synthesize unitCoding=_unitCoding;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

