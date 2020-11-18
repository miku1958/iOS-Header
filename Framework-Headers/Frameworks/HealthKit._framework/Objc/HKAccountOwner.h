//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    HKMedicalDate *_birthDate;
    NSString *_name;
}

@property (readonly, nonatomic) HKAccountOwnerType *accountOwnerType;
@property (readonly, copy, nonatomic) HKMedicalDate *birthDate; // @synthesize birthDate=_birthDate;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (BOOL)_isConcreteObjectClass;
+ (id)accountOwnerWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 name:(id)arg8 birthDate:(id)arg9;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)_setBirthDate:(id)arg1;
- (void)_setName:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;

@end
