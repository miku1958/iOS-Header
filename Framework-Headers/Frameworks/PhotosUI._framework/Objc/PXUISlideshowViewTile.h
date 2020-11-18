//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIImageTile.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXUIFloatingContentView, UIView, UIViewController;
@protocol PXUISlideshowViewTileDelegate;

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile>
{
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
    BOOL _slideshowViewHidden;
    UIViewController *_slideshowViewController;
    id<PXUISlideshowViewTileDelegate> _delegate;
    UIView *__contentView;
    UIView *__slideshowSnapshotView;
}

@property (strong, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (strong, nonatomic, setter=_setSlideshowSnapshotView:) UIView *_slideshowSnapshotView; // @synthesize _slideshowSnapshotView=__slideshowSnapshotView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXUISlideshowViewTileDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *slideshowViewController; // @synthesize slideshowViewController=_slideshowViewController;
@property (nonatomic, getter=isSlideshowViewHidden) BOOL slideshowViewHidden; // @synthesize slideshowViewHidden=_slideshowViewHidden;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_updateContentViewFrame;
- (void)_updateContentViewVisibility;
- (void)_updateSubviewOrdering;
- (void)becomeReusable;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;

@end

