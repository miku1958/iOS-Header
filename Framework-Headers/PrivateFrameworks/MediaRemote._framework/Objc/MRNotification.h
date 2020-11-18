//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRNotification : NSObject
{
    NSString *_notification;
    NSDictionary *_userInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcMessage;
}

@property (readonly, nonatomic) NSString *notification; // @synthesize notification=_notification;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;

- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3;

@end

