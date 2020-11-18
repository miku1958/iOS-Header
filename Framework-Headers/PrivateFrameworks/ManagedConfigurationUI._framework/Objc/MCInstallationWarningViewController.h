//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class NSArray, NSString;
@protocol MCInstallationWarningDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallationWarningViewController : UITableViewController <PSStateRestoration>
{
    BOOL _isMDMInstall;
    NSArray *_warnings;
    id<MCInstallationWarningDelegate> _warningDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isMDMInstall; // @synthesize isMDMInstall=_isMDMInstall;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<MCInstallationWarningDelegate> warningDelegate; // @synthesize warningDelegate=_warningDelegate;
@property (strong, nonatomic) NSArray *warnings; // @synthesize warnings=_warnings;

- (void).cxx_destruct;
- (void)_cancelInstallProfile;
- (void)_confirmInstallProfileIfNeeded;
- (void)_installProfile;
- (void)_setup;
- (BOOL)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

