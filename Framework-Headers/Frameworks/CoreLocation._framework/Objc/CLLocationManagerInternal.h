//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocationManagerStateTracker, NSMutableSet, NSString;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject
{
    struct __CLClient *fClient;
    id<CLLocationManagerDelegate> fDelegate;
    CLLocationManagerStateTracker *fState;
    CDStruct_05ee51d2 fLocation;
    NSString *fLocationEventType;
    struct __CFRunLoopTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    struct __CFRunLoopTimer *fRangingRequestTimer;
    double fRangingRequestTimeout;
    int fHeadingOrientation;
    NSMutableSet *fRangedRegions;
}

@property (readonly, nonatomic) NSMutableSet *rangedRegions; // @synthesize rangedRegions=fRangedRegions;

- (int)PausesLocationUpdatesAutomatically;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)cancelLocationRequest;
- (void)cancelRangingRequest;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;
- (void)performCourtesyPromptIfNeeded;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)setShowsBackgroundLocationIndicator:(BOOL)arg1;
- (BOOL)showsBackgroundLocationIndicator;
- (void)stopUpdatingLocationAutoPaused;

@end
