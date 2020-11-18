//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSDictionary, NSNotification, UITableViewCell;
@protocol HKSimpleDataEntryCellType, HKSimpleDataEntryItemDelegate;

@protocol HKSimpleDataEntryItemType <NSObject>

@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate;
@property (nonatomic) unsigned long long placeholderType;

- (void)beginEditing;
- (UITableViewCell<HKSimpleDataEntryCellType> *)cell;
- (NSDictionary *)formattedKeyAndValue;
- (void)localeDidChange:(NSNotification *)arg1;
- (void)updateCellDisplay;
@end
