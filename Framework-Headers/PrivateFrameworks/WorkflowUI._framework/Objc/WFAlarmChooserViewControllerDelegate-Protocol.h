//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, WFAlarmChooserViewController;

@protocol WFAlarmChooserViewControllerDelegate <NSObject>
- (void)alarmChooserViewController:(WFAlarmChooserViewController *)arg1 didFinishWithChosenAlarms:(NSArray *)arg2;
- (void)alarmChooserViewControllerDidCancel:(WFAlarmChooserViewController *)arg1;
@end

