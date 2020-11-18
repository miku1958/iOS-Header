//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCUIProfile, NSArray, NSString;

@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration>
{
    BOOL _showTitleIfOnlyOneSection;
    BOOL _viewControllerCanPop;
    int _mode;
    MCUIProfile *_UIProfile;
    NSArray *_sections;
}

@property (strong, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mode; // @synthesize mode=_mode;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (nonatomic) BOOL showTitleIfOnlyOneSection; // @synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewControllerCanPop; // @synthesize viewControllerCanPop=_viewControllerCanPop;

- (void).cxx_destruct;
- (void)_profileChanged:(id)arg1;
- (void)_setup;
- (BOOL)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSectionArray;
- (void)setProfileDetailsMode:(int)arg1;
- (void)setUIProfile:(id)arg1 mode:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

