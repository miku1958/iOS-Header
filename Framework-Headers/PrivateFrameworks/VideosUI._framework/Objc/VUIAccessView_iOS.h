//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/TVCarouselViewDataSource-Protocol.h>

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide, UIScrollView, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource>
{
    NSArray *_apps;
    UILayoutGuide *_titlePlacementGuide;
    UIStackView *_scrollStack;
    UILabel *_titleLabel;
    UIScrollView *_bodyScroll;
    UILabel *_bodyLabel;
    UIStackView *_logoStack;
    UIStackView *_bottomStack;
    UIButton *_allowButton;
    UIButton *_nackButton;
    UIButton *_seeAllButton;
    _TVCarouselView *_carouselView;
    BOOL _didLayout;
    UIView *_privacyView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *privacyView; // @synthesize privacyView=_privacyView;
@property (readonly) Class superclass;

+ (struct CGSize)iconSize;
- (void).cxx_destruct;
- (id)_buildCarousel;
- (id)_buildLogoStack;
- (id)_imageViewForIndex:(unsigned long long)arg1;
- (id)allowButton;
- (id)bodyScroll;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithApps:(id)arg1;
- (void)layoutSubviews;
- (id)nackButton;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)seeAllButton;
- (void)setBody:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showNackScreen;

@end

