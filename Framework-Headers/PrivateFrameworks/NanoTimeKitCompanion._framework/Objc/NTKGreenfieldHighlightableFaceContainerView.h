//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableSet, NTKFace, NTKFaceViewController;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView
{
    NTKFace *_originalFace;
    NTKFaceViewController *_faceViewController;
    UIView *_overlayView;
    UIView *_highlightedDisplaysContainerView;
    NSMutableDictionary *_highlightedSlotToDisplayWrapperViewMapping;
    NSMutableSet *_highlightedSlots;
    NSMutableDictionary *_slotToTemplateMapping;
}

+ (id)_createFaceForDisplayingFrom:(id)arg1;
- (void).cxx_destruct;
- (void)_toggleHighlight:(BOOL)arg1 forComplicationWrapperViewAtSlot:(id)arg2;
- (void)_updateTemplateForSlot:(id)arg1;
- (id)initWithFace:(id)arg1;
- (void)layoutSubviews;
- (void)setComplicationDisplayViewState:(long long)arg1 forSlot:(id)arg2;
- (void)setTemplate:(id)arg1 forSlot:(id)arg2;

@end
