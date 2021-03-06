//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory>
{
    NSMutableDictionary *_factoriesBySlot;
    NSMutableOrderedSet *_factories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableOrderedSet *factories; // @synthesize factories=_factories;
@property (strong, nonatomic) NSMutableDictionary *factoriesBySlot; // @synthesize factoriesBySlot=_factoriesBySlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)complicationPickerKeylineViewForComplicationSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(BOOL *)arg5 forSlot:(id)arg6;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (void)deregisterFactoryAtSlot:(id)arg1;
- (void)deregisterFactoryAtSlots:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)pickerMaskForSlot:(id)arg1;
- (void)registerFactory:(id)arg1 forSlot:(id)arg2;
- (void)registerFactory:(id)arg1 forSlots:(id)arg2;
- (BOOL)slotSupportsCurvedText:(id)arg1;

@end

