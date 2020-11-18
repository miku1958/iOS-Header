//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageDetailsViewModel *_usageDetailsViewModel;
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel; // @synthesize usageDetailsViewModel=_usageDetailsViewModel;

- (void).cxx_destruct;
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;
- (void)showMostUsedDetailListController:(id)arg1;
- (id)totalUsageDescription:(id)arg1;

@end

