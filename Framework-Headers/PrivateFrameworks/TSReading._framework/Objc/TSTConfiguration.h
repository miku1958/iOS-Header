//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTConfiguration : NSObject
{
    BOOL mSupportsContainedTextEditing;
    BOOL mSupportsResumingTextEditing;
    BOOL mBeginEditingOnSingleTap;
    BOOL mSupportsMergedCells;
    BOOL mSupportsHiddenCells;
    BOOL mReturnWhileEditingNavigates;
    BOOL mTabWhileEditingNavigates;
    BOOL mArrowKeyAtEdgeWhileEditingNavigates;
    BOOL mArrowKeysWrap;
    BOOL mArrowKeysNavigateWhenEditingBeganByTyping;
    BOOL mBackTabWraps;
    BOOL mTabAtEdgeAddsRow;
    BOOL mTabAtEdgeAddsColumn;
    BOOL mPastesTile;
    BOOL mAllowHorizontalAutoresize;
    BOOL mSelectsCellOnInitialTap;
    BOOL mDragByHandleOnly;
    BOOL mCornersCanDragResize;
    BOOL mSupportsControlCells;
    BOOL mHasLargerFonts;
    BOOL mSupportsFrozenHeaders;
    BOOL mSupportsAutoResizedTables;
    BOOL mSupportsCreateChartFromSelection;
    BOOL mShowsAddressBarAlways;
    BOOL mShowsAddressBarHighlights;
    BOOL mShowsAddressBarLetteringAndNumbering;
    BOOL mSelectionUsesBezierPath;
    BOOL mUsesWholeChromeResizer;
    BOOL mSupportsCanvasReferenceEditing;
    BOOL mUsesLimitedAutomaticFormatParsing;
    BOOL mSupportsFormulaEditing;
    BOOL mSupportsImplicitEditing;
    BOOL mFormulaEqualsTokenIsSelectable;
    BOOL mAllowFreeformFormulaText;
    BOOL mAllowWhitespaceInFormulas;
    BOOL mRequireMatchedFunctionTokens;
    BOOL mShowsHideUnhideUI;
    BOOL mExportPermanentHidingState;
    BOOL mShowsCellOverflowIndicator;
    BOOL mSupportsAutofill;
    BOOL mUsesLimitedNumberFormatInspector;
    BOOL mHeadersFrozenByDefault;
    BOOL mCreateLargeDefaultTables;
    BOOL mTableNameEnabledInNewTables;
    BOOL mSupportsRowColumnAdderKnob;
    BOOL mSupportsDragDropMoveMode;
    BOOL mExportsCellComments;
    BOOL mExportsCellAnnotations;
    BOOL mSupportsRepeatHeaderRowsOnEachPage;
    BOOL _formulaEditorEvaluatesFormulas;
    BOOL _showReferenceHighlightsOnFormulaCellSelection;
    BOOL _tokenizeFormulaStringLiterals;
    BOOL _cellEditorsCanScrollToNonLocalTableSelection;
    BOOL _formulaCellEditorSupportsTextTokenEditor;
    BOOL _disableImplicitNaming;
    BOOL _supportsComplexFilterUI;
    BOOL _supportsQuickFilterUI;
    BOOL _pasteFilterHidingAsUserHiding;
    BOOL _allowsFullyFilteredTables;
    unsigned int mMaxNumberOfRows;
    unsigned int mMaxNumberOfColumns;
    unsigned int mMaxNumberOfPopulatedCells;
}

