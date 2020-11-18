//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOLocationShifterProxy-Protocol.h>

@class GEOLocationShifterPersistence, NSString, _GEOLocationShiftRequester;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy>
{
    _GEOLocationShiftRequester *_requester;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) GEOLocationShifterPersistence *persistentCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_prunePersistentCache;
- (void)dealloc;
- (id)init;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

