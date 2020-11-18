//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSLayoutConstraint, NSString, PKDrawingPaletteInputAssistantView, PKPaletteColorPickerContainerView, PKPaletteColorPickerView, PKPaletteToolPickerContainerView, PKPaletteToolPickerView, UIStackView;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    BOOL _isSmallestSupportedCompactWidth;
    BOOL _colorPickerViewVisible;
    BOOL _inputAssistantViewVisible;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerContainerView *_toolPickerContainerView;
    PKPaletteColorPickerContainerView *_colorPickerContainerView;
    PKDrawingPaletteInputAssistantView *_paletteInputAssistantView;
    long long _contextEditingMode;
    UIStackView *_stackView;
    NSLayoutConstraint *_toolPickerContainerViewWidthConstraint;
    NSLayoutConstraint *_toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint *_compactToolPickerContainerViewWidthConstraint;
}

@property (strong, nonatomic) PKPaletteColorPickerContainerView *colorPickerContainerView; // @synthesize colorPickerContainerView=_colorPickerContainerView;
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic, getter=isColorPickerViewVisible) BOOL colorPickerViewVisible; // @synthesize colorPickerViewVisible=_colorPickerViewVisible;
@property (strong, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint; // @synthesize compactToolPickerContainerViewWidthConstraint=_compactToolPickerContainerViewWidthConstraint;
@property (nonatomic) long long contextEditingMode; // @synthesize contextEditingMode=_contextEditingMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInputAssistantViewVisible) BOOL inputAssistantViewVisible; // @synthesize inputAssistantViewVisible=_inputAssistantViewVisible;
@property (nonatomic) BOOL isSmallestSupportedCompactWidth; // @synthesize isSmallestSupportedCompactWidth=_isSmallestSupportedCompactWidth;
@property (readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView; // @synthesize paletteInputAssistantView=_paletteInputAssistantView;
@property (nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView; // @synthesize toolPickerContainerView=_toolPickerContainerView;
@property (strong, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint; // @synthesize toolPickerContainerViewHeightConstraint=_toolPickerContainerViewHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint; // @synthesize toolPickerContainerViewWidthConstraint=_toolPickerContainerViewWidthConstraint;
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;

- (void).cxx_destruct;
- (double)_stackViewSpacing;
- (void)_updateUI;
- (BOOL)_useCompactSize;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (void)traitCollectionDidChange:(id)arg1;

@end
