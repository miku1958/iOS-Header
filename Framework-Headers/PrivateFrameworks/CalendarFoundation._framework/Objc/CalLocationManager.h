//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CalLocationManager : NSObject
{
}

+ (void)_loadMapKit;
+ (void)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (BOOL)isCurrentProcessEntitledToUseLocationServices;
+ (void)placemarkForAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)placemarkForLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)strictGeocodeString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end

