//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableInspectableValue, HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableCodedValue : PBCodable <NSCopying>
{
    HDCodableMedicalCodingList *_codings;
    NSMutableArray *_referenceRanges;
    HDCodableInspectableValue *_value;
}

@property (strong, nonatomic) HDCodableMedicalCodingList *codings; // @synthesize codings=_codings;
@property (readonly, nonatomic) BOOL hasCodings;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSMutableArray *referenceRanges; // @synthesize referenceRanges=_referenceRanges;
@property (strong, nonatomic) HDCodableInspectableValue *value; // @synthesize value=_value;

+ (Class)referenceRangesType;
- (void).cxx_destruct;
- (void)addReferenceRanges:(id)arg1;
- (void)clearReferenceRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)referenceRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)referenceRangesCount;
- (void)writeTo:(id)arg1;

@end

