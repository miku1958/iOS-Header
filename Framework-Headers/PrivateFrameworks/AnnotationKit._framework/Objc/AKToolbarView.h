//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/AKAttributePickerViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignaturesViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKToolsListViewControllerDelegate-Protocol.h>
#import <AnnotationKit/PKInlineColorPickerDelegate-Protocol.h>
#import <AnnotationKit/PKInlineInkPickerDelegate-Protocol.h>
#import <AnnotationKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AKAttributePickerViewController, AKController, AKSignatureCreationViewController_iOS, AKSignaturesViewController_iOS, AKTextAttributesViewController, AKToolbarBackgroundView, AKToolsListViewController, NSLayoutConstraint, NSString, PKInlineColorPicker, PKInlineInkPicker, UIAlertController, UIBarButtonItem, UIToolbar;

@interface AKToolbarView : UIView <PKInlineInkPickerDelegate, PKInlineColorPickerDelegate, AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIToolbar *_toolbar;
    PKInlineInkPicker *_pencilTools;
    PKInlineColorPicker *_compactColorPicker;
    AKToolbarBackgroundView *_backgroundView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shapesPickerButton;
    UIBarButtonItem *_attributesPickerButton;
    UIBarButtonItem *_currentColorButton;
    UIBarButtonItem *_undoRedoFixedSpace;
    UIBarButtonItem *_attributesAddShapeFixedSpace;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSLayoutConstraint *_pencilToolsBottomConstraint;
    NSLayoutConstraint *_pencilToolsWidthConstraint;
    NSLayoutConstraint *_colorPickerBottomConstraint;
    NSLayoutConstraint *_colorPickerWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKSignatureCreationViewController_iOS *_signaturesCreationController;
    AKToolsListViewController *_toolsListViewController;
    AKAttributePickerViewController *_attributePickerViewController;
    BOOL _showAttributePicker;
    BOOL _expandCompactColorPicker;
    BOOL _shouldUseCachedSafeAreaInsets;
    struct UIEdgeInsets _cachedSafeAreaInsets;
    BOOL _undoRedoButtonsHidden;
    BOOL _alwaysShowUndoButton;
    BOOL _shareButtonHidden;
    BOOL _translucent;
    BOOL _contentsHidden;
    AKController *_annotationController;
}

@property (nonatomic) BOOL alwaysShowUndoButton; // @synthesize alwaysShowUndoButton=_alwaysShowUndoButton;
@property (weak, nonatomic) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property (nonatomic) BOOL contentsHidden; // @synthesize contentsHidden=_contentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL shareButtonAction;
@property (nonatomic, getter=isShareButtonHidden) BOOL shareButtonHidden; // @synthesize shareButtonHidden=_shareButtonHidden;
@property (nonatomic) id shareButtonTarget;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property (nonatomic) BOOL undoRedoButtonsHidden; // @synthesize undoRedoButtonsHidden=_undoRedoButtonsHidden;

+ (id)redoButtonImage;
+ (id)redoButtonImageWithStyle:(unsigned long long)arg1;
+ (id)undoButtonImage;
+ (id)undoButtonImageWithStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_inkPicker:(id)arg1 didPickColor:(id)arg2;
- (void)_presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_redo:(id)arg1;
- (struct UIEdgeInsets)_safeAreaInsetsWithCachingIfNeeded;
- (void)_saveCachedSafeAreaInsets;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_shouldUseCachedSafeAreaInsets:(BOOL)arg1;
- (void)_showColorPicker:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_undoAll:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(BOOL)arg2;
- (id)createUndoViewController;
- (void)dealloc;
- (void)dismissPresentedPopovers;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)inkPicker;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (BOOL)inlineInkPickerShouldChangeToolColorForSelectedColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isPresentingPopover;
- (BOOL)isPresentingPopovers;
- (unsigned long long)layoutForSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverPresentingController;
- (id)presentedViewController;
- (void)resetToLastDrawingTool;
- (void)revalidateItems;
- (id)selectedAnnotations;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOpaque:(BOOL)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (BOOL)shouldUseCompactHeight;
- (BOOL)shouldUseCompactWidth;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)upateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1;
- (id)viewControllerForPopoverPresentationFromInlineInkPicker:(id)arg1;

@end

