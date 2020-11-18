//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import <iWorkImport/TPPageControllerDelegate-Protocol.h>
#import <iWorkImport/TSCEResolverContainer-Protocol.h>
#import <iWorkImport/TSDInfoUUIDPathPrefixComponentsProvider-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>
#import <iWorkImport/TSWPChangeSessionManager-Protocol.h>
#import <iWorkImport/TSWPChangeVisibility-Protocol.h>
#import <iWorkImport/TSWPDrawableOLC-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class EQKitEnvironment, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TPBackgroundLayoutController, TPBookmarkController, TPDocumentSettings, TPDocumentViewController, TPDrawablesZOrder, TPFloatingDrawables, TPPageController, TPPageLayoutNotifier, TPSection, TPTheme, TPUIState, TSDThumbnailController, TSPData, TSSStylesheet, TSWPChangeSession, TSWPFlowInfoContainer, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPDocumentRoot : TSADocumentRoot <TPPageControllerDelegate, TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer>
{
    NSArray *_citationRecords;
    BOOL _shouldUniquifyTableNames;
    NSArray *_obsoleteTOCStyles;
    TPTheme *_theme;
    TSSStylesheet *_stylesheet;
    TSWPStorage *_bodyStorage;
    TPDocumentSettings *_settings;
    TPDrawablesZOrder *_drawablesZOrder;
    TPFloatingDrawables *_floatingDrawables;
    BOOL _usesSingleHeaderFooter;
    BOOL _needsInitialization;
    struct CGSize _pageSize;
    double _pageScale;
    NSString *_printerID;
    NSString *_paperID;
    long long _orientation;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _headerMargin;
    double _footerMargin;
    BOOL _layoutBodyVertically;
    struct __CFLocale *_hyphenationLocale;
    BOOL _changeTrackingEnabled;
    NSMutableArray *_changeSessionHistory;
    TSWPChangeSession *_mostRecentChangeSession;
    TSWPChangeSession *_activeChangeSession;
    TPPageController *_paginatedPageController;
    TPPageLayoutNotifier *_pageLayoutNotifier;
    BOOL _newDocument;
    TPDocumentViewController *_viewController;
    unsigned int _tableNameCounter;
    NSMutableDictionary *_chartsUIState;
    NSMutableDictionary *_tablesWithUniqueNames;
    NSMutableSet *_remappedTableNames;
    TSPData *_equationEnvironmentData;
    EQKitEnvironment *_equationEnvironment;
    NSMutableArray *_pageTemplates;
    BOOL _wasCreatedFromTemplate;
    BOOL _suppressViewStateCapture;
    BOOL initiallyShowRuler;
    BOOL initiallyShowTwoUp;
    BOOL _needsAdditionalViewStateValidation;
    TPUIState *_uiState;
    TSDThumbnailController *_thumbnailController;
    TPBookmarkController *_bookmarkController;
    TPBackgroundLayoutController *_backgroundLayoutController;
    TSWPFlowInfoContainer *_flowInfoContainer;
    double _presentationAutoScrollSpeed;
}

