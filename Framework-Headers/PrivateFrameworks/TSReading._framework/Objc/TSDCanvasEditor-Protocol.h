//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDEditor-Protocol.h>
#import <TSReading/TSDSubcommandProvider-Protocol.h>
#import <TSReading/TSDTextInput-Protocol.h>

@class NSArray, NSObject, NSSet, TSDCanvasEditorHelper, TSDDrawableInfo, TSDExteriorTextWrap, TSDInteractiveCanvasController, TSDRep, TSKSelection, TSPObject, TSPPasteboard;
@protocol TSDCanvasSelection, TSDContainerInfo, TSDEditor, TSDInfo;

@protocol TSDCanvasEditor <TSDEditor, TSDSubcommandProvider, TSDTextInput>

@property (readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
@property (readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) TSPObject *modelForSelection;

+ (id<TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1;
+ (id<TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
- (BOOL)canGroupDrawable:(TSDDrawableInfo *)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (BOOL)canvasEditorCanCopyWithSender:(id)arg1;
- (BOOL)canvasEditorCanCutWithSender:(id)arg1;
- (BOOL)canvasEditorCanDeleteWithSender:(id)arg1;
- (BOOL)canvasEditorCanDuplicateWithSender:(id)arg1;
- (BOOL)canvasEditorCanGroupWithSender:(id)arg1;
- (BOOL)canvasEditorCanSelectAllWithSender:(id)arg1;
- (BOOL)canvasEditorCanUngroupWithSender:(id)arg1;
- (void)canvasInfosDidChange;
- (id<TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1;
- (id<TSDCanvasSelection>)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
- (void)connectWithConnectionLine:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(TSPPasteboard *)arg1 withSender:(id)arg2;
- (unsigned long long)countOfDrawables;
- (NSArray *)drawables;
- (NSObject<TSDEditor> *)editorToPopToOnEndEditing;
- (id)initWithInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (BOOL)isRepSelectable:(TSDRep *)arg1;
- (BOOL)isSelectedInfo:(NSObject<TSDInfo> *)arg1;
- (void)repWasCreated:(TSDRep *)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionToInfo:(TSDDrawableInfo *)arg1;
- (void)setSelectionToInfos:(NSSet *)arg1;
- (void)setSelectionToRep:(TSDRep *)arg1;
- (BOOL)shouldPushNewEditorForNewSelection;
- (BOOL)shouldUseAlternateSelectionHighlight;
- (void)teardown;

@optional
- (TSDExteriorTextWrap *)exteriorTextWrapForInfos:(NSSet *)arg1;
- (void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 forInfos:(NSSet *)arg2;
- (void)setExteriorTextWrapMargin:(double)arg1 forInfos:(NSSet *)arg2;
@end
