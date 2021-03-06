//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HULockupViewDelegate-Protocol.h>
#import <HomeUI/HUSoftwareUpdateUIPresentationDelegate-Protocol.h>

@class HUSoftwareUpdateItemModule, NSMapTable, NSString;
@protocol HUSoftwareUpdateItemModuleControllerDelegate;

@interface HUSoftwareUpdateItemModuleController : HUItemTableModuleController <HUSoftwareUpdateUIPresentationDelegate, HULockupViewDelegate>
{
    id<HUSoftwareUpdateItemModuleControllerDelegate> _delegate;
    NSMapTable *_serviceGridViewControllersByItems;
    NSMapTable *_expandedStateByItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HUSoftwareUpdateItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *expandedStateByItems; // @synthesize expandedStateByItems=_expandedStateByItems;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUSoftwareUpdateItemModule *module; // @dynamic module;
@property (readonly, nonatomic) NSMapTable *serviceGridViewControllersByItems; // @synthesize serviceGridViewControllersByItems=_serviceGridViewControllersByItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startUpdateOnAccessories:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)lockupView:(id)arg1 downloadControlTapped:(id)arg2;
- (void)lockupView:(id)arg1 expandableTextViewDidExpand:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (void)updateAllAccessories;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;

@end

