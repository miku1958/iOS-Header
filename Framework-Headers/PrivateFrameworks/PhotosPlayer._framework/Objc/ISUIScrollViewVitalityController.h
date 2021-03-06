//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISScrollViewVitalityController.h>

#import <PhotosPlayer/UIScrollViewDelegate-Protocol.h>

@class ISUIVisibilityOffsetHelper, NSString, UIScrollView;

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController <UIScrollViewDelegate>
{
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;
    UIScrollView *__scrollView;
}

@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reduceMotionDidChange:(id)arg1;
- (BOOL)canPerformVitality;
- (id)init;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)visibilityOffsetHelper;

@end

