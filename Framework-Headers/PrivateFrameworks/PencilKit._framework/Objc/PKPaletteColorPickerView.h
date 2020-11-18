//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteColorPickerControllerDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverUpdating-Protocol.h>
#import <PencilKit/PKPaletteQuickColorPicking-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/UICollectionViewDataSource-Protocol.h>
#import <PencilKit/UICollectionViewDelegate-Protocol.h>
#import <PencilKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaletteMulticolorSwatch, UICollectionView, UIColor, UILongPressGestureRecognizer;
@protocol PKPaletteColorPickerController, PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate;

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> _delegate;
    long long _colorUserInterfaceStyle;
    long long _colorPickerMode;
    UICollectionView *_collectionView;
    NSArray *_swatches;
    PKPaletteMulticolorSwatch *_multicolorSwatch;
    NSArray *_swatchColors;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id<PKPaletteColorPickerController> _colorPickerController;
    UIColor *_analyticsInitialColor;
    long long _analyticsColorChangeCount;
}

@property (nonatomic) long long analyticsColorChangeCount; // @synthesize analyticsColorChangeCount=_analyticsColorChangeCount;
@property (strong, nonatomic) UIColor *analyticsInitialColor; // @synthesize analyticsInitialColor=_analyticsInitialColor;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) id<PKPaletteColorPickerController> colorPickerController; // @synthesize colorPickerController=_colorPickerController;
@property (nonatomic) long long colorPickerMode; // @synthesize colorPickerMode=_colorPickerMode;
@property (nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (strong, nonatomic) PKPaletteMulticolorSwatch *multicolorSwatch; // @synthesize multicolorSwatch=_multicolorSwatch;
@property (nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (strong, nonatomic) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *swatchColors; // @synthesize swatchColors=_swatchColors;
@property (strong, nonatomic) NSArray *swatches; // @synthesize swatches=_swatches;

+ (id)collectionViewFlowLayoutWithItemSize:(struct CGSize)arg1 minimumLineSpacing:(double)arg2 minimumInteritemSpacing:(double)arg3;
- (void).cxx_destruct;
- (BOOL)_colorPickerAllowsColorSelection;
- (void)_enableOrDisableLongPressGesture;
- (unsigned long long)_multicolorSwatchIndexForEdge:(unsigned long long)arg1;
- (struct CGRect)_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceview;
- (void)_reloadSwatchColorsForTraitCollection:(id)arg1;
- (id)_selectedSwatch;
- (void)_setMulticolorSwatchColor:(id)arg1;
- (BOOL)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg1;
- (void)_showExtendedColorPicker;
- (id)_swatchColorsForTraitCollection:(id)arg1;
- (void)_swatchLongPressHandler:(id)arg1;
- (void)_updateUI;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)colorAtPoint:(struct CGPoint)arg1;
- (void)colorPickerControllerDidChangeSelectedColor:(id)arg1;
- (void)dealloc;
- (void)didChangePreferredContentSize:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)reloadColorsForCurrentColorPickerMode;
- (struct CGSize)swatchSize;
- (id)swatchWithColor:(id)arg1;
- (id)swatchWithIdentifier:(id)arg1;
- (void)toggleColorSelectionPopover;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionWithCurrentInterfaceStyle;
- (void)updatePopoverUI;

@end
