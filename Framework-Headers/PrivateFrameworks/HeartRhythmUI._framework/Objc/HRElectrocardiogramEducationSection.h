//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

#import <HeartRhythmUI/HROnboardingPageViewControllerDelegate-Protocol.h>

@class HKHealthStore, NSMutableDictionary, NSString;

@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HROnboardingPageViewControllerDelegate>
{
    HKHealthStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)_cellTitleForEducationRow:(unsigned long long)arg1;
- (id)_viewControllerForEducationRow:(unsigned long long)arg1;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)dateCache;
- (id)healthStore;
- (unsigned long long)numberOfRowsInSection;
- (id)onboardingManagerDelegate;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)stepForward;
- (void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3;

@end
