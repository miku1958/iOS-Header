//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSLayoutConstraint, UIStackView, UIView, _SFQuickLookDocumentInfoView;
@protocol _SFQuickLookDocumentViewDelegate;

@interface _SFQuickLookDocumentView : UIScrollView
{
    UIView *_wrapperView;
    UIView *_contentView;
    _SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_topContentInsetConstraint;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
    id<_SFQuickLookDocumentViewDelegate> _quickLookDocumentViewDelegate;
}

@property (weak, nonatomic) id<_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate; // @synthesize quickLookDocumentViewDelegate=_quickLookDocumentViewDelegate;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (struct CGRect)frameForButtonAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateActionTitles:(id)arg1;
- (void)updateDocumentFileName:(id)arg1;
- (void)updateDocumentFileSize:(id)arg1;
- (void)updateDocumentFileType:(id)arg1;
- (void)updateDocumentIcon:(id)arg1;
- (void)updateTopContentInset:(double)arg1;

@end
