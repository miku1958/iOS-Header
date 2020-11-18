//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKSample, NSArray, UIFont;

__attribute__((visibility("hidden")))
@interface WDAppAccessListViewController : HKTableViewController
{
    HKHealthStore *_healthStore;
    NSArray *_allowedApps;
    NSArray *_disallowedApps;
    HKSample *_sample;
    UIFont *_bodyFont;
}

@property (strong, nonatomic) NSArray *allowedApps; // @synthesize allowedApps=_allowedApps;
@property (strong, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property (strong, nonatomic) NSArray *disallowedApps; // @synthesize disallowedApps=_disallowedApps;
@property (strong, nonatomic) HKSample *sample; // @synthesize sample=_sample;

- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (id)_identifierForCellInSection:(long long)arg1;
- (void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3;
- (void)_refreshAppAuthorizationData;
- (id)_sourceForIndexPath:(id)arg1;
- (id)_textForCellAtIndexPath:(id)arg1;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetAccess;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
