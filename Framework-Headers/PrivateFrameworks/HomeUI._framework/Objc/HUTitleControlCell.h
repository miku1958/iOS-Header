//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

@class NSArray, NSString, UILabel, UIView;
@protocol HUControlView;

@interface HUTitleControlCell : HUControlPanelCell
{
    UIView<HUControlView> *_controlView;
    UILabel *_titleLabel;
    NSArray *_titleLabelConstraints;
    NSArray *_controlViewConstraints;
}

@property (copy, nonatomic) NSString *controlTitle;
@property (strong, nonatomic) UIView<HUControlView> *controlView; // @synthesize controlView=_controlView;
@property (copy, nonatomic) NSArray *controlViewConstraints; // @synthesize controlViewConstraints=_controlViewConstraints;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy, nonatomic) NSArray *titleLabelConstraints; // @synthesize titleLabelConstraints=_titleLabelConstraints;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)allControlViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateConstraints;

@end
