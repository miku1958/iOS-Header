//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDEditor-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo, TSDInteractiveCanvasController, TSDMultiPaneController, TSKSelection;

@interface TSDDrawableEditor : NSObject <TSDEditor>
{
    TSDInteractiveCanvasController *mICC;
    NSSet *mInfos;
    TSDMultiPaneController *mGraphicInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDDrawableInfo *firstInfo;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) TSDDrawableInfo *info;
@property (strong, nonatomic) NSSet *infos; // @synthesize infos=mInfos;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
@property (readonly, nonatomic) NSSet *layouts;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (strong, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingFirstInfo;
+ (id)keyPathsForValuesAffectingInfo;
+ (id)keyPathsForValuesAffectingLayouts;
+ (BOOL)shouldSuppressMultiselection;
- (void)applyStylePresetWithIndex:(id)arg1;
- (void)beginChangingStrokeWidth:(id)arg1;
- (BOOL)canAddOrShowComment;
- (int)canPerformAction:(SEL)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didChangeStrokeWidth:(id)arg1;
- (id)documentRoot;
- (void)endChangingStrokeWidth:(id)arg1;
- (id)imageForPreset:(id)arg1 size:(struct CGSize)arg2;
- (id)infosOfClass:(Class)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;
- (void)presetSelected:(id)arg1 sender:(id)arg2;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (id)selectedLayoutsSupportingRotation;
- (void)setStroke:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)stroke;
- (id)strokeColor;
- (id)strokeColorPickerTitle;
- (id)strokeSwatches;
- (double)strokeWidthForNormalizedWidth:(double)arg1;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
- (id)topLevelInspectorAutosaveName;
- (id)viewControllerForMoreStyleOptions;

@end

