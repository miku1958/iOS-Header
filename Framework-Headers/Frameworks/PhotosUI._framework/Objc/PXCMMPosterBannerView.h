//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PXCapsuleButton, PXUpdater, UILabel, UIVisualEffectView;

@interface PXCMMPosterBannerView : UIView
{
    struct _NSRange _headlineBoldRange;
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    CDUnknownBlockType _actionButtonAction;
    UILabel *_headlineLabel;
    UILabel *_subheadlineLabel;
    UIVisualEffectView *_visualEffectView;
    PXUpdater *_updater;
    BOOL _containsUnverifiedPersons;
    BOOL _loadingPeopleSuggestions;
    NSString *_headline;
    NSString *_subheadline;
    NSArray *_localizedNamesForHeadline;
}

@property (nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property (copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property (nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions; // @synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions;
@property (copy, nonatomic) NSArray *localizedNamesForHeadline; // @synthesize localizedNamesForHeadline=_localizedNamesForHeadline;
@property (copy, nonatomic) NSString *subheadline; // @synthesize subheadline=_subheadline;

+ (id)_headlineLabelBoldFont;
+ (id)_headlineLabelFont;
+ (id)_subheadlineLabelFont;
- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(BOOL)arg3;
- (id)_attributedStringWithString:(id)arg1 boldRange:(struct _NSRange)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_headlineStringAttributes;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_updateActionButton;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateTitles;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)setHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)willMoveToWindow:(id)arg1;

@end

