//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKBiologicalSexObject, HKBloodTypeObject, HKFitzpatrickSkinTypeObject, HKQuantity, HKWheelchairUseObject, NSArray, NSDateComponents, NSString;

@interface HKDemographicsInformationWrapper : NSObject
{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    HKBiologicalSexObject *_biologicalSexObject;
    HKQuantity *_heightQuantity;
    HKQuantity *_weightQuantity;
    HKFitzpatrickSkinTypeObject *_fitzpatrickSkinTypeObject;
    HKBloodTypeObject *_bloodTypeObject;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSArray *_postalAddresses;
    NSArray *_emailAddresses;
}

@property (copy, nonatomic) HKBiologicalSexObject *biologicalSexObject; // @synthesize biologicalSexObject=_biologicalSexObject;
@property (copy, nonatomic) HKBloodTypeObject *bloodTypeObject; // @synthesize bloodTypeObject=_bloodTypeObject;
@property (copy, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property (copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject; // @synthesize fitzpatrickSkinTypeObject=_fitzpatrickSkinTypeObject;
@property (copy, nonatomic) HKQuantity *heightQuantity; // @synthesize heightQuantity=_heightQuantity;
@property (copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property (copy, nonatomic) HKQuantity *weightQuantity; // @synthesize weightQuantity=_weightQuantity;
@property (copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject; // @synthesize wheelchairUseObject=_wheelchairUseObject;

- (void).cxx_destruct;

@end

