//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyStoreDetailController : PSListController
{
    id<STContentPrivacyViewModelCoordinator> _coordinator;
}

@property (strong, nonatomic) id<STContentPrivacyViewModelCoordinator> coordinator; // @synthesize coordinator=_coordinator;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

