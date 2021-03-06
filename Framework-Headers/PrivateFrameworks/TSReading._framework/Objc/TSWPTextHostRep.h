//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDContainerRep-Protocol.h>
#import <TSReading/TSKHighlightArrayControllerProtocol-Protocol.h>
#import <TSReading/TSWPTextEditingHostRep-Protocol.h>

@class NSArray, NSObject, NSString, TSKHighlightArrayController, TSWPShapeRep;
@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol>
{
    TSWPShapeRep *_editingRep;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    NSObject<TSKSearchReference> *_activeSearchReference;
    NSArray *_searchReferences;
}

@property (strong, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSKHighlightArrayController *highlightArrayController; // @synthesize highlightArrayController=_highlightArrayController;
@property (strong, nonatomic) TSKHighlightArrayController *pulseArrayController; // @synthesize pulseArrayController=_pulseArrayController;
@property (strong, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useFindOverlayers;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (id)childReps;
- (void)dealloc;
- (BOOL)doesRepContainSearchReference:(id)arg1;
- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(BOOL)arg3;
- (id)hitRep:(struct CGPoint)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(BOOL)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)updateChildrenFromLayout;
- (void)updateFindAnimationWithAnimatingPulse:(BOOL)arg1;
- (void)updateHighlights;
- (void)willBeRemoved;

@end

