//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionItemView.h>

@class MKVibrantLabel, NSArray, NSLayoutConstraint, NSString, UIFont, UIImage, _MKRightImageButton;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    BOOL _contentChanged;
    double _width;
    BOOL _showSeeMoreButton;
    BOOL _seeMoreButtonAlwaysOnNewLine;
    NSString *_seeMoreButtonText;
    UIFont *_seeMoreButtonFont;
    NSString *_providerName;
    MKVibrantLabel *_sectionHeaderLabel;
    _MKRightImageButton *_seeMoreButton;
    NSArray *_seeMoreButtonConstraints;
    NSArray *_constraints;
    SEL _action;
    id _target;
    struct CGSize _iconDisplaySize;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize iconDisplaySize; // @synthesize iconDisplaySize=_iconDisplaySize;
@property (strong, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property (strong, nonatomic) MKVibrantLabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property (strong, nonatomic) _MKRightImageButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property (nonatomic) BOOL seeMoreButtonAlwaysOnNewLine; // @synthesize seeMoreButtonAlwaysOnNewLine=_seeMoreButtonAlwaysOnNewLine;
@property (strong, nonatomic) NSArray *seeMoreButtonConstraints; // @synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints;
@property (strong, nonatomic) UIFont *seeMoreButtonFont; // @synthesize seeMoreButtonFont=_seeMoreButtonFont;
@property (strong, nonatomic) NSString *seeMoreButtonText; // @synthesize seeMoreButtonText=_seeMoreButtonText;
@property (nonatomic) BOOL showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (strong, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)contentSizeDidChange;
- (void)createConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)shouldStack;
- (void)updateConstraints;
- (void)updateContent;

@end

