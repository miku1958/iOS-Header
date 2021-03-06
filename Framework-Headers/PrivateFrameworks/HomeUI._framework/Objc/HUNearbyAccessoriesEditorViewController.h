//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFAccessoryProfileItem, HMAccessory, HUNearbyAccessoriesEditorServiceGridViewController;

@interface HUNearbyAccessoriesEditorViewController : HUInstructionsTableViewController
{
    HMAccessory *_primaryAccessory;
    HFAccessoryProfileItem *_accessoryProfileItem;
    HUNearbyAccessoriesEditorServiceGridViewController *_servicesViewController;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, weak, nonatomic) HFAccessoryProfileItem *accessoryProfileItem; // @synthesize accessoryProfileItem=_accessoryProfileItem;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) HMAccessory *primaryAccessory; // @synthesize primaryAccessory=_primaryAccessory;
@property (strong, nonatomic) HUNearbyAccessoriesEditorServiceGridViewController *servicesViewController; // @synthesize servicesViewController=_servicesViewController;

- (void).cxx_destruct;
- (void)_displayProgressIndicatorWhileLoading;
- (void)cancelEditing:(id)arg1;
- (void)dismissEditor:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithAccessoryProfileSourceItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;

@end

