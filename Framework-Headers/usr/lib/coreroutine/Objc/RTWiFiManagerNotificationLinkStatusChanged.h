//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RTWiFiManagerNotificationLinkStatusChanged : RTNotification
{
    unsigned long long _linkStatus;
    NSArray *_accessPoints;
}

@property (readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property (readonly, nonatomic) unsigned long long linkStatus; // @synthesize linkStatus=_linkStatus;

- (void).cxx_destruct;
- (id)initWithLinkStatus:(unsigned long long)arg1 accessPoints:(id)arg2;

@end

