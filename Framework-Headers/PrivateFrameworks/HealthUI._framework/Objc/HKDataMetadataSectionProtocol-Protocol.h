//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UINavigationController, UITableView, UITableViewCell;

@protocol HKDataMetadataSectionProtocol
- (UITableViewCell *)cellForIndex:(unsigned long long)arg1 tableView:(UITableView *)arg2;
- (unsigned long long)numberOfRowsInSection;
- (NSString *)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(UINavigationController *)arg2 animated:(BOOL)arg3;
@end
