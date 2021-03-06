//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class APDCoachingTipView, APDCoachingTipsManager, NSArray, NSMutableArray, NSObject, NSSet, NSString, TSDRep, TSKDocumentRoot, TSKSelection, UIViewController;
@protocol TSDCanvasSelection, TSDInfo, TSKModel, TSKSearchReference;

@protocol TSDEditor <NSObject>

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

- (TSKDocumentRoot *)documentRoot;

@optional
- (void)addContextualMenuItemsToArray:(NSMutableArray *)arg1;
- (BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
- (void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint)arg1;
- (BOOL)canAddOrShowComment;
- (BOOL)canBeginEditingRepOnDoubleTap:(TSDRep *)arg1;
- (BOOL)canBeginPathEditing;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (NSSet *)canvasCoachingTips;
- (struct CGRect)coachingTipManager:(APDCoachingTipsManager *)arg1 coachingTipView:(APDCoachingTipView *)arg2 canvasRectForKey:(NSString *)arg3;
- (void)copy:(id)arg1;
- (void)customAction5:(id)arg1;
- (void)customAction6:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction8:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)didBecomeCurrentEditor;
- (void)didBecomeTextInputEditor;
- (void)didEnterBackground;
- (void)didResignTextInputEditor;
- (id<TSKSearchReference>)editingSearchReference;
- (NSArray *)extraMenuItems;
- (BOOL)ignoreSetSelection:(TSKSelection *)arg1 onInfo:(NSObject<TSDInfo> *)arg2;
- (NSString *)inspectorTabTipKey;
- (NSArray *)level2InspectorViewControllers;
- (id<TSKModel>)model;
- (void)paste:(id)arg1;
- (BOOL)readyToAcceptSelection:(TSKSelection *)arg1 onInfo:(NSObject<TSDInfo> *)arg2;
- (void)reverseDirection:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionWithSearchReference:(id<TSKSearchReference>)arg1;
- (BOOL)shouldEndEditingToBeginEditingRep:(TSDRep *)arg1;
- (BOOL)shouldProhibitAction:(SEL)arg1;
- (BOOL)suppressAutozoom;
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;
- (struct CGRect)targetRectForEditMenu;
- (void)teardown;
- (NSString *)topLevelInspectorAutosaveName;
- (struct CGSize)topLevelInspectorPreferredPopoverSize;
- (NSArray *)topLevelInspectorViewControllers;
- (double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
- (BOOL)wantsToBePushedBackOntoStackForSelection:(TSKSelection<TSDCanvasSelection> *)arg1;
- (void)willEnterForeground;
- (void)willResignCurrentEditor;
- (void)willResignTextInputEditor;
- (UIViewController *)wrapInspectorController;
- (struct CGRect)zoomRectForSelection:(TSKSelection *)arg1;
@end

