//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UINavigationBarAugmentedTitleView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIMenu, UINavigationItem, _UINavigationBarTitleViewOverlayRects;
@protocol _UINavigationBarTitleViewDataSource;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView>
{
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    id<_UINavigationBarTitleViewDataSource> _dataSource;
    BOOL _underlayBarContent;
    BOOL _hideBackButton;
    BOOL _hideLeadingBarButtons;
    BOOL _hideStandardTitle;
    BOOL _hideTrailingBarButtons;
    UINavigationItem *_navigationItem;
    long long _titleLocation;
    double _height;
    double _backButtonMaximumWidth;
    double _backButtonAlpha;
    double _leadingBarAlpha;
    double _trailingBarAlpha;
    long long _preferredContentAlignment;
}

@property (readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property (readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property (readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property (readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property (readonly, nonatomic) double _navigationBarBackButtonAlpha;
@property (readonly, nonatomic) double _navigationBarBackButtonMaximumWidth;
@property (readonly, nonatomic) double _navigationBarContentHeight;
@property (readonly, nonatomic) double _navigationBarLeadingBarButtonsAlpha;
@property (readonly, nonatomic) double _navigationBarTrailingBarButtonsAlpha;
@property (readonly, nonatomic) long long _preferredAlignment;
@property (readonly, nonatomic) BOOL _underlayNavigationBarContent;
@property (nonatomic) double backButtonAlpha; // @synthesize backButtonAlpha=_backButtonAlpha;
@property (nonatomic) double backButtonMaximumWidth; // @synthesize backButtonMaximumWidth=_backButtonMaximumWidth;
@property (readonly, copy, nonatomic) UIMenu *backButtonMenu;
@property (readonly, nonatomic) double contentBaseHeight;
@property (readonly, nonatomic) double contentBaselineOffsetFromTop;
@property (readonly, copy, nonatomic) NSArray *contentOverlayRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height; // @synthesize height=_height;
@property (nonatomic) BOOL hideBackButton; // @synthesize hideBackButton=_hideBackButton;
@property (nonatomic) BOOL hideLeadingBarButtons; // @synthesize hideLeadingBarButtons=_hideLeadingBarButtons;
@property (nonatomic) BOOL hideStandardTitle; // @synthesize hideStandardTitle=_hideStandardTitle;
@property (nonatomic) BOOL hideTrailingBarButtons; // @synthesize hideTrailingBarButtons=_hideTrailingBarButtons;
@property (readonly, nonatomic) double largeTitleHeight;
@property (readonly, nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange;
@property (nonatomic) double leadingBarAlpha; // @synthesize leadingBarAlpha=_leadingBarAlpha;
@property (readonly, nonatomic) long long leadingOverlayCount;
@property (readonly, weak, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property (nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long titleLocation; // @synthesize titleLocation=_titleLocation;
@property (nonatomic) double trailingBarAlpha; // @synthesize trailingBarAlpha=_trailingBarAlpha;
@property (readonly, nonatomic) long long trailingOverlayCount;
@property (nonatomic) BOOL underlayBarContent; // @synthesize underlayBarContent=_underlayBarContent;

- (void).cxx_destruct;
- (void)_contentDidChange;
- (void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
- (id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1;
- (BOOL)_wantsTwoPartTransition;
- (void)contentDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (void)performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)preferredContentSizeDidChange;
- (long long)preferredContentSizeForSize:(long long)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;

@end

