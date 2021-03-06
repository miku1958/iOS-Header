//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOLocationShifterProxy-Protocol.h>

@class NSCache, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(CDStruct_c3b9c2ee)arg1;
- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(CDStruct_c3b9c2ee)arg1;
- (void)flushDiskCache;
- (id)init;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

