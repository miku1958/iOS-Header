//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSEditingPane.h>

#import <TelephonyPreferences/UITableViewDataSource-Protocol.h>
#import <TelephonyPreferences/UITableViewDelegate-Protocol.h>

@class NSString, UITableView, UITableViewCell;

@interface TPSDetailPane : TPSEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UITableViewCell *_tableViewCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (readonly, nonatomic) UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end

