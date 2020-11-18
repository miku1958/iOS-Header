//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayTypeController, HKHealthStore, HKSample, HKSampleType, HKUnitPreferenceController, NSPredicate, NSString, UIViewController;

@protocol HKDataMetadataViewControllerDelegate <NSObject>

@property (readonly, nonatomic) HKHealthStore *healthStore;


@optional
- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKDisplayTypeController *)displayTypeController;
- (BOOL)shareDocumentUsingSample:(HKSample *)arg1;
- (HKUnitPreferenceController *)unitController;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
@end

