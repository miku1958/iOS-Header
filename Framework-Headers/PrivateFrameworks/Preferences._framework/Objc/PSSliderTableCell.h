//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell
{
    UIView *_disabledView;
}

- (void).cxx_destruct;
- (BOOL)canReload;
- (id)controlValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)titleLabel;

@end

