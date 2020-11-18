//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController
{
    NSArray *_displayableItems;
    long long _reenableFeatureSection;
}

@property (nonatomic) long long reenableFeatureSection; // @synthesize reenableFeatureSection=_reenableFeatureSection;

- (void).cxx_destruct;
- (id)_displayableItemsForContactSupport;
- (id)_displayableItemsForInstructionManual;
- (id)_displayableItemsForPhone;
- (id)_displayableItemsForReenableFeature;
- (id)_displayableItemsForWatch;
- (id)displayableItems;
- (void)receivedHeartRhythmAvailabilityNotification;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end

