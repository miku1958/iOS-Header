//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentLocation : EKPersistentObject
{
}

+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (id)address;
- (id)addressBookEntityID;
- (id)alarmOwner;
- (id)calendarItemOwner;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)derivedFrom;
- (id)description;
- (int)entityType;
- (id)latitude;
- (id)longitude;
- (id)mapKitHandle;
- (id)radius;
- (id)referenceFrame;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (void)setAlarmOwner:(id)arg1;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setDerivedFrom:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setRadius:(id)arg1;
- (void)setReferenceFrame:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
