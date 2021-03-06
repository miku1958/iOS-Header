//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebNotificationPrivate;

@interface WebNotification : NSObject
{
    WebNotificationPrivate *_private;
}

- (id)body;
- (void)dealloc;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (void)finalize;
- (id)iconURL;
- (id)init;
- (id)lang;
- (unsigned long long)notificationID;
- (id)origin;
- (id)tag;
- (id)title;

@end

