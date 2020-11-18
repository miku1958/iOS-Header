//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebScrollView.h>

@class WKScrollViewDelegateForwarder, WKWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WKScrollView : UIWebScrollView
{
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    WKWebView<UIScrollViewDelegate> *_internalDelegate;
    double _preferredScrollDecelerationFactor;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property (readonly, nonatomic) double preferredScrollDecelerationFactor; // @synthesize preferredScrollDecelerationFactor=_preferredScrollDecelerationFactor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL *)arg5;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg1;
- (void)_updateDelegate;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setDelegate:(id)arg1;

@end
