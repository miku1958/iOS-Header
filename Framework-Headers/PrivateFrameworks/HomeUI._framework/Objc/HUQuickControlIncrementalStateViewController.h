//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFIncrementalStateControlItem;

@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController
{
}

@property (readonly, nonatomic) HFIncrementalStateControlItem *controlItem; // @dynamic controlItem;

+ (Class)controlItemClass;
- (id)_createControlView;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)viewWillAppear:(BOOL)arg1;

@end

