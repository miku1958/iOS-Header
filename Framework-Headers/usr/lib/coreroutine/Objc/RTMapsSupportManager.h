//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTMapServiceManager;
@protocol OS_dispatch_queue;

@interface RTMapsSupportManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    RTMapServiceManager *_mapServiceManager;
}

@property (strong, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)locationFromHistoryEntry:(id)arg1;
- (void).cxx_destruct;
- (void)_fetchFavoritePlaceMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchHistoryEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntries:(id)arg4;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntries:(id)arg4;
- (id)_historyEntryPlaceDisplayFromMapsHistoryEntryPlaceDisplay:(id)arg1 error:(id *)arg2;
- (id)_historyEntryRouteFromMapsHistoryEntryRoute:(id)arg1 error:(id *)arg2;
- (void)clearParkedCarBulletin;
- (void)clearTrafficConditionsBulletin;
- (id)favoritesContainer;
- (void)fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryPlaceDisplaysWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)historyContainer;
- (id)init;
- (id)initWithMapServiceManager:(id)arg1;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;

@end

