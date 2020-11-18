//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, NSString, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXUpdater, UIColor, UIVisualEffectView;
@protocol PXCuratedLibraryZoomLevelControlDelegate;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver>
{
    PXUpdater *_updater;
    struct UIEdgeInsets _padding;
    struct CGSize *_segmentSizes;
    double _minimumInterSegmentSpacing;
    struct CGSize _intrinsicSize;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_selectionView;
    UIColor *_selectedButtonTextColor;
    UIColor *_unselectedButtonTextColor;
    NSArray *_selectedButtons;
    NSArray *_unselectedButtons;
    double _selectionPillMargin;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryStyleGuide *_styleGuide;
    id<PXCuratedLibraryZoomLevelControlDelegate> _delegate;
    NSArray *_zoomLevelIdentifiers;
    long long _selectedZoomLevel;
    NSArray *_enabledZoomLevelIdentifiers;
    long long _shrinkLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXCuratedLibraryZoomLevelControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *enabledZoomLevelIdentifiers; // @synthesize enabledZoomLevelIdentifiers=_enabledZoomLevelIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedZoomLevel; // @synthesize selectedZoomLevel=_selectedZoomLevel;
@property (nonatomic) long long shrinkLevel; // @synthesize shrinkLevel=_shrinkLevel;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // @synthesize styleGuide=_styleGuide;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property (readonly, nonatomic) NSArray *zoomLevelIdentifiers; // @synthesize zoomLevelIdentifiers=_zoomLevelIdentifiers;

+ (id)_allZoomLevelIdentifiers;
+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1;
+ (id)_localizedTitleForZoomLevel:(long long)arg1 usingShortVariant:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_invalidateButtonsStyle;
- (void)_invalidateSubviews;
- (void)_updateButtonsStyle;
- (void)_updateSelection;
- (void)_updateSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithViewModel:(id)arg1 styleGuide:(id)arg2;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1;

@end
