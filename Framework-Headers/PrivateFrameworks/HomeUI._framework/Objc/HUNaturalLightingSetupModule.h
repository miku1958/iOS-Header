//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFAccessoryItemProvider, HFServiceGroupItemProvider, HFServiceItemProvider, HMHome, NSNumber, NSSet;
@protocol HUNaturalLightingSetupModuleDelegate;

@interface HUNaturalLightingSetupModule : HFItemModule
{
    NSSet *_itemProviders;
    id<HUNaturalLightingSetupModuleDelegate> _delegate;
    CDUnknownBlockType _filter;
    NSNumber *_defaultSelectedValue;
    HMHome *_home;
    HFAccessoryItemProvider *_accessoryItemProvider;
    HFServiceItemProvider *_serviceItemProvider;
    HFServiceGroupItemProvider *_serviceGroupItemProvider;
}

@property (strong, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // @synthesize accessoryItemProvider=_accessoryItemProvider;
@property (strong, nonatomic) NSNumber *defaultSelectedValue; // @synthesize defaultSelectedValue=_defaultSelectedValue;
@property (weak, nonatomic) id<HUNaturalLightingSetupModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider; // @synthesize serviceGroupItemProvider=_serviceGroupItemProvider;
@property (strong, nonatomic) HFServiceItemProvider *serviceItemProvider; // @synthesize serviceItemProvider=_serviceItemProvider;

+ (BOOL)showNaturalLightingContainingHomeKitObject:(id)arg1;
- (void).cxx_destruct;
- (id)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)commitSelectedItems;
- (id)initWithHome:(id)arg1 itemUpdater:(id)arg2;
- (id)itemProviders;
- (id)selectedItems;
- (void)toggleSelectedForItem:(id)arg1;

@end

