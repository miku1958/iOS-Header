//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMMotionUtils : NSObject
{
}

+ (BOOL)featureAvailability:(const char *)arg1;
+ (BOOL)isMotionActivityEntitled;
+ (id)logDirectory;
+ (BOOL)sendMessageSync:(shared_ptr_bdcc6d0f)arg1 onConnection:(struct CLConnectionClient *)arg2 timeoutAfter:(double)arg3 withReplyHandler:(CDUnknownBlockType)arg4;
+ (id)sendMessageWithReplySync:(shared_ptr_bdcc6d0f)arg1;
+ (void)setUpCMLogging;
+ (void)tccServiceMotionAccess;

@end

