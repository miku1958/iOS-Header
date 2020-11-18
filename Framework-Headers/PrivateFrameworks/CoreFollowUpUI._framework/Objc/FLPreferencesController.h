//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLSpecifierTapHandlerDelegate-Protocol.h>

@class FLPreferencesFollowUpItemListViewController, NSSet, NSString, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate>
{
    id<FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    NSSet *_spyglassWhitelist;
    BOOL _activityIndicatorActive;
    PSListController *_listViewController;
    CDUnknownBlockType _itemChangeObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType itemChangeObserver; // @synthesize itemChangeObserver=_itemChangeObserver;
@property (weak, nonatomic) PSListController *listViewController; // @synthesize listViewController=_listViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_deferredLoadSpecifierWithName:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_presentSpecifier:(id)arg1;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierForItem:(id)arg1 group:(id)arg2;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (void)_zeroActionFailure:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)loadSpecifier:(id)arg1;
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)spyglassSpecifiers;
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (id)topLevelSpecifiers;

@end

