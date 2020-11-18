//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;
@protocol OS_dispatch_queue;

@interface GEOCoarseLocationProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _inFlightTileLoadsCount;
    GEOLocationShifter *_locationShifter;
}

- (void).cxx_destruct;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_fetchRepresentativePointFromData:(id)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (BOOL)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end
