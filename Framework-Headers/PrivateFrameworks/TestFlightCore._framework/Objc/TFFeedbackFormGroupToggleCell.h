//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class TFFeedbackEntryGroupToggle, UISwitch;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell
{
    UISwitch *_toggleSwitch;
    TFFeedbackEntryGroupToggle *_groupToggleEntry;
}

@property (strong, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry; // @synthesize groupToggleEntry=_groupToggleEntry;
@property (readonly, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;

- (void).cxx_destruct;
- (void)applyContentsOfEntry:(id)arg1;
- (void)didUpdateToggleSwitchValue:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDisplayedDataGroupInclusionBool:(BOOL)arg1;

@end
