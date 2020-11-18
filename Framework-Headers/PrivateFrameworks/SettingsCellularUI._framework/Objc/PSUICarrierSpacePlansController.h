//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CTCarrierSpaceClientDelegate-Protocol.h>
#import <SettingsCellularUI/RemoteUIControllerDelegate-Protocol.h>

@class CTCarrierSpaceClient, NSObject, NSString, RemoteUIController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property (strong, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierSpaceChanged;
- (id)detailForPlanOption:(id)arg1;
- (void)dismissPlanDetail;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreDetailsButtonTapped:(id)arg1;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)simStatusChanged;
- (id)specifiers;
- (id)stringFromGroupCategory:(long long)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
