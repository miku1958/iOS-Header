//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MNNavigationServiceObserver-Protocol.h>

@class GEOSharedNavState, NSString;
@protocol MSPNavigationListenerDelegate;

__attribute__((visibility("hidden")))
@interface MSPNavigationListener : NSObject <MNNavigationServiceObserver>
{
    GEOSharedNavState *_state;
    NSString *_navSessionID;
    id<MSPNavigationListenerDelegate> _delegate;
    GEOSharedNavState *_currentState;
}

@property (strong, nonatomic) GEOSharedNavState *currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MSPNavigationListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initState;
- (int)_referenceFrameForDestination:(id)arg1;
- (void)_updateETA:(double)arg1 distance:(double)arg2;
- (void)_updateLocation:(id)arg1;
- (void)_updateRoute:(id)arg1;
- (void)_updateTraffic:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2;
- (void)navigationServiceDidArrive:(id)arg1;

@end
