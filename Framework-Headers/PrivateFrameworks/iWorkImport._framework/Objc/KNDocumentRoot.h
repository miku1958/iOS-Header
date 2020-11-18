//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>

@class KNRecordingSyncMaintainer, KNShow, KNSlidePreviewManager, KNThumbnailManager, NSString;
@protocol KNDocumentRootDelegate;

__attribute__((visibility("hidden")))
@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSTResolverContainerNameProvider>
{
    KNShow *mShow;
    KNThumbnailManager *mThumbnailManager;
    KNSlidePreviewManager *mSlidePreviewManager;
    KNRecordingSyncMaintainer *mRecordingSyncMaintainer;
    BOOL mIsObservingRecording;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<KNDocumentRootDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isShowcastAllowed;
@property (readonly, nonatomic) KNRecordingSyncMaintainer *recordingSyncMaintainer; // @synthesize recordingSyncMaintainer=mRecordingSyncMaintainer;
@property (strong, nonatomic) KNShow *show;
@property (readonly) Class superclass;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
- (id)UIStateForChart:(id)arg1;
- (unsigned long long)applicationType;
- (void)changeShowSizeTo:(struct CGSize)arg1;
- (id)childEnumerator;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (void)dealloc;
- (void)documentDidLoad;
- (id)initWithContext:(id)arg1;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isSharedReadOnly;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nameForResolverContainer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg1;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg1 andMasterSlideNodess:(id)arg2;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (id)protected_defaultTextPresetOrdering;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldShowComments;
- (id)slideNodeForClearedShow;
- (double)stickyCommentScaleMultiplier;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (id)stylesheet;
- (id)theme;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (BOOL)validateSlideNode:(id)arg1;
- (BOOL)validateUIState:(id)arg1;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id *)arg2;
- (void)willClose;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)writingDirection;
- (unsigned long long)writingDirectionForStorage;

@end

