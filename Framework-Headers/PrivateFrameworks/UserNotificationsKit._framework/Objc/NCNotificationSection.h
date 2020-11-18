//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationSection : NSObject
{
    NSMutableDictionary *_requests;
}

@property (readonly, nonatomic) unsigned long long notificationRequestsCount;
@property (strong, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;

- (void).cxx_destruct;
- (BOOL)addNotificationRequest:(id)arg1;
- (id)init;
- (id)notificationRequestMatchingNotificationIdentifier:(id)arg1;
- (BOOL)removeNotificationRequest:(id)arg1;
- (BOOL)replaceNotificationRequest:(id)arg1;

@end
