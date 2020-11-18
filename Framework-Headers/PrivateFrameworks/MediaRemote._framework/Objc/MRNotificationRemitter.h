//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNotificationCenter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNotificationRemitter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_mapping;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _userInfoTransform;
}

- (void)_handleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1 queue:(id)arg2 mappings:(id)arg3 createUserInfoTransform:(CDUnknownBlockType)arg4;

@end

