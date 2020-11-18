//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class OFUIPagingView, UIView;

@protocol OFUIPagingViewDelegate <NSObject>
- (long long)numberOfPagesInPagingView:(OFUIPagingView *)arg1;
- (UIView *)viewForPageInPagingView:(OFUIPagingView *)arg1 atIndex:(long long)arg2;

@optional
- (void)currentPageDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)pagesDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)pagingViewDidEndMoving:(OFUIPagingView *)arg1;
- (void)pagingViewWillBeginMoving:(OFUIPagingView *)arg1;
@end
