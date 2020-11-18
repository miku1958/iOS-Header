//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKToolbarViewController.h>

#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignaturesViewControllerDelegate-Protocol.h>
#import <AnnotationKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AKColorPickerViewController, AKFloatingAttributePickerViewController, AKLineStylesViewController, AKSignaturesViewController_iOS, AKTextAttributesViewController, AKUndoRedoViewController, NSArray, NSLayoutConstraint, NSString, UIAlertController, UIBarButtonItem, UIGestureRecognizer, UIView;

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIView *_attributeToolbarContainer;
    UIBarButtonItem *_richSketchButton;
    UIBarButtonItem *_sketchButton;
    UIBarButtonItem *_textButton;
    UIBarButtonItem *_loupeButton;
    UIBarButtonItem *_signatureButton;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_textStyleButton;
    UIBarButtonItem *_lineStyleButton;
    UIBarButtonItem *_strokeColorButton;
    NSArray *_staticToolbarItems;
    UIGestureRecognizer *_longPressGestureRecognizer;
    UIAlertController *_signaturesAlertController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKLineStylesViewController *_lineStylesViewController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKColorPickerViewController *_colorPickerPopoverViewController;
    AKUndoRedoViewController *_undoPopoverViewController;
    AKFloatingAttributePickerViewController *_attributeToolbarViewController;
    NSLayoutConstraint *_attributeToolbarViewControllerConstraint;
}

@property (readonly, nonatomic) double additionalOffset;
@property (strong, nonatomic) UIView *attributeToolbarContainer; // @synthesize attributeToolbarContainer=_attributeToolbarContainer;
@property (strong, nonatomic) AKFloatingAttributePickerViewController *attributeToolbarViewController; // @synthesize attributeToolbarViewController=_attributeToolbarViewController;
@property (strong, nonatomic) NSLayoutConstraint *attributeToolbarViewControllerConstraint; // @synthesize attributeToolbarViewControllerConstraint=_attributeToolbarViewControllerConstraint;
@property (strong, nonatomic) AKColorPickerViewController *colorPickerPopoverViewController; // @synthesize colorPickerPopoverViewController=_colorPickerPopoverViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBarButtonItem *lineStyleButton; // @synthesize lineStyleButton=_lineStyleButton;
@property (strong, nonatomic) AKLineStylesViewController *lineStylesViewController; // @synthesize lineStylesViewController=_lineStylesViewController;
@property (strong, nonatomic) UIGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (strong, nonatomic) UIBarButtonItem *loupeButton; // @synthesize loupeButton=_loupeButton;
@property (strong, nonatomic) UIBarButtonItem *richSketchButton; // @synthesize richSketchButton=_richSketchButton;
@property (strong, nonatomic) UIBarButtonItem *signatureButton; // @synthesize signatureButton=_signatureButton;
@property (strong, nonatomic) UIAlertController *signaturesAlertController; // @synthesize signaturesAlertController=_signaturesAlertController;
@property (strong, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController; // @synthesize signaturesSheetViewController=_signaturesSheetViewController;
@property (strong, nonatomic) UIBarButtonItem *sketchButton; // @synthesize sketchButton=_sketchButton;
@property (strong, nonatomic) NSArray *staticToolbarItems; // @synthesize staticToolbarItems=_staticToolbarItems;
@property (strong, nonatomic) UIBarButtonItem *strokeColorButton; // @synthesize strokeColorButton=_strokeColorButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) AKTextAttributesViewController *textAttributesViewController; // @synthesize textAttributesViewController=_textAttributesViewController;
@property (strong, nonatomic) UIBarButtonItem *textButton; // @synthesize textButton=_textButton;
@property (strong, nonatomic) UIBarButtonItem *textStyleButton; // @synthesize textStyleButton=_textStyleButton;
@property (strong, nonatomic) UIBarButtonItem *undoButton; // @synthesize undoButton=_undoButton;
@property (strong, nonatomic) AKUndoRedoViewController *undoPopoverViewController; // @synthesize undoPopoverViewController=_undoPopoverViewController;

- (void).cxx_destruct;
- (long long)_attributeTagForCurrentSelectionState;
- (id)_barButtonForToolbarType:(unsigned long long)arg1;
- (void)_buildBasicItems;
- (id)_buildUndoAlertController;
- (id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)_deleteSelectedItems:(id)arg1;
- (void)_dismissCurrentlyPresentedPopover;
- (id)_doodleModeToolbarImage;
- (void)_layoutAttributeContainer;
- (void)_layoutToolbarForTraitCollection:(id)arg1;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)_setupPassthroughViewsForViewController:(id)arg1;
- (void)_showColorPickerPopover:(id)arg1;
- (void)_showLineStylePopover:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlert:(id)arg1;
- (void)_sketchButtonAction:(id)arg1;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)_undoButtonAction:(id)arg1;
- (void)_undoLongPressAction:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2;
- (BOOL)_validateRedoButton;
- (BOOL)_validateUndoButton;
- (void)dealloc;
- (void)dismissAttributeToolbarForSelectedAnnotations;
- (void)dismissPresentedPopovers;
- (id)initWithController:(id)arg1;
- (BOOL)isPresentingPopovers;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)revalidateItems;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned long long)arg2;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)syncUIToSelectedColor;
- (void)traitCollectionDidChange:(id)arg1;

@end

