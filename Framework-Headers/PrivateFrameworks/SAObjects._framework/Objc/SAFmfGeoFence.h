//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject
{
}

@property (strong, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (strong, nonatomic) SALocation *location;

+ (id)geoFence;
+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
