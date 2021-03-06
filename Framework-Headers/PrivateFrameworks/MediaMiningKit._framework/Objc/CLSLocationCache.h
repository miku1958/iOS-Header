//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSLocationCache : CLSDBCache
{
    NSPredicate *_entryPredicateWithContactsPostalAddressTemplate;
    NSPredicate *_entryPredicateWithAddressBookDictionaryTemplate;
    NSPredicate *_entryPredicateWithCoordinateTemplate;
    NSPredicate *_entryPredicateWithAddressTemplate;
    NSPredicate *_entryPredicateWithMUID;
}

+ (BOOL)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2;
+ (id)defaultCacheName;
- (void).cxx_destruct;
- (id)_insertManagedPlacemarkForLitePlacemark:(id)arg1 inContext:(id)arg2;
- (id)_insertManagedPlacemarksForLitePlacemarks:(id)arg1 inContext:(id)arg2;
- (id)_litePlacemarkFromManagedPlacemark:(id)arg1;
- (id)_litePlacemarksFromManagedPlacemarks:(id)arg1;
- (void)_setPlacemarks:(id)arg1 forEntryWithPredicate:(id)arg2 entrySetupBlock:(CDUnknownBlockType)arg3;
- (id)_stringifyAddressDictionaryValues:(id)arg1;
- (id)_stringifyCircularRegionValue:(id)arg1;
- (id)_stringifyPostalAddress:(id)arg1;
- (id)dataModelName;
- (id)fetchPlacemarkForLocation:(id)arg1 withQueryAccuracy:(double)arg2;
- (BOOL)hasCoordinate:(struct CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2;
- (BOOL)hasRegion:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (void)insertBatchesOfPlacemarks:(id)arg1 forLocations:(id)arg2;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2;
- (void)invalidateCacheForMUID:(unsigned long long)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)nearestEntryForCoordinate:(struct CLLocationCoordinate2D)arg1 entries:(id)arg2;
- (id)placemarkForMUID:(unsigned long long)arg1;
- (id)placemarksForAddressDictionary:(id)arg1;
- (id)placemarksForLocation:(id)arg1;
- (id)placemarksForLocation:(id)arg1 withQueryAccuracy:(double)arg2;
- (id)placemarksForLocationAddress:(id)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3;
- (id)placemarksForPostalAddress:(id)arg1;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2;
- (id)predicateForCoordinate:(struct CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3;
- (void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2;
- (void)setPlacemarks:(id)arg1 forCLLocation:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocation:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2;
- (void)setPlacemarks:(id)arg1 forLocationCoordinate:(struct CLLocationCoordinate2D)arg2 withHorizontalAccuracy:(double)arg3;
- (void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2;

@end

