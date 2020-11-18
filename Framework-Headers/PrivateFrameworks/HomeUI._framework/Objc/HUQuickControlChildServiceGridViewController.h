//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

@class HFChildServiceControlItem, HUQuickControlCollectionViewController;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController
{
    HUQuickControlCollectionViewController *_collectionViewController;
}

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property (readonly, nonatomic) HFChildServiceControlItem *controlItem;

+ (id)controlItemPredicate;
- (void).cxx_destruct;
- (void)_subclass_configureQuickControlViewController:(id)arg1;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (id)initWithChildServiceControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)viewDidLoad;

@end

