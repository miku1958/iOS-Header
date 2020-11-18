//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;
@protocol EKPickerTableViewDelegate;

__attribute__((visibility("hidden")))
@interface EKPickerTableView : UIView
{
    UIDatePicker *_datePicker;
    UITableView *_tableView;
    BOOL _showsDatePicker;
    BOOL _usesKeyboard;
    id<EKPickerTableViewDelegate> _delegate;
}

@property (readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property (weak, nonatomic) id<EKPickerTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL showsDatePicker; // @synthesize showsDatePicker=_showsDatePicker;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (nonatomic) BOOL usesBlackDatePicker;
@property (nonatomic) BOOL usesKeyboard; // @synthesize usesKeyboard=_usesKeyboard;

- (void).cxx_destruct;
- (void)_datePickerDoubleTapped:(id)arg1;
- (struct CGRect)_frameForDatePicker;
- (double)_heightForDatePicker;
- (void)_updateTableContentInset;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (double)heightWithDatePickerAndTableHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableViewController:(id)arg2;
- (id)inputView;
- (void)layoutSubviews;
- (void)setShowsDatePicker:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

