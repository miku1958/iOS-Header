//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;
@protocol MKOverlayContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOverlayContainerView : UIView
{
    NSMutableOrderedSet *_overlays[2];
    NSMapTable *_overlayToDrawable[2];
    NSMutableArray *_drawables[2];
    NSMutableArray *_vkOverlays[2];
    UIView *_viewContainers[2];
    id<MKOverlayContainerViewDelegate> _delegate;
    double _mapZoomScale;
}

@property (weak, nonatomic) id<MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property (readonly, nonatomic) NSArray *overlays;

- (void).cxx_destruct;
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_02837cd9)arg2 level:(long long)arg3;
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;
- (long long)_levelForOverlay:(id)arg1 exists:(BOOL *)arg2;
- (CDStruct_02837cd9)_mapRectWithFractionOfVisible:(double)arg1;
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (void)_updateContentScale:(id)arg1;
- (id)_viewContainerForLevel:(long long)arg1;
- (void)addAndRemoveOverlayViews;
- (void)addOverlay:(id)arg1;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (void)didMoveToWindow;
- (id)drawableForOverlay:(id)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (id)overlaysInLevel:(long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;

@end

