//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSString, STRestrictionItem, STWebFilterDetailController;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterItemDetailController : PSListController
{
    BOOL _isNamedSite;
    STRestrictionItem *_restriction;
    NSString *_pageURL;
    NSString *_pageTitle;
    id<STContentPrivacyViewModelCoordinator> _coordinator;
    STWebFilterDetailController *_parentWebFilterController;
}

@property (strong, nonatomic) id<STContentPrivacyViewModelCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property (nonatomic) BOOL isNamedSite; // @synthesize isNamedSite=_isNamedSite;
@property (copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property (copy, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property (weak) STWebFilterDetailController *parentWebFilterController; // @synthesize parentWebFilterController=_parentWebFilterController;
@property (strong, nonatomic) STRestrictionItem *restriction; // @synthesize restriction=_restriction;

- (void).cxx_destruct;
- (id)init;
- (void)saveFilterItem;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willResignActive;

@end

