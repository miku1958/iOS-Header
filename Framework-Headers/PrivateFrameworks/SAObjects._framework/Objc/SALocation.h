//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, SADistance;

@interface SALocation : SADomainObject <SAAceComparable>
{
}

@property (copy, nonatomic) NSNumber *accuracy;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entryPoints;
@property (copy, nonatomic) NSData *forwardGeoData;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *regionType;
@property (strong, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSNumber *travelDistance;
@property (copy, nonatomic) NSNumber *travelTime;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

