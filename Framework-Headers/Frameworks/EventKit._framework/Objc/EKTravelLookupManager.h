//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EKTravelLookupManager : NSObject
{
}

+ (id)defaultManager;
+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)geocodeAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)findCoordinatesForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;

@end

