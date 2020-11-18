//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class WKScrollViewDelegateForwarder, WKWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIScrollView
{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
}

@property (readonly, nonatomic) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // @synthesize internalDelegate=_internalDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL *)arg5;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;
- (void)_updateDelegate;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end

