//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLInUseAssertion, CLLocation, CLPlacemark, NSMutableArray;

@interface NTKGeocoderManager : NSObject
{
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (id)cachedPlacemarkForLocation:(id)arg1;
- (id)init;
- (void)placemarkForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

