//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    CNGeminiBadge *_badge;
}

@property (strong) CNGeminiBadge *badge; // @synthesize badge=_badge;
@property (strong) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3;

@end
