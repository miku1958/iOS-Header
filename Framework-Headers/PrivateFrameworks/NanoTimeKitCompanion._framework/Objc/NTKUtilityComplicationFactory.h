//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NTKUtilityComplicationFactoryDelegate;

@interface NTKUtilityComplicationFactory : NSObject
{
    BOOL _accommodatesTwoTopComplications;
    id<NTKUtilityComplicationFactoryDelegate> _delegate;
    double _normalSidePadding;
    double _normalVerticalPadding;
    double _normalCircularPadding;
    double _deselectedKeylineSideInnerPadding;
    double _deselectedKeylineVerticalInnerPadding;
    double _deselectedKeylineCircularInnerPadding;
    double _selectedKeylineSideInnerPadding;
    double _selectedKeylineHeight;
    double _foregroundAlpha;
    double _foregroundImageAlpha;
    double _dateKeylineMaxWidth;
    double _dateHorizontalCenterOffset;
    double _dateVerticalCenterOffset;
    long long _bottomCenterLayout;
}

@property (nonatomic) BOOL accommodatesTwoTopComplications; // @synthesize accommodatesTwoTopComplications=_accommodatesTwoTopComplications;
@property (nonatomic) long long bottomCenterLayout; // @synthesize bottomCenterLayout=_bottomCenterLayout;
@property (nonatomic) double dateHorizontalCenterOffset; // @synthesize dateHorizontalCenterOffset=_dateHorizontalCenterOffset;
@property (nonatomic) double dateKeylineMaxWidth; // @synthesize dateKeylineMaxWidth=_dateKeylineMaxWidth;
@property (nonatomic) double dateVerticalCenterOffset; // @synthesize dateVerticalCenterOffset=_dateVerticalCenterOffset;
@property (weak, nonatomic) id<NTKUtilityComplicationFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double deselectedKeylineCircularInnerPadding; // @synthesize deselectedKeylineCircularInnerPadding=_deselectedKeylineCircularInnerPadding;
@property (nonatomic) double deselectedKeylineSideInnerPadding; // @synthesize deselectedKeylineSideInnerPadding=_deselectedKeylineSideInnerPadding;
@property (nonatomic) double deselectedKeylineVerticalInnerPadding; // @synthesize deselectedKeylineVerticalInnerPadding=_deselectedKeylineVerticalInnerPadding;
@property (nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha; // @synthesize foregroundImageAlpha=_foregroundImageAlpha;
@property (nonatomic) double normalCircularPadding; // @synthesize normalCircularPadding=_normalCircularPadding;
@property (nonatomic) double normalSidePadding; // @synthesize normalSidePadding=_normalSidePadding;
@property (nonatomic) double normalVerticalPadding; // @synthesize normalVerticalPadding=_normalVerticalPadding;
@property (nonatomic) double selectedKeylineHeight; // @synthesize selectedKeylineHeight=_selectedKeylineHeight;
@property (nonatomic) double selectedKeylineSideInnerPadding; // @synthesize selectedKeylineSideInnerPadding=_selectedKeylineSideInnerPadding;

+ (unsigned long long)placementForSlot:(long long)arg1;
- (void).cxx_destruct;
- (void)_configureBottomCenterLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureBottomRightLongLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureDateLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureLayout:(id)arg1 withNormalSize:(struct CGSize)arg2 editingSize:(struct CGSize)arg3 addCircleOverrides:(BOOL)arg4 makeRuleBlock:(CDUnknownBlockType)arg5;
- (void)_configureTopLeftLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightAboveLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightBelowLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)_configureUpNextTopRightLayout:(id)arg1 withBounds:(struct CGRect)arg2;
- (double)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxDateWidthLeavingRoomForKeylines;
- (double)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect)arg1;
- (double)_maxWidthForKeylineAndPadding;
- (id)_viewForDateComplication:(id)arg1;
- (void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(struct CGRect)arg3;
- (double)foregroundAlphaForEditing:(BOOL)arg1;
- (double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)foregroundImageAlphaForEditing:(BOOL)arg1;
- (double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)init;
- (double)keylineCornerRadiusForSlot:(long long)arg1;
- (unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1;
- (long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2;
- (id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3;

@end

