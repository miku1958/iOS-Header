//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CLInUseAssertionInternal : NSObject
{
    NSString *fBundlePath;
    NSString *fBundleIdentifier;
    NSString *fReason;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    struct CLConnectionClient *fLocationdConnection;
}

- (id)initWithBundle:(id)arg1 bundleID:(id)arg2 reason:(id)arg3;
- (void)invalidate;

@end
