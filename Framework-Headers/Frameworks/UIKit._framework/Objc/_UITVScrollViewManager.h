//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class CASpringAnimation, NSString, UIScrollView, UIView;
@protocol _UITVScrollViewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver>
{
    BOOL _delegateScrollViewManagerDidFinishScrolling;
    BOOL _useCustomMaskForScrolling;
    id<_UITVScrollViewManagerDelegate> _delegate;
    UIScrollView *_scrollView;
    long long _scrollStyle;
    CASpringAnimation *_scrollAnimation;
    UIView *_snapshotViewForWindow;
    struct CGPoint _targetOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UITVScrollViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CASpringAnimation *scrollAnimation; // @synthesize scrollAnimation=_scrollAnimation;
@property (nonatomic) long long scrollStyle; // @synthesize scrollStyle=_scrollStyle;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) UIView *snapshotViewForWindow; // @synthesize snapshotViewForWindow=_snapshotViewForWindow;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint targetOffset; // @synthesize targetOffset=_targetOffset;
@property (nonatomic) BOOL useCustomMaskForScrolling; // @synthesize useCustomMaskForScrolling=_useCustomMaskForScrolling;

- (void).cxx_destruct;
- (long long)_currentPage;
- (id)_customScrollViewMaskForScrolling:(struct CGRect)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_removeScreenshotViewIfNeeded;
- (void)_scrollAnimationDidEnd:(id)arg1;
- (void)_scrollToContentOffset:(struct CGPoint)arg1;
- (void)_tearDown;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;

@end

