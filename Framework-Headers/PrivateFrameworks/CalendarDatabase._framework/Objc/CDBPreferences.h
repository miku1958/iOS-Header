//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences;

@interface CDBPreferences : NSObject
{
    CalPreferences *_preferences;
}

@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) BOOL sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) BOOL suggestEventLocations;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) BOOL suggestedLocationsTestMode;

+ (id)shared;
- (void).cxx_destruct;
- (id)init;

@end

