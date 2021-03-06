//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAutoScrollerDelegate-Protocol.h>

@class NSIndexPath, NSSet, NSString, PXUIAutoScroller, UIGestureRecognizer, UIScrollView;
@protocol PXPeopleSwipeSelectionManagerDelegate;

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate>
{
    CDStruct_0794f076 _needsUpdateFlags;
    struct {
        BOOL respondsToItemIndexPathAtLocation;
        BOOL respondsToItemIndexPathClosestLeadingLocation;
        BOOL respondsToItemIndexPathClosestAboveLocation;
    } _delegateFlags;
    id<PXPeopleSwipeSelectionManagerDelegate> _delegate;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIGestureRecognizer *_swipeGestureRecognizer;
    NSIndexPath *_startingIndexPath;
    NSIndexPath *_currentIndexPath;
    NSSet *_selectedIndexPathsBeforeSwipe;
    id _pausingChangesToken;
    PXUIAutoScroller *_autoScroller;
}

@property (readonly, nonatomic) PXUIAutoScroller *autoScroller; // @synthesize autoScroller=_autoScroller;
@property (strong, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPeopleSwipeSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSelecting;
@property (strong, nonatomic) id pausingChangesToken; // @synthesize pausingChangesToken=_pausingChangesToken;
@property (readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (copy, nonatomic) NSSet *selectedIndexPathsBeforeSwipe; // @synthesize selectedIndexPathsBeforeSwipe=_selectedIndexPathsBeforeSwipe;
@property (strong, nonatomic) NSIndexPath *startingIndexPath; // @synthesize startingIndexPath=_startingIndexPath;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;

- (void).cxx_destruct;
- (void)_beginSelectionFromIndexPath:(id)arg1;
- (void)_endSelection;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_invalidateSelectedIndexPaths;
- (id)_itemIndexPathAtLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint)arg1;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint)arg1;
- (void)_updateSelectedIndexPaths;
- (void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithScrollView:(id)arg1;

@end

