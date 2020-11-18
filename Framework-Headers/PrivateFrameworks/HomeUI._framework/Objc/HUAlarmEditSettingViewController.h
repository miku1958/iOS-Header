//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HUAlarmEditableTextCell, MTMutableAlarm, NSString, UITableView;
@protocol HUAlarmEditSettingViewControllerDelegate;

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id<HUAlarmEditSettingViewControllerDelegate> _delegate;
    NSString *_loggedInAppleMusicAccountDSID;
    UITableView *_tableView;
    HUAlarmEditableTextCell *_editingCell;
    long long _setting;
    unsigned long long _firstWeekday;
    unsigned long long _repeatSchedule;
    MTMutableAlarm *_alarm;
}

@property (copy, nonatomic) MTMutableAlarm *alarm; // @synthesize alarm=_alarm;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUAlarmEditSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HUAlarmEditableTextCell *editingCell; // @synthesize editingCell=_editingCell;
@property (nonatomic) unsigned long long firstWeekday; // @synthesize firstWeekday=_firstWeekday;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // @synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID;
@property (nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property (nonatomic) long long setting; // @synthesize setting=_setting;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_commonInitialization;
- (void)_dismiss;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)initWithAlarm:(id)arg1 setting:(long long)arg2 loggedInAppleMusicAccountDSID:(id)arg3;
- (void)loadView;
- (unsigned int)maskForRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textValueChanged:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

