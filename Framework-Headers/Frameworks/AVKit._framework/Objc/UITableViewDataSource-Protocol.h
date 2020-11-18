//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView, UITableViewCell;

@protocol UITableViewDataSource <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;

@optional
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
- (NSArray *)sectionIndexTitlesForTableView:(UITableView *)arg1;
- (BOOL)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (long long)tableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSString *)tableView:(UITableView *)arg1 titleForFooterInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForHeaderInSection:(long long)arg2;
@end