@property (strong, nonatomic) TSWPChangeSession *activeChangeSession; // @synthesize activeChangeSession=_activeChangeSession;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) TPBackgroundLayoutController *backgroundLayoutController; // @synthesize backgroundLayoutController=_backgroundLayoutController;
@property (readonly, nonatomic) TSWPStorage *bodyStorage; // @synthesize bodyStorage=_bodyStorage;
@property (readonly, nonatomic) TPBookmarkController *bookmarkController; // @synthesize bookmarkController=_bookmarkController;
@property (nonatomic) double bottomMargin;
@property (readonly, nonatomic) BOOL canTrackChanges;
@property (strong, nonatomic) NSMutableArray *changeSessionHistory; // @synthesize changeSessionHistory=_changeSessionHistory;
@property (nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (strong, nonatomic) NSMutableDictionary *chartsUIState; // @synthesize chartsUIState=_chartsUIState;
@property (readonly, nonatomic) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (strong, nonatomic) TPDrawablesZOrder *drawablesZOrder; // @synthesize drawablesZOrder=_drawablesZOrder;
@property (readonly, nonatomic) TPSection *firstSection;
@property (strong, nonatomic) TPFloatingDrawables *floatingDrawables; // @synthesize floatingDrawables=_floatingDrawables;
@property (strong, nonatomic) TSWPFlowInfoContainer *flowInfoContainer; // @synthesize flowInfoContainer=_flowInfoContainer;
@property (nonatomic) double footerMargin;
@property (readonly, nonatomic) BOOL hasTrackedChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerMargin;
@property (nonatomic) BOOL initiallyShowRuler; // @synthesize initiallyShowRuler;
@property (nonatomic) BOOL initiallyShowTwoUp; // @synthesize initiallyShowTwoUp;
@property (readonly, nonatomic) BOOL isNewDocument; // @synthesize isNewDocument=_newDocument;
@property (readonly, nonatomic) BOOL isTrackingChanges;
@property (nonatomic) BOOL layoutBodyVertically;
@property (nonatomic) double leftMargin;
@property (strong, nonatomic) TSWPChangeSession *mostRecentChangeSession; // @synthesize mostRecentChangeSession=_mostRecentChangeSession;
@property (nonatomic) BOOL needsAdditionalViewStateValidation; // @synthesize needsAdditionalViewStateValidation=_needsAdditionalViewStateValidation;
@property (readonly, nonatomic) NSArray *nonHiddenSections;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (readonly, nonatomic) TPPageController *pageController; // @synthesize pageController=_paginatedPageController;
@property (nonatomic) double pageScale;
@property (nonatomic) struct CGSize pageSize;
@property (readonly, nonatomic) NSArray *pageTemplates;
@property (readonly, nonatomic) long long pageViewState;
@property (copy, nonatomic) NSString *paperID; // @synthesize paperID=_paperID;
@property (readonly, nonatomic) struct CGSize paperSize;
@property (nonatomic) double presentationAutoScrollSpeed; // @synthesize presentationAutoScrollSpeed=_presentationAutoScrollSpeed;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (copy, nonatomic) NSString *printerID; // @synthesize printerID=_printerID;
@property (nonatomic) double rightMargin;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) TPDocumentSettings *settings;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (strong, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (nonatomic) BOOL suppressViewStateCapture; // @synthesize suppressViewStateCapture=_suppressViewStateCapture;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (strong, nonatomic) TPTheme *theme;
@property (readonly, nonatomic) TSDThumbnailController *thumbnailController; // @synthesize thumbnailController=_thumbnailController;
@property (nonatomic) double topMargin;
@property (readonly, nonatomic, getter=isTrackingChanges) BOOL trackingChanges;
@property (copy, nonatomic) TPUIState *uiState; // @synthesize uiState=_uiState;
@property (readonly, nonatomic) struct CGSize unrotatedPaperSize;
@property (nonatomic) BOOL usesSingleHeaderFooter;
@property (readonly, nonatomic) BOOL wasCreatedFromTemplate; // @synthesize wasCreatedFromTemplate=_wasCreatedFromTemplate;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (struct CGSize)pageSizeFromPaperSize:(struct CGSize)arg1 pageScale:(double)arg2 orientation:(long long)arg3;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (void)addRemappedTableName:(id)arg1;
- (unsigned long long)applicationType;
- (double)bodyWidth;
- (BOOL)cellCommentsAllowedOnInfo:(id)arg1;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (id)childEnumerator;
- (id)citationRecords;
- (void)clearRemappedTableNames;
- (void)dealloc;
- (void)didAddDrawable:(id)arg1;
- (void)didEnterBackground;
- (BOOL)documentAllowsPencilAnnotationsOnModel:(id)arg1;
- (void)documentDidLoad;
- (BOOL)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)equationEnvironment;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;
- (double)footnoteGap;
- (long long)footnoteKind;
- (BOOL)footnotesShouldAffectBodyLayout;
- (id)freehandDrawingToolkitUIState;
- (BOOL)freehandDrawingsRequireSpacerShape;
- (BOOL)hasPageBackgroundsForSections;
- (BOOL)hasPencilAnnotations;
- (BOOL)hasViewState;
- (const struct __CFLocale *)hyphenationLocale;
- (void)i_upgradeSectionsForPageTemplates;
- (int)indexForObject:(id)arg1;
- (id)initForThemeImportWithContext:(id)arg1;
- (id)initUsingDefaultThemeWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)invalidateThumbnailForPageIndex:(unsigned long long)arg1;
- (void)invalidateViewState;
- (BOOL)isDrawableOnPageMaster:(id)arg1;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isPendingTableNameUniquification;
- (BOOL)isSectionModel:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)markStringForFootnoteReferenceStorage:(id)arg1 ignoreDeletedFootnotes:(BOOL)arg2 forceDocumentEndnotes:(BOOL)arg3;
- (id)modelEnumeratorForSearchWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(CDUnknownBlockType)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (BOOL)needsToExplainEnablingChangeTracking;
- (unsigned int)nextUntitledResolverIndex;
- (id)pBlankPageTemplate;
- (void)pCommonInitialization;
- (struct CGRect)pConjureUpBodyRect;
- (id)pCreateBlankPageTemplate;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(BOOL)arg2;
- (void)pCreateFloatingDrawables;
- (void)pCreateFlowInfoContainer;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2;
- (unsigned long long)p_autoNumberForStorage:(id)arg1 ignoreDeletedFootnotes:(BOOL)arg2 footnoteKind:(long long)arg3;
- (BOOL)p_drawableInfoIsOwnedByATPPageTemplate:(id)arg1;
- (void)p_initializeShowInBookmarksListParagraphStylesProperty;
- (id)p_previewImageWithImageSize:(struct CGSize)arg1;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCModelForUnity20;
- (void)p_upgradeTOCStyles;
- (struct CGRect)pageBoundsWithinMargins;
- (void)pageCountDidChangeForPageController:(id)arg1;
- (unsigned long long)pageIndexForThumbnailIdentifier:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (BOOL)pageMastersAllowDrawable:(id)arg1;
- (unsigned long long)pageTemplateIndexForModelObject:(id)arg1;
- (id)pageTemplateWithName:(id)arg1;
- (BOOL)prepareAndValidateSidecarViewStateObjectWithVersionUUIDMismatch:(id)arg1 originalDocumentViewStateObject:(id)arg2;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (id)previewImageForSize:(struct CGSize)arg1;
- (void)readCanvasState;
- (void)readViewState;
- (id)remappedTableNames;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)resumeBackgroundActivities;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned long long)rootIndexForObject:(id)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyStorage:(id)arg1 dolcContext:(id)arg2;
- (void)setIndex:(int)arg1 forObject:(id)arg2;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setValue:(double)arg1 forMargin:(long long)arg2;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldHyphenate;
- (BOOL)shouldShowChangeKind:(int)arg1 date:(id)arg2;
- (BOOL)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2;
- (id)storagesWithChanges;
- (BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
- (void)suspendBackgroundActivities;
- (id)thumbnailIdentifierForPageIndex:(unsigned long long)arg1;
- (Class)thumbnailImagerClass;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 topMargin:(double)arg4 bottomMargin:(double)arg5 headerMargin:(double)arg6 footerMargin:(double)arg7;
- (BOOL)useLigatures;
- (id)uuidPathPrefixComponentsForInfo:(id)arg1;
- (double)valueForMargin:(long long)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)willClose;
- (void)willEnterForeground;
- (void)willHide;
- (void)willRemoveDrawable:(id)arg1;

@end

