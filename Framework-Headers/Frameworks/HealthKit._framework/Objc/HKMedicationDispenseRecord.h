//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKCodedQuantity, HKMedicalCoding, HKMedicalDate, HKMedicationDispenseRecordType, NSArray;

@interface HKMedicationDispenseRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    HKCodedQuantity *_daysSupplyQuantity;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_handOverDate;
    NSArray *_medicationCodings;
    HKMedicalDate *_preparationDate;
    HKCodedQuantity *_quantityDispensed;
    HKMedicalCoding *_statusCoding;
}

@property (readonly, copy, nonatomic) HKCodedQuantity *daysSupplyQuantity; // @synthesize daysSupplyQuantity=_daysSupplyQuantity;
@property (readonly, copy, nonatomic) NSArray *dosages; // @synthesize dosages=_dosages;
@property (readonly, copy, nonatomic) HKMedicalDate *earliestDosageDate; // @synthesize earliestDosageDate=_earliestDosageDate;
@property (readonly, copy, nonatomic) HKMedicalDate *handOverDate; // @synthesize handOverDate=_handOverDate;
@property (readonly, copy, nonatomic) NSArray *medicationCodings; // @synthesize medicationCodings=_medicationCodings;
@property (readonly, nonatomic) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (readonly, copy, nonatomic) HKMedicalDate *preparationDate; // @synthesize preparationDate=_preparationDate;
@property (readonly, copy, nonatomic) HKCodedQuantity *quantityDispensed; // @synthesize quantityDispensed=_quantityDispensed;
@property (readonly, copy, nonatomic) HKMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationDispenseRecordWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 medicationCodings:(id)arg8 quantityDispensed:(id)arg9 preparationDate:(id)arg10 handOverDate:(id)arg11 dosages:(id)arg12 earliestDosageDate:(id)arg13 statusCoding:(id)arg14 daysSupplyQuantity:(id)arg15;
+ (id)statusCodingPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)_setDaysSupplyQuantity:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setHandOverDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setPreparationDate:(id)arg1;
- (void)_setQuantityDispensed:(id)arg1;
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
- (id)statusCodingTasks;

@end
