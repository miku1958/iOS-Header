//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject
{
    CLGeocoderInternal *_internal;
}

@property (readonly, nonatomic, getter=isGeocoding) BOOL geocoding;

- (void)_ensureMainThreadExecutionContextForBlock:(CDUnknownBlockType)arg1;
- (void)_notifyCancel;
- (void)_notifyError:(id)arg1;
- (void)_notifyNoResult;
- (void)_notifyPartialResult:(id)arg1;
- (void)_notifyResult:(id)arg1;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)cancelGeocode;
- (void)dealloc;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)geocodeAddressString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
