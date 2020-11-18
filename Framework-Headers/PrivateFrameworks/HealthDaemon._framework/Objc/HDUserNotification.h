//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDUserNotification : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_defaultButton;
    NSString *_cancelButton;
    NSString *_otherButton;
    CDUnknownBlockType _responseHandler;
    struct __CFUserNotification *_notification;
}

@property (copy, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (copy, nonatomic) NSString *defaultButton; // @synthesize defaultButton=_defaultButton;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) struct __CFUserNotification *notification; // @synthesize notification=_notification;
@property (copy, nonatomic) NSString *otherButton; // @synthesize otherButton=_otherButton;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_handleResponse:(unsigned long long)arg1;
- (void)presentWithResponseHandler:(CDUnknownBlockType)arg1;

@end

