//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKMedicalRecord, HRProfile, UIViewController;

@protocol HRRecordViewControllerFactory
- (UIViewController *)makeDetailViewControllerForRecord:(HKMedicalRecord *)arg1 usingProfile:(HRProfile *)arg2;
- (UIViewController *)makeViewControllerForRecord:(HKMedicalRecord *)arg1 usingProfile:(HRProfile *)arg2;
@end

