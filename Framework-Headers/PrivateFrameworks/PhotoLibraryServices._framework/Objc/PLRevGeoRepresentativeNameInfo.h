//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSNumber, NSString;

@interface PLRevGeoRepresentativeNameInfo : NSObject
{
    BOOL _allEntriesAtHome;
    BOOL _allEntriesMatchHomeForOrderType;
    BOOL _addCountyIfNeeded;
    NSString *_name;
    unsigned long long _type;
    unsigned long long _matchingCount;
    NSMutableOrderedSet *_geoPlaces;
    NSMutableOrderedSet *_remainingGeoPlaces;
}

@property (nonatomic) BOOL addCountyIfNeeded; // @synthesize addCountyIfNeeded=_addCountyIfNeeded;
@property (nonatomic) BOOL allEntriesAtHome; // @synthesize allEntriesAtHome=_allEntriesAtHome;
@property (nonatomic) BOOL allEntriesMatchHomeForOrderType; // @synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType;
@property (readonly, nonatomic) NSMutableOrderedSet *geoPlaces; // @synthesize geoPlaces=_geoPlaces;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic) unsigned long long matchingCount; // @synthesize matchingCount=_matchingCount;
@property (readonly, copy, nonatomic) NSNumber *minimumArea;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSMutableOrderedSet *remainingGeoPlaces; // @synthesize remainingGeoPlaces=_remainingGeoPlaces;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4;
- (BOOL)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2;
- (BOOL)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1;
- (id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;
- (id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2;
- (void)addGeoPlace:(id)arg1;
- (void)addGeoPlaces:(id)arg1;
- (void)clearGeoPlaces;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (void)prepareRemainingGeoPlaces;
- (void)removeGeoPlacesFromRemaining:(id)arg1;
- (void)updateWithAddedNameInfo:(id)arg1;

@end
