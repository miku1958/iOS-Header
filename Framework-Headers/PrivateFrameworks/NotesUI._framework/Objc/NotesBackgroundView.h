//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAccessibilityChildReparentingTarget-Protocol.h>
#import <NotesUI/NotesTextureScrolling-Protocol.h>

@class NSLayoutConstraint, NSString, NotesTextureBackgroundView, NotesTextureView;
@protocol ICAccessibilityChildReparentingController, ICAccessibilityChildReparentingProvider;

@interface NotesBackgroundView : UIView <NotesTextureScrolling, ICAccessibilityChildReparentingTarget>
{
    BOOL _contentViewVisible;
    BOOL _topViewVisible;
    BOOL _textureViewVisible;
    UIView *_contentView;
    id<ICAccessibilityChildReparentingController> _axChildReparentingController;
    NotesTextureBackgroundView *_textureView;
    NotesTextureBackgroundView *_topTextureView;
    NotesTextureBackgroundView *_bottomTextureView;
    NotesTextureBackgroundView *_bottomSafeAreaTextureView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    id<ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;
}

@property (weak, nonatomic) id<ICAccessibilityChildReparentingController> axChildReparentingController; // @synthesize axChildReparentingController=_axChildReparentingController;
@property (readonly, nonatomic) NotesTextureView *backgroundView;
@property (strong, nonatomic) NotesTextureBackgroundView *bottomSafeAreaTextureView; // @synthesize bottomSafeAreaTextureView=_bottomSafeAreaTextureView;
@property (strong, nonatomic) NotesTextureBackgroundView *bottomTextureView; // @synthesize bottomTextureView=_bottomTextureView;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting; // @synthesize elementForAccessibilityReparenting=_elementForAccessibilityReparenting;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (readonly) Class superclass;
@property (strong, nonatomic) NotesTextureBackgroundView *textureView; // @synthesize textureView=_textureView;
@property (nonatomic, getter=isTextureViewVisible) BOOL textureViewVisible; // @synthesize textureViewVisible=_textureViewVisible;
@property (strong, nonatomic) NotesTextureBackgroundView *topTextureView; // @synthesize topTextureView=_topTextureView;
@property (nonatomic, getter=isTopViewVisible) BOOL topViewVisible; // @synthesize topViewVisible=_topViewVisible;

- (void).cxx_destruct;
- (BOOL)_accessibilityIsScannerGroup;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (id)accessibilityElements;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)addSubviewAboveAllViews:(id)arg1;
- (void)commonInit;
- (void)fadeInBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;
- (void)fadeOutBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint)arg2;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)setBottomToolbarVisible:(BOOL)arg1;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2 topMargin:(double)arg3;
- (void)setupContentViewHomeIndicatorAvoidanceWithSize:(double)arg1;
- (void)snapshotContentIntoSnapshotView:(id)arg1;
- (void)updateConstraintsForBottomToolbar:(id)arg1;

@end
