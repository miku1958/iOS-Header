//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/HRWDTableViewSection.h>

__attribute__((visibility("hidden")))
@interface WDClinicalSettingsOptInSection : HRWDTableViewSection
{
    BOOL _optIn;
}

@property (readonly, nonatomic) BOOL optIn; // @synthesize optIn=_optIn;

- (void)_fetchOptInStatus;
- (void)_handleOptInSwitchChanged:(id)arg1;
- (id)_optInCellForTableView:(id)arg1;
- (void)_setOptInStatus:(long long)arg1;
- (id)_viewDataCellForTableView:(id)arg1;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (void)viewWillAppear:(BOOL)arg1;

@end

