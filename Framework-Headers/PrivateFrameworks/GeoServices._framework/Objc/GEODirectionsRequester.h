//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject
{
    id<_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)finalizeRequest:(id)arg1;
- (id)init;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;

@end

