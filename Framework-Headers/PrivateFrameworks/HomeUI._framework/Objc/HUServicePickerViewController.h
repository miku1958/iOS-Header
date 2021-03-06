//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class NSSet;
@protocol HUServicePickerViewControllerDelegate;

@interface HUServicePickerViewController : HUSelectableServiceGridViewController
{
    BOOL _isPresentedModally;
    NSSet *_preselectedServices;
}

@property (weak, nonatomic) id<HUServicePickerViewControllerDelegate> delegate; // @dynamic delegate;
@property (nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property (strong, nonatomic) NSSet *preselectedServices; // @synthesize preselectedServices=_preselectedServices;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (BOOL)_isItemPreselected:(id)arg1;
- (BOOL)_preselectedServicesContainsService:(id)arg1;
- (id)_servicesForItem:(id)arg1;
- (id)_servicesForItems:(id)arg1;
- (void)_setUpNavButtons;
- (id)initWithHome:(id)arg1 isPresentedModally:(BOOL)arg2 delegate:(id)arg3;
- (id)initWithHome:(id)arg1 selectedServices:(id)arg2 isPresentedModally:(BOOL)arg3 delegate:(id)arg4;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)viewDidLoad;

@end

