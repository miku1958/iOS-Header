//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

#import <GeoServices/_GEODirectionsRequesterServerProxy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester <_GEODirectionsRequesterServerProxy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;

@end

