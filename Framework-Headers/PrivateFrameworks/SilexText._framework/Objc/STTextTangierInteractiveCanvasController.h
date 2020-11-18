//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPInteractiveCanvasController.h>

@class UIScrollView;
@protocol STTextTangierInteractiveCanvasControllerDataSource;

@interface STTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController
{
    BOOL _forceLayoutAndRenderOnThread;
    BOOL _isSelecting;
    BOOL _startedEditing;
    BOOL _isScrolling;
    BOOL _mightScrollToTop;
    UIScrollView *_scrollView;
    id<STTextTangierInteractiveCanvasControllerDataSource> _dataSource;
}

@property (weak, nonatomic) id<STTextTangierInteractiveCanvasControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) BOOL forceLayoutAndRenderOnThread; // @synthesize forceLayoutAndRenderOnThread=_forceLayoutAndRenderOnThread;
@property (nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property (nonatomic) BOOL isSelecting; // @synthesize isSelecting=_isSelecting;
@property (nonatomic) BOOL mightScrollToTop; // @synthesize mightScrollToTop=_mightScrollToTop;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) BOOL startedEditing; // @synthesize startedEditing=_startedEditing;

+ (void)createCanvasWithDelegate:(id)arg1 outICC:(id *)arg2 outLayerHost:(id *)arg3 iccClass:(Class)arg4 layerHostClass:(Class)arg5;
- (void).cxx_destruct;
- (id)_gestureHitLink:(id)arg1 wpRep:(id *)arg2;
- (BOOL)canHandleGesture:(id)arg1;
- (id)closestRepToPoint:(struct CGPoint)arg1 forStorage:(id)arg2;
- (void)didBeginEditingText;
- (void)endUISession;
- (id)extraMenuItems;
- (id)gestureWithKind:(id)arg1;
- (BOOL)handleGesture:(id)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)i_topLevelLayersForTiling;
- (BOOL)p_currentlyScrolling;
- (BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (BOOL)tappedOnHyperlink:(id)arg1;
- (void)teardown;
- (id)topLevelRepsForHitTesting;

@end

