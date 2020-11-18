//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

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
@property (readonly, nonatomic) unsigned long long numAdditionalDepartures;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *systems;
@property (readonly, nonatomic) unsigned long long systemsCount;

- (void)dealloc;
- (id)departureSequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)directionsForSystem:(id)arg1 excludingLines:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out BOOL *)arg4;
- (id)initWithTransitInfoSnippet:(id)arg1;
- (id)sequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;

@end

