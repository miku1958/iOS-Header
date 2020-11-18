//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HLPHelpItem, HLPURLSession, NSLayoutConstraint, UIImageView, UILabel;

@interface HLPHelpTableOfContentCell : UITableViewCell
{
    HLPURLSession *_sectionImageURLSession;
    NSLayoutConstraint *_arrowImageViewLeadingConstraint;
    NSLayoutConstraint *_arrowImageViewWidthConstraint;
    NSLayoutConstraint *_sectionImageWidthConstraint;
    NSLayoutConstraint *_sectionImageLeadingConstraint;
    NSLayoutConstraint *_nameLabelMinHeightConstraint;
    BOOL _showFirstLevelIcon;
    BOOL _closed;
    BOOL _RTL;
    double _minNameLabelHeight;
    HLPHelpItem *_helpItem;
    UILabel *_nameLabel;
    UIImageView *_arrowImageView;
    UIImageView *_sectionImageView;
}

@property (nonatomic) BOOL RTL; // @synthesize RTL=_RTL;
@property (strong, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property (nonatomic) BOOL closed; // @synthesize closed=_closed;
@property (strong, nonatomic) HLPHelpItem *helpItem; // @synthesize helpItem=_helpItem;
@property (nonatomic) double minNameLabelHeight; // @synthesize minNameLabelHeight=_minNameLabelHeight;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UIImageView *sectionImageView; // @synthesize sectionImageView=_sectionImageView;
@property (nonatomic) BOOL showFirstLevelIcon; // @synthesize showFirstLevelIcon=_showFirstLevelIcon;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)toggle;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateToggleImageAnimated:(BOOL)arg1;

@end

