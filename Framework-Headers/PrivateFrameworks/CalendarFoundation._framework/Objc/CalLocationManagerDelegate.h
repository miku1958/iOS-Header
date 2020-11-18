//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CalendarFoundation/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocation;
    CDUnknownBlockType _completionBlock;
    BOOL _didFinish;
}

@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didFinish; // @synthesize didFinish=_didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)startTimer;
- (void)stopTimer;
- (void)timeout;

@end
