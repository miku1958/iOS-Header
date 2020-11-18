//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject
{
    CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (strong, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (strong, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (strong, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property (nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) BOOL saveGeocodedLocationsInTravelEngine;

+ (id)shared;
- (id)init;

@end
