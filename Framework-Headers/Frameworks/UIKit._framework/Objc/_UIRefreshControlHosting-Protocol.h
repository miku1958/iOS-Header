//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIRefreshControl, UIScrollView;

@protocol _UIRefreshControlHosting <NSObject>

@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly, weak) UIScrollView *scrollView;

- (void)decrementInsetHeight:(double)arg1;
- (void)incrementInsetHeight:(double)arg1;
- (void)refreshControl:(UIRefreshControl *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
@end

