//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOETATrafficUpdateRequester : NSObject
{
}

- (void)cancelRequest:(id)arg1;
- (void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(CDUnknownBlockType)arg5 finishedHandler:(CDUnknownBlockType)arg6;
- (void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;

@end

