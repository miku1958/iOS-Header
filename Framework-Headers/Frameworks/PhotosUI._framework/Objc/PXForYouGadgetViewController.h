//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

#import <PhotosUICore/PXNavigableForYouViewController-Protocol.h>
#import <PhotosUICore/PXNavigableSharedAlbumActivityFeedHostViewController-Protocol.h>
#import <PhotosUICore/PXNavigationRoot-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString, PXForYouBadgeManager, PXForYouGadgetPriorityManager, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;

@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXSettingsKeyObserver, PXNavigationRoot, PXNavigableForYouViewController, PXNavigableSharedAlbumActivityFeedHostViewController>
{
    BOOL _needsRefresh;
    UIBarButtonItem *_navigationDisplayModeButtonItem;
    PXForYouBadgeManager *_badgeManager;
    PXForYouGadgetPriorityManager *_priorityManager;
}

@property (strong, nonatomic) PXForYouBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property (readonly, nonatomic) NSString *currentDateText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // @dynamic navigationController;
@property (strong, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem; // @synthesize navigationDisplayModeButtonItem=_navigationDisplayModeButtonItem;
@property (readonly, nonatomic) NSString *navigationIdentifier;
@property (readonly, nonatomic) PXNavigationListDataSectionManager *navigationListDataSourceManager;
@property (readonly, nonatomic) NSString *navigationTitle;
@property (nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property (strong, nonatomic) PXForYouGadgetPriorityManager *priorityManager; // @synthesize priorityManager=_priorityManager;
@property (readonly) Class superclass;

+ (id)lastExitedForYouDate;
+ (void)setLastExitedForYouDate:(id)arg1;
- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (void)_lastSeenBadgeDateChanged;
- (id)_suggestionDumpURL;
- (void)_userDidViewCloudFeedContent;
- (void)configureSectionHeader:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)initWithBadgeManager:(id)arg1;
- (id)navigateToDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (void)navigateToSharedAlbumActivityFeedAnimated:(BOOL)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)navigateToShowAllMemoriesFeedAnimated:(BOOL)arg1;
- (void)ppt_navigateToFirstInvitationCMM:(BOOL)arg1 withCompleteHandler:(CDUnknownBlockType)arg2;
- (void)ppt_navigateToFirstSuggestedCMMAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)reloadContent;
- (void)rootGadgetControllerDidDisappear;
- (void)rootGadgetControllerWillAppear;
- (long long)scrollAnimationIdentifier;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
