//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface _CDContextualChangeRegistrationMO : NSManagedObject
{
}

@property (strong, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (strong, nonatomic) NSString *identifier; // @dynamic identifier;
@property (nonatomic) BOOL isActive; // @dynamic isActive;
@property (nonatomic) BOOL isMultiDeviceRegistration; // @dynamic isMultiDeviceRegistration;
@property (strong, nonatomic) NSData *properties; // @dynamic properties;

+ (void)hydrateMO:(id)arg1 fromRegistration:(id)arg2;
+ (id)materializedRegistrationFrom:(id)arg1;
+ (id)predicateForActiveRegistrationsInBootSession:(id)arg1;

@end

