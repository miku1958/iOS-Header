//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UILAPropertySource-Protocol.h>

@class NSMapTable;

@protocol _UIOLAPropertySource <_UILAPropertySource>

@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged;
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (readonly, nonatomic) NSMapTable *customSpacings;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;

- (double)customSpacingAfterItem:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
@end

