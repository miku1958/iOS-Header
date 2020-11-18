//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UILayoutArrangement.h>

#import <UIKit/_UIALAPropertySource-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource>
{
    NSMutableDictionary *_alignmentConstraints;
    unsigned long long _alignment;
}

@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;
- (void).cxx_destruct;
- (void)_addConstraintGroupsAsNecessary;
- (void)_addIndividualConstraintsIfPossible;
- (id)_alignmentConfigurationHistory;
- (id)_alignmentPropertySource;
- (long long)_attributeForConstraintGroupName:(id)arg1;
- (long long)_axisForSpanningLayoutGuide;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_clearAllConstraintsArrays;
- (BOOL)_hasStaleConfiguration;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;
- (void)_removeConstraintGroupsAsNecessary;
- (void)_removeIndividualConstraintsAsNecessary;
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;
- (void)_updateArrangementConstraints;
- (void)_updateConfigurationHistory;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (BOOL)_wantsConstraintsForAttribute:(long long)arg1;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;
- (id)initWithItems:(id)arg1;

@end

