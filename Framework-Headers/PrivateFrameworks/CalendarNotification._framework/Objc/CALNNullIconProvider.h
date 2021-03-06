//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNCalendarIconIdentifierProvider-Protocol.h>
#import <CalendarNotification/CALNNotificationIconProvider-Protocol.h>

@class NSString;

@interface CALNNullIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

@end

