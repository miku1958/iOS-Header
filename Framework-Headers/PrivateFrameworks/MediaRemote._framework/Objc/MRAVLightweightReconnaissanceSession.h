//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRAVLightweightReconnaissanceSession : NSObject
{
}

- (void)searchEndpointsForCompanionWithTimeout:(double)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchEndpointsForGroupUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchEndpointsForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchForLogicalOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchForOutputDeviceUID:(id)arg1 timeout:(double)arg2 reason:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
