//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class CSTodayViewController, NSString, SBUISpotlightBarNavigationController, SPUISearchBarController;

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase <SBFLegibilitySettingsProviderDelegate>
{
    BOOL _bouncing;
    CSTodayViewController *_todayViewController;
    SBUISpotlightBarNavigationController *_spotlightNavigationController;
    SPUISearchBarController *_spotlightSearchBarViewController;
}

@property (nonatomic, getter=isBouncing) BOOL bouncing; // @synthesize bouncing=_bouncing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController; // @synthesize spotlightNavigationController=_spotlightNavigationController;
@property (strong, nonatomic) SPUISearchBarController *spotlightSearchBarViewController; // @synthesize spotlightSearchBarViewController=_spotlightSearchBarViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) CSTodayViewController *todayViewController; // @synthesize todayViewController=_todayViewController;

+ (Class)viewClass;
- (void).cxx_destruct;
- (id)_todayContentView;
- (void)_updateSpotlightLegibility;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)init;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
