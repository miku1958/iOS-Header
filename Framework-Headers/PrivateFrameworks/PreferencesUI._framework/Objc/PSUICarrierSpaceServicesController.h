//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController
{
    NSArray *_appsList;
}

@property (strong, nonatomic) NSArray *appsList; // @synthesize appsList=_appsList;

- (void).cxx_destruct;
- (void)carrierSpaceChanged;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreAppsTapped:(id)arg1;
- (id)primaryAppSpecifier;
- (BOOL)shouldShowMoreApps;
- (void)simStatusChanged;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end

