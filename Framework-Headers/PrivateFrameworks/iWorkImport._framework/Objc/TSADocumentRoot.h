//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPDocumentRoot.h>

#import <iWorkImport/TSDImportExportDelegate-Protocol.h>
#import <iWorkImport/TSDScrollingAwareChangeSource-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, SFUCryptoKey, TSADocumentInfo, TSAFunctionBrowserState, TSAShortcutController, TSCECalculationEngine, TSDFreehandDrawingToolkitUIState, TSKCustomFormatList, TSKViewState, TSPDocumentRevision, TSPLazyReference, TSTCustomFormatList;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSADocumentRoot : TSWPDocumentRoot <TSDImportExportDelegate, TSDScrollingAwareChangeSource>
{
    _Atomic int _needsToCaptureViewState;
    NSMutableDictionary *_upgradeState;
    TSPLazyReference *_viewStateReference;
    NSMutableSet *_warnings;
    NSString *_documentLanguage;
    unsigned long long _documentLanguageWritingDirection;
    TSCECalculationEngine *_calculationEngine;
    TSAFunctionBrowserState *_functionBrowserState;
    TSTCustomFormatList *_deprecatedTablesCustomFormatList;
    TSKCustomFormatList *_tablesCustomFormatList;
    TSAShortcutController *_shortcutController;
    BOOL _didLoadControllers;
    BOOL _needsMediaCompatibilityUpgrade;
    BOOL _collaborativeMediaCompatibilityUpgradeDidFail;
    BOOL _canUseHEVC;
    BOOL _isClosed;
    BOOL _documentLocaleWasUpdated;
    TSPDocumentRevision *_lastSyncRevision;
    NSString *_templateIdentifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    SFUCryptoKey *_accessQueue_documentCacheDecryptionKey;
    BOOL _documentCurrentlyImporting;
    BOOL _hasPreUFFVersion;
    BOOL _didLoadDocumentFromTemplate;
    BOOL _didLoadDocumentFromRevert;
    NSArray *_buildVersionHistory;
}

@property (copy, nonatomic) NSArray *buildVersionHistory; // @synthesize buildVersionHistory=_buildVersionHistory;
@property (strong, nonatomic) TSCECalculationEngine *calculationEngine;
@property (nonatomic) BOOL canUseHEVC;
@property (nonatomic) BOOL collaborativeMediaCompatibilityUpgradeDidFail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoadDocumentFromRevert; // @synthesize didLoadDocumentFromRevert=_didLoadDocumentFromRevert;
@property (nonatomic) BOOL didLoadDocumentFromTemplate; // @synthesize didLoadDocumentFromTemplate=_didLoadDocumentFromTemplate;
@property (nonatomic, getter=isDocumentCurrentlyImporting) BOOL documentCurrentlyImporting; // @synthesize documentCurrentlyImporting=_documentCurrentlyImporting;
@property (readonly, nonatomic) TSADocumentInfo *documentInfo;
@property (readonly, nonatomic) BOOL documentLocaleWasUpdated; // @synthesize documentLocaleWasUpdated=_documentLocaleWasUpdated;
@property (readonly, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (readonly, nonatomic) BOOL hasFloatingLocale;
@property (nonatomic) BOOL hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property (readonly, nonatomic) BOOL isBrowsingVersions;
@property (readonly, nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property (readonly, nonatomic) BOOL isLoaded; // @synthesize isLoaded=_didLoadControllers;
@property (readonly, nonatomic) NSDictionary *missingFontNamesAndWarningMessages;
@property (readonly, nonatomic) NSSet *missingFontWarningMessages;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needsMediaCompatibilityUpgrade;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *templateIdentifier;
@property (readonly, nonatomic) TSKViewState *viewState;

+ (id)buildVersionHistoryPath;
+ (id)buildVersionHistoryPathPreUFF;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
+ (unsigned long long)previewTypeForCurrentDevice;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
- (void).cxx_destruct;
- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (id)additionalResourceRequestsForObjectContext:(id)arg1;
- (id)allPencilAnnotations;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (id)captureViewState;
- (id)captureViewStateForImport;
- (void)captureViewStateIfNeeded;
- (void)cleanupForImportFailure;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2;
- (void)commonInit;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (void)didDownloadDocumentResources:(id)arg1;
- (void)didDownloadRemoteData:(id)arg1;
- (void)didEnterBackground;
- (void)didSaveWithEncryptionChange;
- (id)documentCachePath;
- (void)documentCacheWasInvalidated;
- (void)documentDidLoad;
- (BOOL)documentHasPencilAnnotations;
- (id)documentLanguage;
- (void)enumeratePencilAnnotationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStylesheetsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (void)fulfillPasteboardPromises;
- (id)functionBrowserState;
- (BOOL)hasICloudConflict;
- (void)importerDidFinish:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2;
- (void)invalidateViewState;
- (BOOL)isMultiPageForQuickLook;
- (void)loadFromArchive:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (id)namedTextStyles;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (BOOL)objectsNeedToBeMigrated:(id)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_captureViewStateForImport:(BOOL)arg1;
- (void)p_cleanupColumnStyles;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL *)arg2 number:(unsigned long long *)arg3;
- (void)p_registerAllFormulasAfterImport;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (BOOL)p_updateDocumentLanguageToCurrentIfNeeded;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)p_upgradeCustomFormatList;
- (void)p_upgradeDocumentCreationLocale;
- (void)p_upgradeTablesIfNeeded:(unsigned long long)arg1;
- (id)packageDataForWrite;
- (void)pauseRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)prepareForSavingAsTemplate;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (void)prepareToGeneratePreview;
- (id)previewImage;
- (id)previewImageForSize:(struct CGSize)arg1;
- (id)protected_defaultTextPresetOrdering;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1;
- (id)referencedStylesOfClass:(Class)arg1;
- (void)removePencilAnnotationsFromDrawables:(id)arg1;
- (void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
- (void)removeWarning:(id)arg1;
- (void)resetViewState;
- (void)resumeBackgroundActivities;
- (void)resumeRecalculation;
- (void)resumeThumbnailing;
- (void)saveToArchive:(struct DocumentArchive *)arg1 archiver:(id)arg2;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (void)setShortcutController:(id)arg1;
- (id)shortcutController;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (BOOL)shouldShowFontWarningNotificationForWarnings:(id)arg1;
- (void)stashUpgradeState:(const struct DocumentArchive *)arg1 unarchiver:(id)arg2;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (id)tableToShowImportedDataNotificationOnOpenFor;
- (id)tsa_delegate;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)upgradeCellStyles;
- (id)upgradeState;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeTextboxPresets;
- (void)upgradeToFixNonVariationChildStylesWithFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeToSingleStylesheet;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id *)arg2;
- (id)warnings;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (void)willClose;
- (void)willEnterForeground;
- (void)willUnload;
- (BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned long long)writingDirection;

@end

