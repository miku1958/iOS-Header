//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOLocation, GEOPlace, NSDictionary, NSString, NSURL;

@interface GEOMapItemAssistant : GEOBaseMapItem
{
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (id)_businessURL;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasUserRatingScore;
- (unsigned long long)_muid;
- (float)_normalizedUserRatingScore;
- (id)_place;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)addressDictionary;
- (id)addressObject;
- (CDStruct_c3b9c2ee)coordinate;
- (void)dealloc;
- (id)description;
- (id)geoAddress;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
- (BOOL)isValid;
- (id)name;
- (id)weatherDisplayName;

@end

