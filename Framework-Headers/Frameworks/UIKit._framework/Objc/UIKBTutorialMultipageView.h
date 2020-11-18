//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_pageScrollView;
    NSArray *_pageViews;
    UIPageControl *_pageControl;
    NSTimer *_nextPageScrollTimer;
    double _pagingInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSTimer *nextPageScrollTimer; // @synthesize nextPageScrollTimer=_nextPageScrollTimer;
@property (strong, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (strong, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property (strong, nonatomic) NSArray *pageViews; // @synthesize pageViews=_pageViews;
@property (nonatomic) double pagingInterval; // @synthesize pagingInterval=_pagingInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configMediaView;
- (id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2;
- (void)layoutSubviews;
- (void)resetPageScrolling;
- (void)scrollToNextPage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
