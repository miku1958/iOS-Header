//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSArray, NSData, NSDate, NSNumber, NSString;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isDisabled;
    NSData *_pictureData;
    NSString *_name;
    NSDate *_birthdate;
    HKQuantity *_height;
    HKQuantity *_weight;
    long long _bloodType;
    NSNumber *_isOrganDonor;
    NSArray *_emergencyContacts;
    NSString *_medicalConditions;
    NSString *_medicalNotes;
    NSString *_allergyInfo;
    NSString *_medicationInfo;
    NSDate *_dateSaved;
    long long _schemaVersion;
}

@property (strong, nonatomic) NSString *allergyInfo; // @synthesize allergyInfo=_allergyInfo;
@property (strong, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property (nonatomic) long long bloodType; // @synthesize bloodType=_bloodType;
@property (strong, nonatomic) NSDate *dateSaved; // @synthesize dateSaved=_dateSaved;
@property (strong, nonatomic) NSArray *emergencyContacts; // @synthesize emergencyContacts=_emergencyContacts;
@property (strong, nonatomic) HKQuantity *height; // @synthesize height=_height;
@property (nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property (strong, nonatomic) NSNumber *isOrganDonor; // @synthesize isOrganDonor=_isOrganDonor;
@property (strong, nonatomic) NSString *medicalConditions; // @synthesize medicalConditions=_medicalConditions;
@property (strong, nonatomic) NSString *medicalNotes; // @synthesize medicalNotes=_medicalNotes;
@property (strong, nonatomic) NSString *medicationInfo; // @synthesize medicationInfo=_medicationInfo;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSData *pictureData; // @synthesize pictureData=_pictureData;
@property (nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property (strong, nonatomic) HKQuantity *weight; // @synthesize weight=_weight;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAnyData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)recordFieldPresenceStatistics;

@end
