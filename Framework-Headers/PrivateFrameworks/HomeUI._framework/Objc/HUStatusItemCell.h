//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HUGridLayoutOptions, NSLayoutConstraint, NSString, UILabel, UIView;

@interface HUStatusItemCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    HUGridLayoutOptions *_gridLayoutOptions;
    UILabel *_titleLabel;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_titleLabelSnapshot;
}

@property (strong, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HUGridLayoutOptions *gridLayoutOptions; // @synthesize gridLayoutOptions=_gridLayoutOptions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIView *titleLabelSnapshot; // @synthesize titleLabelSnapshot=_titleLabelSnapshot;

- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

