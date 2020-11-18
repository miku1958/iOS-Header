//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSString, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView, UILabel, UIView;
@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>
{
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    BOOL _cellIsUsingPlatterStyle;
    double _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    struct UIEdgeInsets _snippetEdgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
@property (readonly) Class superclass;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_configureSubviewsForCurrentInset;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShowBackgroundView:(BOOL)arg1;
- (void)setTopPadding:(double)arg1;

@end
