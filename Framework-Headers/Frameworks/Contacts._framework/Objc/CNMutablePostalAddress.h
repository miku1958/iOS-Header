//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress
{
}

@property (copy, nonatomic) NSString *ISOCountryCode; // @dynamic ISOCountryCode;
@property (copy, nonatomic) NSString *city; // @dynamic city;
@property (copy, nonatomic) NSString *country; // @dynamic country;
@property (copy, nonatomic) NSString *formattedAddress; // @dynamic formattedAddress;
@property (copy, nonatomic) NSString *postalCode; // @dynamic postalCode;
@property (copy, nonatomic) NSString *state; // @dynamic state;
@property (copy, nonatomic) NSString *street; // @dynamic street;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;

@end
