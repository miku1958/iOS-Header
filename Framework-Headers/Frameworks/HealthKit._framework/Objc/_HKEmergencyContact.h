//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSNumber *_nameRecordID;
    NSString *_nameContactIdentifier;
    NSString *_phoneNumber;
    NSNumber *_phoneNumberPropertyID;
    NSString *_phoneNumberContactIdentifier;
    NSString *_phoneNumberLabel;
    NSString *_relationship;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *nameContactIdentifier; // @synthesize nameContactIdentifier=_nameContactIdentifier;
@property (strong, nonatomic) NSNumber *nameRecordID; // @synthesize nameRecordID=_nameRecordID;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier; // @synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property (strong, nonatomic) NSNumber *phoneNumberPropertyID; // @synthesize phoneNumberPropertyID=_phoneNumberPropertyID;
@property (copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;

+ (id)emergencyContactUsingSimCardNumberWithContact:(id)arg1 property:(id)arg2;
+ (id)emergencyContactWithContact:(id)arg1 property:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSyncedContact:(id)arg1;

@end