@property (nonatomic) BOOL allowFreeformFormulaText; // @synthesize allowFreeformFormulaText=mAllowFreeformFormulaText;
@property (nonatomic) BOOL allowHorizontalAutoresize; // @synthesize allowHorizontalAutoresize=mAllowHorizontalAutoresize;
@property (nonatomic) BOOL allowWhitespaceInFormulas; // @synthesize allowWhitespaceInFormulas=mAllowWhitespaceInFormulas;
@property (nonatomic) BOOL allowsFullyFilteredTables; // @synthesize allowsFullyFilteredTables=_allowsFullyFilteredTables;
@property (nonatomic) BOOL arrowKeyAtEdgeWhileEditingNavigates; // @synthesize arrowKeyAtEdgeWhileEditingNavigates=mArrowKeyAtEdgeWhileEditingNavigates;
@property (nonatomic) BOOL arrowKeysNavigateWhenEditingBeganByTyping; // @synthesize arrowKeysNavigateWhenEditingBeganByTyping=mArrowKeysNavigateWhenEditingBeganByTyping;
@property (nonatomic) BOOL arrowKeysWrap; // @synthesize arrowKeysWrap=mArrowKeysWrap;
@property (nonatomic) BOOL backTabWraps; // @synthesize backTabWraps=mBackTabWraps;
@property (nonatomic) BOOL beginEditingOnSingleTap; // @synthesize beginEditingOnSingleTap=mBeginEditingOnSingleTap;
@property (nonatomic) BOOL cellEditorsCanScrollToNonLocalTableSelection; // @synthesize cellEditorsCanScrollToNonLocalTableSelection=_cellEditorsCanScrollToNonLocalTableSelection;
@property (nonatomic) BOOL cornersCanDragResize; // @synthesize cornersCanDragResize=mCornersCanDragResize;
@property (nonatomic) BOOL createLargeDefaultTables; // @synthesize createLargeDefaultTables=mCreateLargeDefaultTables;
@property (nonatomic) BOOL disableImplicitNaming; // @synthesize disableImplicitNaming=_disableImplicitNaming;
@property (nonatomic) BOOL dragByHandleOnly; // @synthesize dragByHandleOnly=mDragByHandleOnly;
@property (nonatomic) BOOL exportPermanentHidingState; // @synthesize exportPermanentHidingState=mExportPermanentHidingState;
@property (nonatomic) BOOL exportsCellAnnotations; // @synthesize exportsCellAnnotations=mExportsCellAnnotations;
@property (nonatomic) BOOL exportsCellComments; // @synthesize exportsCellComments=mExportsCellComments;
@property (nonatomic) BOOL formulaCellEditorSupportsTextTokenEditor; // @synthesize formulaCellEditorSupportsTextTokenEditor=_formulaCellEditorSupportsTextTokenEditor;
@property (nonatomic) BOOL formulaEditorEvaluatesFormulas; // @synthesize formulaEditorEvaluatesFormulas=_formulaEditorEvaluatesFormulas;
@property (nonatomic) BOOL formulaEqualsTokenIsSelectable; // @synthesize formulaEqualsTokenIsSelectable=mFormulaEqualsTokenIsSelectable;
@property (nonatomic) BOOL hasLargerFonts; // @synthesize hasLargerFonts=mHasLargerFonts;
@property (nonatomic) BOOL headersFrozenByDefault; // @synthesize headersFrozenByDefault=mHeadersFrozenByDefault;
@property (nonatomic) unsigned int maxNumberOfColumns; // @synthesize maxNumberOfColumns=mMaxNumberOfColumns;
@property (nonatomic) unsigned int maxNumberOfPopulatedCells; // @synthesize maxNumberOfPopulatedCells=mMaxNumberOfPopulatedCells;
@property (nonatomic) unsigned int maxNumberOfRows; // @synthesize maxNumberOfRows=mMaxNumberOfRows;
@property (nonatomic) BOOL pasteFilterHidingAsUserHiding; // @synthesize pasteFilterHidingAsUserHiding=_pasteFilterHidingAsUserHiding;
@property (nonatomic) BOOL pastesTile; // @synthesize pastesTile=mPastesTile;
@property (nonatomic) BOOL requireMatchedFunctionTokens; // @synthesize requireMatchedFunctionTokens=mRequireMatchedFunctionTokens;
@property (nonatomic) BOOL returnWhileEditingNavigates; // @synthesize returnWhileEditingNavigates=mReturnWhileEditingNavigates;
@property (nonatomic) BOOL selectionUsesBezierPath; // @synthesize selectionUsesBezierPath=mSelectionUsesBezierPath;
@property (nonatomic) BOOL selectsCellOnInitialTap; // @synthesize selectsCellOnInitialTap=mSelectsCellOnInitialTap;
@property (nonatomic) BOOL showReferenceHighlightsOnFormulaCellSelection; // @synthesize showReferenceHighlightsOnFormulaCellSelection=_showReferenceHighlightsOnFormulaCellSelection;
@property (nonatomic) BOOL showsAddressBarAlways; // @synthesize showsAddressBarAlways=mShowsAddressBarAlways;
@property (nonatomic) BOOL showsAddressBarHighlights; // @synthesize showsAddressBarHighlights=mShowsAddressBarHighlights;
@property (nonatomic) BOOL showsAddressBarLetteringAndNumbering; // @synthesize showsAddressBarLetteringAndNumbering=mShowsAddressBarLetteringAndNumbering;
@property (nonatomic) BOOL showsCellOverflowIndicator; // @synthesize showsCellOverflowIndicator=mShowsCellOverflowIndicator;
@property (nonatomic) BOOL showsHideUnhideUI; // @synthesize showsHideUnhideUI=mShowsHideUnhideUI;
@property (nonatomic) BOOL supportsAutoResizedTables; // @synthesize supportsAutoResizedTables=mSupportsAutoResizedTables;
@property (nonatomic) BOOL supportsAutofill; // @synthesize supportsAutofill=mSupportsAutofill;
@property (nonatomic) BOOL supportsCanvasReferenceEditing; // @synthesize supportsCanvasReferenceEditing=mSupportsCanvasReferenceEditing;
@property (nonatomic) BOOL supportsComplexFilterUI; // @synthesize supportsComplexFilterUI=_supportsComplexFilterUI;
@property (nonatomic) BOOL supportsContainedTextEditing; // @synthesize supportsContainedTextEditing=mSupportsContainedTextEditing;
@property (nonatomic) BOOL supportsControlCells; // @synthesize supportsControlCells=mSupportsControlCells;
@property (nonatomic) BOOL supportsCreateChartFromSelection; // @synthesize supportsCreateChartFromSelection=mSupportsCreateChartFromSelection;
@property (nonatomic) BOOL supportsDragDropMoveMode; // @synthesize supportsDragDropMoveMode=mSupportsDragDropMoveMode;
@property (nonatomic) BOOL supportsFormulaEditing; // @synthesize supportsFormulaEditing=mSupportsFormulaEditing;
@property (nonatomic) BOOL supportsFrozenHeaders; // @synthesize supportsFrozenHeaders=mSupportsFrozenHeaders;
@property (nonatomic) BOOL supportsHiddenCells; // @synthesize supportsHiddenCells=mSupportsHiddenCells;
@property (nonatomic) BOOL supportsImplicitEditing; // @synthesize supportsImplicitEditing=mSupportsImplicitEditing;
@property (nonatomic) BOOL supportsMergedCells; // @synthesize supportsMergedCells=mSupportsMergedCells;
@property (nonatomic) BOOL supportsQuickFilterUI; // @synthesize supportsQuickFilterUI=_supportsQuickFilterUI;
@property (nonatomic) BOOL supportsRepeatHeaderRowsOnEachPage; // @synthesize supportsRepeatHeaderRowsOnEachPage=mSupportsRepeatHeaderRowsOnEachPage;
@property (nonatomic) BOOL supportsResumingTextEditing; // @synthesize supportsResumingTextEditing=mSupportsResumingTextEditing;
@property (nonatomic) BOOL supportsRowColumnAdderKnob; // @synthesize supportsRowColumnAdderKnob=mSupportsRowColumnAdderKnob;
@property (nonatomic) BOOL tabAtEdgeAddsColumn; // @synthesize tabAtEdgeAddsColumn=mTabAtEdgeAddsColumn;
@property (nonatomic) BOOL tabAtEdgeAddsRow; // @synthesize tabAtEdgeAddsRow=mTabAtEdgeAddsRow;
@property (nonatomic) BOOL tabWhileEditingNavigates; // @synthesize tabWhileEditingNavigates=mTabWhileEditingNavigates;
@property (nonatomic) BOOL tableNameEnabledInNewTables; // @synthesize tableNameEnabledInNewTables=mTableNameEnabledInNewTables;
@property (nonatomic) BOOL tokenizeFormulaStringLiterals; // @synthesize tokenizeFormulaStringLiterals=_tokenizeFormulaStringLiterals;
@property (nonatomic) BOOL usesLimitedAutomaticFormatParsing; // @synthesize usesLimitedAutomaticFormatParsing=mUsesLimitedAutomaticFormatParsing;
@property (nonatomic) BOOL usesLimitedNumberFormatInspector; // @synthesize usesLimitedNumberFormatInspector=mUsesLimitedNumberFormatInspector;
@property (nonatomic) BOOL usesWholeChromeResizer; // @synthesize usesWholeChromeResizer=mUsesWholeChromeResizer;

+ (void)resetSharedTableConfiguration;
+ (id)sharedTableConfiguration;
- (id)init;

@end

