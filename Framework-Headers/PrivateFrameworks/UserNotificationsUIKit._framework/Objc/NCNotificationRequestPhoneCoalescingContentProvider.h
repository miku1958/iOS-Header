//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NSMutableDictionary;

@interface NCNotificationRequestPhoneCoalescingContentProvider : NCNotificationRequestContentProvider
{
    NSMutableDictionary *_topicsDictionary;
}

@property (strong, nonatomic) NSMutableDictionary *topicsDictionary; // @synthesize topicsDictionary=_topicsDictionary;

- (void).cxx_destruct;
- (void)_addNotificationRequestToCoalesce:(id)arg1;
- (id)_formattedDecimalStringForNumber:(id)arg1;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (id)secondaryText;
- (void)setNotificationRequest:(id)arg1;

@end
