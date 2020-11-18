//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)dealloc;
- (void)disconnectDevice:(id)arg1;
- (id)init;
- (void)sendMessage:(const char *)arg1 args:(id)arg2;

@end
