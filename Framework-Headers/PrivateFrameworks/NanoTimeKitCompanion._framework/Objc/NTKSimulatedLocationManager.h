//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLocationManager.h>

@interface NTKSimulatedLocationManager : NTKLocationManager
{
}

- (id)companionLocation;
- (id)currentLocation;
- (id)init;
- (id)previousLocation;
- (struct NSString *)startLocationUpdatesWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopLocationUpdatesForToken:(struct NSString *)arg1;

@end

