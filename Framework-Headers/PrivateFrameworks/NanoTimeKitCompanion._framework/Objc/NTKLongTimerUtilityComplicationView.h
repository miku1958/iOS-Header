//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>

#import <NanoTimeKitCompanion/NTKTimerComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKLongTimerUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKTimerComplicationDisplay>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void)_setLayoutForTime:(double)arg1;
- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;

@end

