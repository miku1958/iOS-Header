//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController
{
    HUQuickControlCollectionViewController *_collectionViewController;
}

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;

+ (id)controlItemPredicate;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_subclass_configureQuickControlViewController:(id)arg1;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)viewDidLoad;

@end

