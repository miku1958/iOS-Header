//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedConnection;
+ (void)warmUp;
- (void).cxx_destruct;
- (void)warmUp;

@end
