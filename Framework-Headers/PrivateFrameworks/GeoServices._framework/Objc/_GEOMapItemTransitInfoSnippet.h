//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemTransitInfo-Protocol.h>

@class GEOPDTransitInfoSnippet, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo>
{
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    NSArray *_labelItems;
    NSString *_displayName;
}

@property (readonly, nonatomic) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasTransitIncidentComponent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isTransitIncidentsTTLExpired;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property (readonly, nonatomic) NSArray *lines;
@property (readonly, nonatomic) unsigned long long linesCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *systems;
@property (readonly, nonatomic) unsigned long long systemsCount;

- (void).cxx_destruct;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out BOOL *)arg4;
- (id)headSignsForLine:(id)arg1;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(CDUnknownBlockType)arg2 excludingIncidentEntities:(id)arg3;
- (id)initWithTransitInfoSnippet:(id)arg1;
- (id)linesForSystem:(id)arg1;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
- (id)sequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL *)arg4;

@end

