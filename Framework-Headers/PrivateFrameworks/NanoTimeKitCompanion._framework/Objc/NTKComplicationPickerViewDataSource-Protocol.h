//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKComplication, NTKComplicationDisplayWrapperView, NTKComplicationLayoutRule, NTKComplicationPickerView, UIView;
@protocol NTKEditOptionContainerView;

@protocol NTKComplicationPickerViewDataSource <NSObject>
- (void)complicationPickerView:(NTKComplicationPickerView *)arg1 getDisplay:(id *)arg2 controller:(id *)arg3 forComplication:(NTKComplication *)arg4;
- (NTKComplicationLayoutRule *)complicationPickerView:(NTKComplicationPickerView *)arg1 layoutRuleForComplicationDisplay:(NTKComplicationDisplayWrapperView *)arg2;

@optional
- (UIView<NTKEditOptionContainerView> *)customEditOptionContainerViewForComplicationPickerView:(NTKComplicationPickerView *)arg1;
@end

