//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, NSURL;

@interface VSUserNotificationOperation : NSOperation
{
    struct __CFUserNotification *_notification;
    NSURL *_iconURL;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    unsigned long long _response;
    CDUnknownFunctionPointerType _userNotificationCreateProc;
    CDUnknownFunctionPointerType _userNotificationReceiveResponseProc;
    CDUnknownFunctionPointerType _userNotificationCancelProc;
}

@property (copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property (copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) unsigned long long response; // @synthesize response=_response;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) CDUnknownFunctionPointerType userNotificationCancelProc; // @synthesize userNotificationCancelProc=_userNotificationCancelProc;
@property (nonatomic) CDUnknownFunctionPointerType userNotificationCreateProc; // @synthesize userNotificationCreateProc=_userNotificationCreateProc;
@property (nonatomic) CDUnknownFunctionPointerType userNotificationReceiveResponseProc; // @synthesize userNotificationReceiveResponseProc=_userNotificationReceiveResponseProc;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)main;

@end

