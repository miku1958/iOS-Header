//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class SCLHistoryItemView;

@interface SCLUnlockHistoryTableViewCell : PSTableCell
{
    SCLHistoryItemView *_historyItemView;
}

@property (readonly, nonatomic) SCLHistoryItemView *historyItemView; // @synthesize historyItemView=_historyItemView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end

