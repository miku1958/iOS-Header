//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NTKRichComplicationPickerView : UIView <NTKEditOptionContainerView>
{
    NSMutableDictionary *_sideViews;
    double _fraction;
    unsigned long long _fromSide;
    unsigned long long _toSide;
    long long _animationType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateViews;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithMaskImage:(id)arg1 animationType:(long long)arg2;
- (void)layoutSubviews;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;

@end

