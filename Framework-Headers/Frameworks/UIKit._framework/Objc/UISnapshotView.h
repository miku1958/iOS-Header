//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIStatusBarTinting-Protocol.h>

@class NSMutableArray, NSString, UIColor, UIImageView;

@interface UISnapshotView : UIView <UIStatusBarTinting>
{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentBeyondBounds;
    struct UIEdgeInsets _edgePadding;
    struct UIEdgeInsets _edgeInsets;
    struct CGPoint _contentOffset;
    UIColor *_edgePaddingColor;
    UIView *_imageView;
    NSMutableArray *_edgePaddingViews;
    struct CGRect _snapshotRect;
    UIImageView *_shadowView;
    unsigned int _disableEdgeAntialiasing:1;
    unsigned int _disableVerticalStretch:1;
    UIColor *_statusBarTintColor;
}

@property (strong, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
@property (nonatomic, getter=_contentOffset, setter=_setContentOffset:) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property (readonly, nonatomic, getter=_contentSize) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic) struct UIEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
@property (strong, nonatomic) UIColor *edgePaddingColor; // @synthesize edgePaddingColor=_edgePaddingColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property (nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) struct CGRect snapshotRect;
@property (readonly, nonatomic, getter=_snapshotView) UIView *snapshotView; // @synthesize snapshotView=_imageView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;

- (void)_addEdgePaddingViewInRect:(struct CGRect)arg1;
- (struct CGRect)_contentsCenterForEdgePadding:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_drawEdges:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)_edgePadding;
- (void)_positionImageView;
- (void)_updateContentsRect;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;
- (void)captureSnapshotRect:(struct CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentStretch:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
