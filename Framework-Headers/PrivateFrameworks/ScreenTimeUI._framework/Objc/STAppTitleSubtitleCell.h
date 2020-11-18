//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@interface STAppTitleSubtitleCell : PSTableCell
{
    BOOL _hasSubtitle;
}

@property (nonatomic) BOOL hasSubtitle; // @synthesize hasSubtitle=_hasSubtitle;
@property (readonly, nonatomic) BOOL isAppCell;

+ (long long)cellStyle;
- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setSpecifier:(id)arg1;

@end

