//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMutableDictionary, PUPhotoSelectionManager, PXUIAutoScroller;
@protocol PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface PUSwipeSelectionManager : NSObject
{
    NSMutableDictionary *_oldIndexesPaths;
    id<PUSwipeSelectionManagerDelegate> _delegate;
    id<PUSwipeSelectionManagerDataSource> _datasource;
    PXUIAutoScroller *_selectionAutoScroller;
    long long __selectionMode;
    NSIndexPath *__startingIndexPath;
    PUPhotoSelectionManager *__restorePhotoSelectionManager;
    id __pausingChangesToken;
    struct CGPoint _screenTouchLocation;
}

@property (strong, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken; // @synthesize _pausingChangesToken=__pausingChangesToken;
@property (strong, nonatomic, setter=_setRestorePhotoSelectionManager:) PUPhotoSelectionManager *_restorePhotoSelectionManager; // @synthesize _restorePhotoSelectionManager=__restorePhotoSelectionManager;
@property (nonatomic, setter=_setSelectionMode:) long long _selectionMode; // @synthesize _selectionMode=__selectionMode;
@property (copy, nonatomic, setter=_setStartingIndexPath:) NSIndexPath *_startingIndexPath; // @synthesize _startingIndexPath=__startingIndexPath;
@property (weak, nonatomic) id<PUSwipeSelectionManagerDataSource> datasource; // @synthesize datasource=_datasource;
@property (weak, nonatomic) id<PUSwipeSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) struct CGPoint screenTouchLocation; // @synthesize screenTouchLocation=_screenTouchLocation;
@property (strong, nonatomic) PXUIAutoScroller *selectionAutoScroller; // @synthesize selectionAutoScroller=_selectionAutoScroller;

- (void).cxx_destruct;
- (id)_indexesPathsRangeForIndexPath:(id)arg1;
- (long long)_selectionModeForRestoringStateOfIndexPath:(id)arg1;
- (void)beginSelectionFromIndexPath:(id)arg1;
- (void)dealloc;
- (void)endSelection;
- (id)init;
- (id)initWithSelectionMode:(long long)arg1 photoSelectionManager:(id)arg2;
- (void)updateSelectionWithCurrentIndexPath:(id)arg1 leftClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;

@end

