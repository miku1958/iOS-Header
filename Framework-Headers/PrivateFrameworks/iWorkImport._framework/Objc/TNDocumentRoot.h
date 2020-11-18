//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import <iWorkImport/TSTFormsSheetProvider-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>

@class NSArray, NSMutableArray, NSString, TNTheme, TNUIState, TSKTreeNode, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider, TSTFormsSheetProvider>
{
    NSString *_paperID;
    struct CGSize _pageSize;
    BOOL _printingAllSheets;
    TNTheme *_theme;
    TSKTreeNode *_sidebarOrder;
    TNUIState *_uiState;
    NSMutableArray *_mutableSheets;
    TSSStylesheet *_stylesheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *mutableSheets; // @synthesize mutableSheets=_mutableSheets;
@property (nonatomic) struct CGSize pageSize;
@property (copy, nonatomic) NSString *paperID;
@property (readonly, nonatomic, getter=isPrintPreviewSupported) BOOL printPreviewSupported;
@property (copy, nonatomic) NSString *printerID;
@property (nonatomic, getter=isPrintingAllSheets) BOOL printingAllSheets; // @synthesize printingAllSheets=_printingAllSheets;
@property (nonatomic) BOOL removedAllQuickCalcFunctions;
@property (copy, nonatomic) NSArray *selectedQuickCalcFunctions;
@property (readonly, copy, nonatomic) NSArray *sheets;
@property (strong, nonatomic) TSKTreeNode *sidebarOrder; // @synthesize sidebarOrder=_sidebarOrder;
@property (strong, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long tableCount;
@property (readonly, nonatomic) TNTheme *theme; // @synthesize theme=_theme;
@property (strong, nonatomic) TNUIState *uiState; // @synthesize uiState=_uiState;

+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)activeSheet;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (unsigned long long)applicationType;
- (id)childEnumerator;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (BOOL)containsForms;
- (void)documentDidLoad;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (void)insertSheet:(id)arg1 sheetIndex:(unsigned long long)arg2 forPasteOrUndoDelete:(BOOL)arg3 context:(id)arg4;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isPendingTableNameUniquification;
- (BOOL)isTableLinkedToAForm:(const UUIDData_5fbc143e *)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)moveSheetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)nearestDisplayableSheetToSheet:(id)arg1;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (struct CGSize)p_adjustCapturedContentSize:(struct CGSize)arg1 toAspectRatio:(struct CGSize)arg2;
- (void)p_buildSidebarOrder;
- (id)p_chartsWantingDeferredUpgrade;
- (struct CGRect)p_contentFrameToCaptureForSheet:(id)arg1;
- (double)p_imageBorderForSize:(struct CGSize)arg1;
- (id)p_previewImageWithImageSize:(struct CGSize)arg1;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (unsigned long long)p_tableCountForSheet:(id)arg1;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (BOOL)prepareAndValidateSidecarViewStateObjectWithVersionUUIDMismatch:(id)arg1 originalDocumentViewStateObject:(id)arg2;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (id)previewImageForSize:(struct CGSize)arg1;
- (void)removeAllSheets;
- (void)removeSheet:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldShowComments;
- (void)tableUID:(const UUIDData_5fbc143e *)arg1 changedToTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)uniqueNameForSheet:(id)arg1 appendNewTag:(BOOL)arg2;
- (id)untitledSheetName;
- (BOOL)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (BOOL)validNameForNewSheet:(id)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;

@end

