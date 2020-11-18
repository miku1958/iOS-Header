//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PLRevGeoPlaceAnnotation;

@interface PLRevGeoPlace : NSObject
{
    NSMutableArray *_placeTypeInfoMap[15];
    PLRevGeoPlaceAnnotation *_placeAnnotation;
    BOOL _isHome;
}

@property (nonatomic) BOOL isHome; // @synthesize isHome=_isHome;

+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3;
- (unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2;
- (void)_mergeGEOMapItem:(id)arg1;
- (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long *)arg3 outPreviousOrderType:(unsigned long long *)arg4;
- (id)_placeInfosForOrderType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned long long)arg2;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2;
- (id)minimumAreaForOrderType:(unsigned long long)arg1 name:(id)arg2;
- (id)placeInfosForOrderType:(unsigned long long)arg1;

@end

