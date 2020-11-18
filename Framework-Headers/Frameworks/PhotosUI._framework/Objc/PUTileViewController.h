//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileController.h>

@class NSArray, NSTimer, UIView;

@interface PUTileViewController : PUTileController
{
    BOOL _isReadyForDisplay;
    BOOL __edgeAntialiasingEnabled;
    NSArray *_gestureRecognizers;
    UIView *_view;
    UIView *__tintView;
    UIView *__visibleRectView;
    CDUnknownBlockType __onReadyToDisplayBlock;
    NSTimer *__readinessTimer;
    UIView *__maskView;
}

@property (nonatomic, setter=_setEdgeAntialiasingEnabled:) BOOL _edgeAntialiasingEnabled; // @synthesize _edgeAntialiasingEnabled=__edgeAntialiasingEnabled;
@property (strong, nonatomic, setter=_setMaskView:) UIView *_maskView; // @synthesize _maskView=__maskView;
@property (copy, nonatomic, setter=_setOnReadyToDisplayBlock:) CDUnknownBlockType _onReadyToDisplayBlock; // @synthesize _onReadyToDisplayBlock=__onReadyToDisplayBlock;
@property (strong, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer; // @synthesize _readinessTimer=__readinessTimer;
@property (strong, nonatomic, setter=_setTintView:) UIView *_tintView; // @synthesize _tintView=__tintView;
@property (strong, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView; // @synthesize _visibleRectView=__visibleRectView;
@property (strong, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property (nonatomic, setter=_setReadyForDisplay:) BOOL isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property (readonly, nonatomic) BOOL isViewLoaded;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_handleReadinessForced:(BOOL)arg1;
- (void)_invalidateTintView;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setView:(id)arg1;
- (void)_updateTintView;
- (void)_updateVisibleRectView;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeVisibleRect;
- (BOOL)isPresentationActive;
- (void)loadView;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForReuse;
- (id)presentationLayoutInfo;
- (void)removeAllAnimations;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (void)viewDidLoad;
- (struct CGRect)visibleRect;
- (BOOL)wantsVisibleRectChanges;

@end

