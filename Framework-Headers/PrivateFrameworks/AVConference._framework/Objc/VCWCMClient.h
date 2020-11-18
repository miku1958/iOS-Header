//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WCMClientDelegate;

__attribute__((visibility("hidden")))
@interface VCWCMClient : NSObject
{
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<WCMClientDelegate> *wcmClientDelegate;
}

@property (readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue;
@property (strong, nonatomic) id<WCMClientDelegate> wcmClientDelegate; // @synthesize wcmClientDelegate;

- (void)dealloc;
- (id)init;
- (void)startWCMClient;
- (void)stopWCMClient;

@end
