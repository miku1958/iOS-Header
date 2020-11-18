//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOMapItemClientAttributes, GEOPlace, NSDate, NSDictionary, NSString;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem
{
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    CDStruct_2c43369c _coordinate;
    GEOAddressObject *_addressObject;
}

- (void).cxx_destruct;
- (id)_clientAttributes;
- (BOOL)_hasResolvablePartialInformation;
- (id)_place;
- (BOOL)_responseStatusIsIncomplete;
- (id)addressDictionary;
- (id)addressObject;
- (CDStruct_c3b9c2ee)coordinate;
- (id)description;
- (id)eventDate;
- (id)eventName;
- (id)geoAddress;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;
- (BOOL)isEventAllDay;
- (BOOL)isValid;
- (id)name;
- (id)weatherDisplayName;

@end

