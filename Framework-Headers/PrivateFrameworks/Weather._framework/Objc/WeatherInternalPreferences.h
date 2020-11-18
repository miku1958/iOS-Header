//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSObject
{
    id<WeatherPreferencesPersistence> _persistence;
}

@property (readonly) BOOL isInternalInstall;
@property (strong) id<WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;

+ (id)sharedInternalPreferences;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;

@end

