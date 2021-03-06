//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationOrder : PBCodable <HDDecoding, NSCopying>
{
    long long _numberOfFills;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_endedDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    NSString *_prescriber;
    HDCodableMedicalCodingList *_reasonCodings;
    HDCodableMedicalCodingList *_reasonEndedCodings;
    HDCodableMedicalCoding *_statusCoding;
    NSData *_writtenDate;
    struct {
        unsigned int numberOfFills:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HDCodableMedicationDosageList *dosages; // @synthesize dosages=_dosages;
@property (strong, nonatomic) NSData *earliestDosageDate; // @synthesize earliestDosageDate=_earliestDosageDate;
@property (strong, nonatomic) NSData *endedDate; // @synthesize endedDate=_endedDate;
@property (readonly, nonatomic) BOOL hasDosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (readonly, nonatomic) BOOL hasEndedDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodings;
@property (nonatomic) BOOL hasNumberOfFills;
@property (readonly, nonatomic) BOOL hasPrescriber;
@property (readonly, nonatomic) BOOL hasReasonCodings;
@property (readonly, nonatomic) BOOL hasReasonEndedCodings;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasWrittenDate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property (strong, nonatomic) HDCodableMedicalCodingList *medicationCodings; // @synthesize medicationCodings=_medicationCodings;
@property (nonatomic) long long numberOfFills; // @synthesize numberOfFills=_numberOfFills;
@property (strong, nonatomic) NSString *prescriber; // @synthesize prescriber=_prescriber;
@property (strong, nonatomic) HDCodableMedicalCodingList *reasonCodings; // @synthesize reasonCodings=_reasonCodings;
@property (strong, nonatomic) HDCodableMedicalCodingList *reasonEndedCodings; // @synthesize reasonEndedCodings=_reasonEndedCodings;
@property (strong, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *writtenDate; // @synthesize writtenDate=_writtenDate;

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

