//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKLocationManager : NSObject
{
}

+ (id)fallbackLocation;
+ (id)sharedLocationManager;
- (id)_clLocationManagerLocation;
- (id)anyLocation;
- (id)currentLocation;
- (id)previousLocation;
- (struct NSString *)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;

@end

