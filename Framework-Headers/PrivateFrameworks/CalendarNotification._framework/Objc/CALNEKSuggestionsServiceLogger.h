//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNSuggestionsServiceLogger-Protocol.h>

@class NSString;

@interface CALNEKSuggestionsServiceLogger : NSObject <CALNSuggestionsServiceLogger>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg1;

@end

