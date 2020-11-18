//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFLocationManagerObserver-Protocol.h>

@class HFLocationManagerDispatcher, NAFuture, NSString, NSUserDefaults;
@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>
{
    int _defaultsChangedNotifyToken;
    id<HFLocationSensingCoordinatorDelegate> _delegate;
    NSUserDefaults *_defaults;
    HFLocationManagerDispatcher *_locationDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property (nonatomic) int defaultsChangedNotifyToken; // @synthesize defaultsChangedNotifyToken=_defaultsChangedNotifyToken;
@property (weak, nonatomic) id<HFLocationSensingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL homeSensingEnabled;
@property (strong, nonatomic) HFLocationManagerDispatcher *locationDispatcher; // @synthesize locationDispatcher=_locationDispatcher;
@property (readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;

@end

