//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceAuthorizationRequestInternal : NSObject
{
    id<AVOutputDeviceAuthorizationRequestImpl> impl;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSError *error;
}

@end

