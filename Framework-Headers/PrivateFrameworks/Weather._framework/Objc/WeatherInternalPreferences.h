//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults
{
    id<WeatherPreferencesPersistence> _persistence;
}

@property (readonly, nonatomic) unsigned long long deviceInactivityThreshold;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) BOOL isV3Enabled;
@property (strong) id<WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;
@property (readonly, nonatomic) BOOL shouldShowUpdateTimestamp;

+ (id)sharedInternalPreferences;
- (void).cxx_destruct;

@end

