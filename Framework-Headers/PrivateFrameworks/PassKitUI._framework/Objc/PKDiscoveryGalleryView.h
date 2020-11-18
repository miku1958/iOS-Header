//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKDiscoveryCardViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderView-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, PKDiscoveryCardView, PKDiscoveryDataSource, UIImage, UIPageControl, UIScrollView;
@protocol PKPGSVSectionSubheaderDelegate;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, UIScrollViewDelegate, PKPGSVSectionSubheaderView>
{
    NSMutableArray *_cardViews;
    NSMutableArray *_discoveryCardViews;
    id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
    PKDiscoveryCardView *_passWelcomeView;
    PKDiscoveryCardView *_paymentWelcomeView;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    UIImage *_dismissImage;
    BOOL _needsUpdateAsHeaderSubview;
    unsigned long long _pendingDeletes;
    struct {
        unsigned int hasPaymentPassWelcomeCard:1;
        unsigned int hasBarcodePassWelcomeCard:1;
        unsigned int barcodePassWelcomeCardIsDismissable:1;
        unsigned int hasDiscoveryCards:1;
    } _layoutState;
    BOOL _welcomeCardStateIsDirty;
    BOOL _animatingCard;
    PKDiscoveryCardView *_pressedDiscoveryCardView;
    PKDiscoveryDataSource *_dataSource;
}

@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard; // @synthesize animatingCard=_animatingCard;
@property (strong, nonatomic) PKDiscoveryDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) PKDiscoveryCardView *pressedDiscoveryCardView; // @synthesize pressedDiscoveryCardView=_pressedDiscoveryCardView;
@property (readonly) Class superclass;

+ (BOOL)isVisibileForPKPGSVLayoutState:(CDStruct_d8808cea)arg1 dataSource:(id)arg2;
+ (id)passWelcomeCardMessageAttributedString;
+ (BOOL)paymentWelcomeCardIsAvailable;
- (void).cxx_destruct;
- (void)_appStorePressed;
- (struct CGSize)_contentSize;
- (id)_createPassWelcomeCardView;
- (id)_createPaymentWelcomeCardView;
- (double)_defaultHeight;
- (unsigned long long)_indexForCardViewWithIdentifier:(id)arg1;
- (void)_pageControlChanged:(id)arg1;
- (void)_removeCardView:(id)arg1 animated:(BOOL)arg2;
- (void)_reportCurrentDiscoveryCardToDiscoveryService;
- (void)_scanCodePressed;
- (void)_shouldDismiss;
- (void)_updateCardViewsAnimated:(BOOL)arg1;
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;
- (void)_updatePageControlWithDisplayIndex;
- (id)cardViewForCardWithItemIdentifier:(id)arg1;
- (void)dealloc;
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2;
- (void)discoveryCardViewRemoveTapped:(id)arg1;
- (void)discoveryCardViewTapped:(id)arg1;
- (unsigned long long)displayIndex;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)needsUpdate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setSubheaderDelegate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateArticleLayouts:(id)arg1;
- (void)updateForPKPGSVLayoutState:(CDStruct_d8808cea)arg1;
- (void)updatePageControlFrame;

@end

