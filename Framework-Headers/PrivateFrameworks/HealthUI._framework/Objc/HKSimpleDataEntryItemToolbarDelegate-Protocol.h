//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKSimpleDataEntryItem;

@protocol HKSimpleDataEntryItemToolbarDelegate <NSObject>

@optional
- (void)dataEntryItemDonePressed:(HKSimpleDataEntryItem *)arg1;
- (void)dataEntryItemNextPressed:(HKSimpleDataEntryItem *)arg1;
- (void)dataEntryItemPrevPressed:(HKSimpleDataEntryItem *)arg1;
@end

