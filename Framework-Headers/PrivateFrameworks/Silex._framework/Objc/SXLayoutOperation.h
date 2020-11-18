//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <Silex/SXLayouterDelegate-Protocol.h>

@class NSString, SXLayoutAttributes, SXLayoutBlueprint, SXLayoutDataProvider;
@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory;

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate>
{
    BOOL _executing;
    BOOL _finished;
    double _constrainedWidth;
    SXLayoutDataProvider *_layoutDataProvider;
    SXLayoutAttributes *_layoutAttributes;
    SXLayoutBlueprint *_layoutBlueprint;
    NSString *_targetComponentIdentifier;
    CDUnknownBlockType _beforeBlock;
    CDUnknownBlockType _afterBlock;
    id<SXComponentSizerEngine> _componentSizerEngine;
    id<SXLayoutBlueprintFactory> _layoutBlueprintFactory;
    struct CGSize _viewportSize;
}

@property (copy, nonatomic, setter=afterLayout:) CDUnknownBlockType afterBlock; // @synthesize afterBlock=_afterBlock;
@property (copy, nonatomic, setter=beforeLayout:) CDUnknownBlockType beforeBlock; // @synthesize beforeBlock=_beforeBlock;
@property (readonly, nonatomic) id<SXComponentSizerEngine> componentSizerEngine; // @synthesize componentSizerEngine=_componentSizerEngine;
@property (readonly, nonatomic) double constrainedWidth; // @synthesize constrainedWidth=_constrainedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL executing; // @synthesize executing=_executing;
@property BOOL finished; // @synthesize finished=_finished;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SXLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property (strong, nonatomic) SXLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
@property (readonly, nonatomic) id<SXLayoutBlueprintFactory> layoutBlueprintFactory; // @synthesize layoutBlueprintFactory=_layoutBlueprintFactory;
@property (readonly, nonatomic) SXLayoutDataProvider *layoutDataProvider; // @synthesize layoutDataProvider=_layoutDataProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
@property (readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;

- (void).cxx_destruct;
- (id)createLayoutBlueprintForLayoutDataProvider:(id)arg1 documentColumnLayout:(id)arg2;
- (void)doFinishBookKeeping;
- (void)doStartBookKeeping;
- (void)finalizeLayoutBlueprint:(id)arg1 startOffset:(struct CGPoint)arg2;
- (id)initWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3 componentSizerEngine:(id)arg4 layoutBlueprintFactory:(id)arg5;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isFinishedLayoutBlueprint:(id)arg1 forLayoutDataProvider:(id)arg2;
- (BOOL)isValidLayoutBlueprint:(id)arg1 viewportSize:(struct CGSize)arg2;
- (void)layouter:(id)arg1 didFinishLayoutForComponent:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(BOOL *)arg4;
- (void)prepareLayoutBlueprint:(id)arg1;
- (void)registerComponent:(id)arg1 toLayoutBlueprint:(id)arg2 layoutDataProvider:(id)arg3 documentColumnLayout:(id)arg4;
- (void)start;
- (void)startLayoutWorkForBlueprint:(id)arg1;
- (void)updateLayoutBlueprint:(id)arg1 usingLayoutDataProvider:(id)arg2;

@end
