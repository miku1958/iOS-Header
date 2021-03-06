//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIStackView;
@protocol GEOTextItemContainer;

__attribute__((visibility("hidden")))
@interface MKTextItemContainerViewController : UIViewController
{
    id<GEOTextItemContainer> _textItemContainer;
    NSArray *_textItemViews;
    UIStackView *_stackView;
    double _maxWidth;
}

@property (nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly, nonatomic) id<GEOTextItemContainer> textItemContainer; // @synthesize textItemContainer=_textItemContainer;
@property (copy, nonatomic) NSArray *textItemViews; // @synthesize textItemViews=_textItemViews;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (double)currentMaxWidth;
- (void)infoCardThemeChanged;
- (id)initWithTextItemContainer:(id)arg1;
- (void)setupSubviewsWithMaxWidth:(double)arg1;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

