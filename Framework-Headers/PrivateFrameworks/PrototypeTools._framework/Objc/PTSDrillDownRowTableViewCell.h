//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIButton;

@interface PTSDrillDownRowTableViewCell : PTSRowTableViewCell
{
    UIButton *_actionButton;
}

- (void).cxx_destruct;
- (void)_actionPress;
- (void)_createActionButton;
- (void)_destroyActionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateCellCharacteristics;

@end

