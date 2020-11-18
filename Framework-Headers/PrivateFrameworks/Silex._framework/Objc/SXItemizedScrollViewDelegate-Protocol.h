//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/UIScrollViewDelegate-Protocol.h>

@class SXItemizedScrollView;

@protocol SXItemizedScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didHideViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 willShowViewWithIndex:(unsigned long long)arg2;
@end

