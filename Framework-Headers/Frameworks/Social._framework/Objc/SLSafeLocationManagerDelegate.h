//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/CLLocationManagerDelegate-Protocol.h>

@class NSString;
@protocol CLLocationManagerDelegate;

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    id<CLLocationManagerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<CLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end

