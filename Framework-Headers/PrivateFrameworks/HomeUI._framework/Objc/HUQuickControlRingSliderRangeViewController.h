//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

#import <HomeUI/HUQuickControlRingSliderInteractionCoordinatorDelegate-Protocol.h>

@class HFRangeControlItem, HUQuickControlRingSliderView, HUQuickControlRingSliderViewProfile, NSString;

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate>
{
    HUQuickControlRingSliderView *_ringSliderView;
}

@property (readonly, nonatomic) HFRangeControlItem *controlItem; // @dynamic controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUQuickControlRingSliderView *ringSliderView; // @synthesize ringSliderView=_ringSliderView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUQuickControlRingSliderViewProfile *viewProfile; // @dynamic viewProfile;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
- (void).cxx_destruct;
- (void)_getHeaterCoolerThresholdControlItemStateString:(out id *)arg1 temperatureString:(out id *)arg2 withRangeControlItemValue:(id)arg3;
- (void)_getTemperatureThresholdControlItemStateString:(out id *)arg1 temperatureString:(out id *)arg2 withRangeControlItemValue:(id)arg3;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)invalidateViewProfile;
- (void)modelValueDidChange;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)updateMainStatusStringWithValue:(id)arg1;
- (void)updateSupplementaryValue;

@end

