//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;

@interface HUAlarmEditView : UIView
{
    UITableView *_settingsTable;
    UIDatePicker *_timePicker;
}

@property (readonly, nonatomic) UITableView *settingsTable; // @synthesize settingsTable=_settingsTable;
@property (readonly, nonatomic) UIDatePicker *timePicker; // @synthesize timePicker=_timePicker;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

