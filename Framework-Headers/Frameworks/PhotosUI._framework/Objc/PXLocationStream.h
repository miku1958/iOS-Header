//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _state;
    double _accuracy;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_closeStreamWithError;
- (void)_emitLocation:(id)arg1;
- (void)_open;
- (void)_requestAuthorization;
- (void)_requestLocation;
- (void)dealloc;
- (id)initWithAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end

