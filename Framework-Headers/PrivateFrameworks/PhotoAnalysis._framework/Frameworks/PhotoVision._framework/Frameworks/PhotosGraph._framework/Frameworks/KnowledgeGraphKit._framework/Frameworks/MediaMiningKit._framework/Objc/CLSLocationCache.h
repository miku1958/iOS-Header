//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSLocationCache : CLSDBCache
{
    NSPredicate *_predicateEntryWithContactsPostalAddressTemplate;
    NSPredicate *_predicateEntryWithAddressBookDictionaryTemplate;
    NSPredicate *_predicateEntryWithCoordinateTemplate;
    NSPredicate *_predicateEntryWithLocalRegionTemplate;
    NSPredicate *_predicateEntryWithAddressTemplate;
    NSPredicate *_predicateEntryWithMUID;
    NSPredicate *_predicateEntryWithUpdateDate;
}

+ (BOOL)cachedCoordinate:(struct CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (BOOL)cachedCoordinate:(struct CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(struct CLLocationCoordinate2D)arg2 withAccuracy:(double)arg3;
+ (id)defaultCache;
- (void).cxx_destruct;
- (id)_stringifyAddressDictionaryValues:(id)arg1;
- (id)_stringifyCircularRegionValue:(id)arg1;
- (id)_stringifyPlacemarkValue:(id)arg1;
- (id)_stringifyPostalAddress:(id)arg1;
- (id)dataModelName;
- (id)fetchPlacemarkForLocation:(id)arg1 withAccuracy:(double)arg2;
- (BOOL)hasCoordinate:(struct CLLocationCoordinate2D)arg1;
- (BOOL)hasCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (id)init;
- (void)insertBatchesOfPlacemarks:(id)arg1 forLocationCoordinates:(id)arg2;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)invalidateCacheForMUID:(unsigned long long)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)nearestItemForCoordinate:(struct CLLocationCoordinate2D)arg1 items:(id)arg2;
- (id)placemarkForMUID:(unsigned long long)arg1;
- (id)placemarksForAddressDictionary:(id)arg1;
- (id)placemarksForLocation:(id)arg1;
- (id)placemarksForLocation:(id)arg1 withAccuracy:(double)arg2;
- (id)placemarksForLocationAddress:(id)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (id)placemarksForPostalAddress:(id)arg1;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2;
- (void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocation:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocationCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2;

@end

