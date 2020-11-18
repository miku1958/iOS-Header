//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKCalendarEditItem, UINavigationController, UITableView;

@protocol EKCalendarEditItemDelegate <NSObject>
- (void)calendarItemStartedEditing:(EKCalendarEditItem *)arg1;
- (BOOL)isNewCalendar;
- (UINavigationController *)owningNavigationController;
- (int)sectionForCalendarEditItem:(EKCalendarEditItem *)arg1;
- (UITableView *)tableView;
@end

