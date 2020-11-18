//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STPINListViewController.h>

@class STAllowanceProgressGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STDrillInUsageGroupSpecifierProvider, STUsageItem;

@interface STDrillInDetailListController : STPINListViewController
{
    STUsageItem *_usageItem;
    STDrillInUsageGroupSpecifierProvider *_screenTimeGroupSpecifierProvider;
    STDrillInItemInfoGroupSpecifierProvider *_drillInItemInfoGroupSpecifierProvider;
    STCategoryDetailsGroupSpecifierProvider *_categoryDetailsGroupSpecifierProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowanceProgressGroupSpecifierProvider;
}

@property (readonly, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider; // @synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider;
@property (readonly, nonatomic) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider; // @synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider;
@property (readonly, nonatomic) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider; // @synthesize drillInItemInfoGroupSpecifierProvider=_drillInItemInfoGroupSpecifierProvider;
@property (readonly, nonatomic) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider; // @synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider;
@property (readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;

- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;
- (void)viewDidLoad;

@end

