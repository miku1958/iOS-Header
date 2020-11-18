//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class LSApplicationProxy, MCUIProfile, NSString;

__attribute__((visibility("hidden")))
@interface MCManagedAppDetailsViewController : UITableViewController <PSStateRestoration>
{
    MCUIProfile *_UIProfile;
    LSApplicationProxy *_managedAppProxy;
}

@property (strong, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LSApplicationProxy *managedAppProxy; // @synthesize managedAppProxy=_managedAppProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_profileChanged:(id)arg1;
- (void)_setup;
- (BOOL)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithUIProfile:(id)arg1 managedApp:(id)arg2;
- (id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
