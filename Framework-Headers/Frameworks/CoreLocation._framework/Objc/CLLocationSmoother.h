//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CLLocationSmootherProxy;
@protocol CLLocationManagerDelegateInternal;

@interface CLLocationSmoother : NSObject
{
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;
}

@property (nonatomic) id<CLLocationManagerDelegateInternal> delegate;
@property (strong, nonatomic) _CLLocationSmootherProxy *locationManagerSmootherProxy; // @synthesize locationManagerSmootherProxy=_locationManagerSmootherProxy;

- (void)dealloc;
- (id)init;
- (void)smoothLocations:(id)arg1;

@end
