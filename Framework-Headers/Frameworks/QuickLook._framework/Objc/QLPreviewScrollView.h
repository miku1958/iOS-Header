//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QuickLook/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol QLPreviewScrollViewZoomDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _inSizeChange;
    struct CGSize _lastUpdatedSize;
    BOOL _readyToCancelPanGesture;
    BOOL _needsZoomUpdate;
    BOOL _shouldFit;
    double _minZoomScale;
    double _maxZoomScale;
    double _pinchMaxZoomScale;
    double _fillZoomScale;
    double _fitZoomScale;
    double _contentIsSmallerThanView;
    id<QLPreviewScrollViewZoomDelegate> _zoomDelegate;
    struct CGSize _contentViewSize;
}

@property (readonly) double contentIsSmallerThanView; // @synthesize contentIsSmallerThanView=_contentIsSmallerThanView;
@property (nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double fillZoomScale; // @synthesize fillZoomScale=_fillZoomScale;
@property (readonly) double fitZoomScale; // @synthesize fitZoomScale=_fitZoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) double maxZoomScale; // @synthesize maxZoomScale=_maxZoomScale;
@property (readonly) double minZoomScale; // @synthesize minZoomScale=_minZoomScale;
@property (nonatomic) BOOL needsZoomUpdate; // @synthesize needsZoomUpdate=_needsZoomUpdate;
@property (readonly) double pinchMaxZoomScale; // @synthesize pinchMaxZoomScale=_pinchMaxZoomScale;
@property BOOL shouldFit; // @synthesize shouldFit=_shouldFit;
@property (readonly) Class superclass;
@property (weak) id<QLPreviewScrollViewZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;

- (void).cxx_destruct;
- (double)_maxZoomScaleForContentSize:(struct CGSize)arg1;
- (void)_updateScrollViewZomming;
- (id)init;
- (void)layoutSubviews;
- (void)resetZoomScale;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)updateZoomScales;
- (void)updateZoomScalesWithSize:(struct CGSize)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;

@end
