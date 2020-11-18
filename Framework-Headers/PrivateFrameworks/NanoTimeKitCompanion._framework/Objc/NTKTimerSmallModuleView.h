//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import <NanoTimeKitCompanion/NTKTimerComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel, NTKStackedImagesComplicationImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKTimerSmallModuleView : NTKComplicationModuleView <NTKTimerComplicationDisplay>
{
    NTKStackedImagesComplicationImageView *_timerGlyph;
    NTKColoringLabel *_countdownLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (void)_setLayoutForTime:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setIsXL:(BOOL)arg1;
- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;

@end

