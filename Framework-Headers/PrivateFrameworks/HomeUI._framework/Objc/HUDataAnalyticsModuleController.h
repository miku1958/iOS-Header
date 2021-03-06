//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController : HUItemTableModuleController
{
    id<HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;
}

@property (weak, nonatomic) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate; // @synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate;

- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)module;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end

