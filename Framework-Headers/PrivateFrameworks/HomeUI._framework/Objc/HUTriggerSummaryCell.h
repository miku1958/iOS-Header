//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUSelectableCellProtocol-Protocol.h>

@class HFItem, HUIconListView, NSArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol>
{
    BOOL _disabled;
    BOOL _canBeSelected;
    BOOL _hideTitle;
    BOOL _hideDescription;
    BOOL _hideDescriptionIcon;
    HFItem *_item;
    NSString *_titleText;
    NSString *_descriptionText;
    UIImage *_descriptionIcon;
    NSArray *_iconDescriptors;
    UIColor *_cellColor;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_descriptionIconView;
    HUIconListView *_iconContainerView;
    UIView *_textContainerView;
    double _textAlpha;
    UIFont *_titleFont;
    UIFont *_descriptionFont;
}

@property (nonatomic) BOOL canBeSelected; // @synthesize canBeSelected=_canBeSelected;
@property (strong, nonatomic) UIColor *cellColor; // @synthesize cellColor=_cellColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property (strong, nonatomic) UIImage *descriptionIcon; // @synthesize descriptionIcon=_descriptionIcon;
@property (strong, nonatomic) UIImageView *descriptionIconView; // @synthesize descriptionIconView=_descriptionIconView;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDescription; // @synthesize hideDescription=_hideDescription;
@property (nonatomic) BOOL hideDescriptionIcon; // @synthesize hideDescriptionIcon=_hideDescriptionIcon;
@property (nonatomic) BOOL hideTitle; // @synthesize hideTitle=_hideTitle;
@property (strong, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property (strong, nonatomic) HUIconListView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property (strong, nonatomic) NSArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property (strong, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property (strong, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (strong, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;

- (void).cxx_destruct;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setUpIconContainerViewConstraints;
- (void)setUpTextContainerViewConstraints;
- (void)updateConstraints;
- (void)updateHorizontalLabelConstraints;
- (void)updateSelectionUI;
- (void)updateTitle;
- (void)updateUIIconsWithResults:(id)arg1;
- (void)updateUITextWithResults:(id)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)updateVerticalLabelConstraints;

@end
