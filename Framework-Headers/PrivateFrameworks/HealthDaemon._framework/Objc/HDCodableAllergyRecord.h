//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableAllergyReactionList, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying>
{
    HDCodableMedicalCodingList *_allergyCodings;
    NSString *_asserter;
    HDCodableMedicalCoding *_criticalityCoding;
    NSData *_lastOccurenceDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSData *_onsetDate;
    HDCodableAllergyReactionList *_reactions;
    NSData *_recordedDate;
    HDCodableMedicalCoding *_statusCoding;
}

@property (strong, nonatomic) HDCodableMedicalCodingList *allergyCodings; // @synthesize allergyCodings=_allergyCodings;
@property (strong, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
@property (strong, nonatomic) HDCodableMedicalCoding *criticalityCoding; // @synthesize criticalityCoding=_criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAllergyCodings;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (readonly, nonatomic) BOOL hasCriticalityCoding;
@property (readonly, nonatomic) BOOL hasLastOccurenceDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (readonly, nonatomic) BOOL hasReactions;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *lastOccurenceDate; // @synthesize lastOccurenceDate=_lastOccurenceDate;
@property (strong, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property (strong, nonatomic) NSData *onsetDate; // @synthesize onsetDate=_onsetDate;
@property (strong, nonatomic) HDCodableAllergyReactionList *reactions; // @synthesize reactions=_reactions;
@property (strong, nonatomic) NSData *recordedDate; // @synthesize recordedDate=_recordedDate;
@property (strong, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (BOOL)applyToObject:(id)arg1 error:(out id *)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

