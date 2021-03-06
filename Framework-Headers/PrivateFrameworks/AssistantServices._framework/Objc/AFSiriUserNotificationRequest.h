//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>
{
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (BOOL)canBeHandled;
+ (BOOL)supportedForApplicationWithBundleId:(id)arg1;
+ (BOOL)supportedOnPlatform;
- (void).cxx_destruct;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;

@end

