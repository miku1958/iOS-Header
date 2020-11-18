//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMUserNotification : NSObject
{
    id _reserved;
}

@property (readonly, nonatomic) unsigned long long displayFlags;
@property (readonly, strong, nonatomic) NSDictionary *displayInformation;
@property (readonly, strong, nonatomic) id identifier;
@property (strong, nonatomic) NSString *representedApplicationBundle;
@property (readonly, nonatomic) unsigned long long response;
@property (readonly, nonatomic) unsigned long long responseFlags;
@property (readonly, strong, nonatomic) NSDictionary *responseInformation;
@property (nonatomic) BOOL showInLockScreen;
@property (readonly, nonatomic) double timeout;
@property (strong, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL usesNotificationCenter;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;
- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2;
- (void)dealloc;

@end

