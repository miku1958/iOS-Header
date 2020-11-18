//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject
{
    HMDCameraPowerAssertionHandler *_assertionHandler;
    HMDCameraSessionID *_remoteRequestHandlerSessionID;
}

@property (readonly, weak, nonatomic) HMDCameraPowerAssertionHandler *assertionHandler; // @synthesize assertionHandler=_assertionHandler;
@property (readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID; // @synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2;

@end

