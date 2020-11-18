//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, HKMedicalDate, HKMedicationRecordType, NSArray, NSString;

@interface HKMedicationRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_medicationCodings;
    long long _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodings;
    BOOL _notTaken;
    NSArray *_reasonsNotTakenCodings;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
}

@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly) BOOL notTaken;
@property (readonly, copy) NSArray *reasonForUseCodings;
@property (readonly, copy) NSArray *reasonsNotTakenCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 assertionType:(long long)arg10 asserter:(id)arg11 assertionDate:(id)arg12 statusCoding:(id)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 reasonForUseCodings:(id)arg16 notTaken:(BOOL)arg17 reasonsNotTakenCodings:(id)arg18 effectiveStartDate:(id)arg19 effectiveEndDate:(id)arg20;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 assertionType:(long long)arg11 asserter:(id)arg12 assertionDate:(id)arg13 statusCoding:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 reasonForUseCodings:(id)arg17 notTaken:(BOOL)arg18 reasonsNotTakenCodings:(id)arg19 effectiveStartDate:(id)arg20 effectiveEndDate:(id)arg21;
+ (id)reasonForUseCodingsPreferredSystems;
+ (id)reasonsNotTakenCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setAsserter:(id)arg1;
- (void)_setAssertionDate:(id)arg1;
- (void)_setAssertionType:(long long)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setNotTaken:(BOOL)arg1;
- (void)_setReasonForUseCodings:(id)arg1;
- (void)_setReasonsNotTakenCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)medicationCodingsTasks;
- (id)reasonForUseCodingsTasks;
- (id)reasonsNotTakenCodingsTasks;
- (id)statusCodingTasks;

@end

