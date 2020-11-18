//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UILAPropertySource-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, UIView, _UILAConfigurationHistory, _UILayoutSpacer;
@protocol _UILAPropertySource;

__attribute__((visibility("hidden")))
@interface _UILayoutArrangement : NSObject <_UILAPropertySource>
{
    NSMutableSet *_incomingItems;
    NSMutableSet *_outgoingItems;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableArray *_canvasConnectionConstraints;
    BOOL _awaitingAnimationLayoutPass;
    BOOL _layoutFillsCanvas;
    BOOL _layoutUsesCanvasMarginsWhenFilling;
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;
    NSMutableArray *_mutableItems;
    _UILayoutSpacer *_spanningLayoutGuide;
    _UILAConfigurationHistory *_configurationHistory;
    UIView *_canvas;
    long long _axis;
}

@property (readonly, nonatomic) BOOL _awaitingAnimationLayoutPass; // @synthesize _awaitingAnimationLayoutPass;
@property (readonly, strong, nonatomic) _UILAConfigurationHistory *_configurationHistory; // @synthesize _configurationHistory;
@property (readonly, nonatomic) NSSet *_hiddenItems;
@property (readonly, nonatomic) NSSet *_incomingItems;
@property (strong, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems; // @synthesize _mutableItems;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *_outgoingItems;
@property (readonly, nonatomic) id<_UILAPropertySource> _propertySource;
@property (readonly, strong, nonatomic) _UILayoutSpacer *_spanningLayoutGuide; // @synthesize _spanningLayoutGuide;
@property (strong, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget; // @synthesize _unanimatedConfigurationTarget;
@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (weak, nonatomic) UIView *canvas; // @synthesize canvas=_canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;
- (void).cxx_destruct;
- (long long)_axisForSpanningLayoutGuide;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (long long)_centerAttributeForCanvasConnections;
- (void)_clearAllConstraintsArrays;
- (void)_clearCanvasConnectionConstraints;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_createSpanningLayoutGuide;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (long long)_dimensionAttributeForCurrentAxis;
- (BOOL)_hasStaleConfiguration;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (BOOL)_itemWantsLayoutAsIfVisible:(id)arg1;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (long long)_minAttributeForCanvasConnections;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_registerAnimationRequest;
- (void)_removeSpanningLayoutGuide;
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;
- (void)_updateArrangementConstraints;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (void)_updateConfigurationHistory;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItem:(id)arg1;

@end
