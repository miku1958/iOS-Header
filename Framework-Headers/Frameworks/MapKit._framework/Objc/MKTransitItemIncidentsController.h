//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKMapItem, NSArray, NSDate, NSMutableDictionary, NSSet;
@protocol GEOTransitLineItem;

__attribute__((visibility("hidden")))
@interface MKTransitItemIncidentsController : NSObject
{
    MKMapItem *_mapItem;
    id<GEOTransitLineItem> _lineItem;
    NSArray *_validIncidents;
    NSArray *_lineFilteredValidIncidents;
    NSSet *_blockedIncidentEntities;
    NSMutableDictionary *_dominantIncidentForSequence;
    NSMutableDictionary *_systemHasIncidents;
    NSDate *_nextIncidentChangeDate;
}

+ (id)sectionHeaderText;
- (void).cxx_destruct;
- (id)_blockedIncidentEntitiesAtDate:(id)arg1;
- (id)_dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)_validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2;
- (void)_validateCacheForDate:(id)arg1;
- (id)blockedIncidentEntitiesAtDate:(id)arg1;
- (id)dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)initWithLineItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (void)resetCache;
- (BOOL)systemHasIncidents:(id)arg1 atDate:(id)arg2;
- (id)validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2;

@end

