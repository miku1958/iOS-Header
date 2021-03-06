//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HFActionSetValueSourceDelegate-Protocol.h>
#import <HomeUI/HUContainedServiceGridViewControllerDelegate-Protocol.h>
#import <HomeUI/HUServiceActionControlsViewControllerDelegate-Protocol.h>
#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFActionSetBuilder, HUContainedServicesGridViewController, NSSet, NSString;

@interface HUSceneActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate>
{
    HFActionSetBuilder *_actionSetBuilder;
    NSSet *_blacklistedServices;
    NSSet *_whitelistedServices;
    HUContainedServicesGridViewController *_presentedServiceGroupDetailsViewController;
}

@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property (copy, nonatomic) NSSet *blacklistedServices; // @synthesize blacklistedServices=_blacklistedServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController; // @synthesize presentedServiceGroupDetailsViewController=_presentedServiceGroupDetailsViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *whitelistedServices; // @synthesize whitelistedServices=_whitelistedServices;

- (void).cxx_destruct;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithActionSetBuilder:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;
- (void)viewDidLoad;

@end

