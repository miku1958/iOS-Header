//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRKCardSectionViewController.h>

@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController
{
    SiriUISnippetViewController *_snippetViewController;
}

@property (strong, nonatomic) SiriUICardSectionView *view; // @dynamic view;

+ (id)cardSectionClasses;
- (void).cxx_destruct;
- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;
- (void)_updateContentSize;
- (void)viewDidLayoutSubviews;

@end

