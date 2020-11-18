//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface _UILocationResultsTableViewCell : UITableViewCell
{
    long long _locationImageType;
    UIImage *_customLocationImage;
    UILabel *_searchTextLabel;
    UILabel *_searchDetailTextLabel;
    UIImageView *_searchImageView;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelSpaceConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    UIView *_cellHeightStrut;
    double _additionalLeftSidePadding;
}

@property (nonatomic) double additionalLeftSidePadding; // @synthesize additionalLeftSidePadding=_additionalLeftSidePadding;
@property (strong, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property (strong, nonatomic) UIView *cellHeightStrut; // @synthesize cellHeightStrut=_cellHeightStrut;
@property (copy, nonatomic) UIImage *customLocationImage; // @synthesize customLocationImage=_customLocationImage;
@property (strong, nonatomic) NSLayoutConstraint *interLabelSpaceConstraint; // @synthesize interLabelSpaceConstraint=_interLabelSpaceConstraint;
@property (nonatomic) long long locationImageType; // @synthesize locationImageType=_locationImageType;
@property (strong, nonatomic) UILabel *searchDetailTextLabel; // @synthesize searchDetailTextLabel=_searchDetailTextLabel;
@property (strong, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property (strong, nonatomic) UILabel *searchTextLabel; // @synthesize searchTextLabel=_searchTextLabel;
@property (strong, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;

- (void)_applyLeftAndRightAlignmentConstraints:(id)arg1;
- (double)_defaultCellBottomMargin;
- (double)_defaultCellTopMargin;
- (id)_searchImageView;
- (double)_subtitleCellBottomMargin;
- (double)_subtitleCellInterLabelSpace;
- (double)_subtitleCellTopMargin;
- (void)_updateLabelFontsAndConstraints;
- (id)contentView;
- (void)dealloc;
- (id)detailTextLabel;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)textLabel;

@end
