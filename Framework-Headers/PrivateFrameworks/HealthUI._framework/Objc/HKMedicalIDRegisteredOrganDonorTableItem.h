//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKOrganDonationCallToActionTableViewCell;
@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem
{
    long long _organization;
    id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> _delegate;
    HKOrganDonationCallToActionTableViewCell *_notRegisteredCell;
}

@property (weak, nonatomic) id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HKOrganDonationCallToActionTableViewCell *notRegisteredCell; // @synthesize notRegisteredCell=_notRegisteredCell;

- (void).cxx_destruct;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1 organDonationOrganization:(long long)arg2;
- (id)organizationLogo;
- (void)presentDonateLifeRegistrationSequence;
- (struct UIEdgeInsets)separatorInset;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)title;
- (id)titleForFooter;

@end

