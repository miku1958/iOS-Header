//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILAConfigurationHistory.h>

#import <UIKitCore/_UIOLAPropertySource-Protocol.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource>
{
    BOOL _baselineRelativeArrangement;
    BOOL _itemOrderingChanged;
    BOOL _itemFittingSizeChanged;
    BOOL _hasEstablishedOrderingValues;
    BOOL _inOrderedArrangementUpdateSection;
    double _spacing;
    long long _distribution;
    NSMapTable *_customSpacings;
    double _proportionalFillDenominator;
}

@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged; // @synthesize _itemOrderingChanged;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property (readonly, nonatomic) NSMapTable *customSpacings; // @synthesize customSpacings=_customSpacings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property (nonatomic) BOOL hasEstablishedOrderingValues; // @synthesize hasEstablishedOrderingValues=_hasEstablishedOrderingValues;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInOrderedArrangementUpdateSection) BOOL inOrderedArrangementUpdateSection; // @synthesize inOrderedArrangementUpdateSection=_inOrderedArrangementUpdateSection;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) double proportionalFillDenominator; // @synthesize proportionalFillDenominator=_proportionalFillDenominator;
@property (nonatomic) double spacing; // @synthesize spacing=_spacing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)customSpacingAfterItem:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;

@end

