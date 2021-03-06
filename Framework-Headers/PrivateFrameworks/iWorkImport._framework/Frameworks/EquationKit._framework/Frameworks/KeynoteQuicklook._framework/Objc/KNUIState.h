//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>
#import <KeynoteQuicklook/TSAUIState-Protocol.h>

@class KNMacUILayout, KNSlideCollectionSelection, NSArray, NSMutableDictionary, NSSet, NSString, TSDFreehandDrawingToolkitUIState, TSKSelectionPath;

@interface KNUIState : NSObject <NSCopying, TSAUIState>
{
    double _mobileCanvasViewScale;
    struct CGPoint _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint _desktopCanvasOffset;
    BOOL _editingDisabled;
    NSMutableDictionary *_chartUIState;
    BOOL _slideViewFitsContentInWindow;
    BOOL _lightTableHidesSkippedSlides;
    BOOL _showsMobileLightTable;
    BOOL _mobileLightTableHidesSkippedSlides;
    BOOL _showsMobileOutline;
    BOOL _desktopOutlineViewDefaultFixed;
    BOOL _showSlideGuides;
    BOOL _showMasterGuides;
    BOOL _showsComments;
    BOOL _showsRuler;
    BOOL _commentsPrintingToggleEnabled;
    TSKSelectionPath *_selectionPath;
    KNMacUILayout *_documentUILayout;
    double _lightTableZoomScale;
    double _mobileLightTableZoomScale;
    double _desktopElementListViewWidth;
    double _desktopNavigatorViewWidth;
    double _desktopOutlineViewWidth;
    double _desktopPresenterNotesHeight;
    double _desktopPresenterNotesScrollPosition;
    NSSet *_collapsedSlideNodes;
    NSSet *_outlineCollapsedSlideNodes;
    NSSet *_outlineHasBodySlideNodes;
    NSArray *_elementListExpandedGroups;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    struct CGPoint _desktopMainWindowOrigin;
    struct CGSize _desktopMainContentSize;
}

@property (nonatomic) struct CGPoint canvasOffset;
@property (nonatomic) double canvasViewScale;
@property (copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=_collapsedSlideNodes;
@property (nonatomic) BOOL commentsPrintingToggleEnabled; // @synthesize commentsPrintingToggleEnabled=_commentsPrintingToggleEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desktopElementListViewWidth; // @synthesize desktopElementListViewWidth=_desktopElementListViewWidth;
@property (nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=_desktopMainContentSize;
@property (nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=_desktopMainWindowOrigin;
@property (nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=_desktopNavigatorViewWidth;
@property (nonatomic) BOOL desktopOutlineViewDefaultFixed; // @synthesize desktopOutlineViewDefaultFixed=_desktopOutlineViewDefaultFixed;
@property (nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=_desktopOutlineViewWidth;
@property (nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=_desktopPresenterNotesHeight;
@property (nonatomic) double desktopPresenterNotesScrollPosition; // @synthesize desktopPresenterNotesScrollPosition=_desktopPresenterNotesScrollPosition;
@property (copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=_documentUILayout;
@property (nonatomic) BOOL editingDisabled; // @synthesize editingDisabled=_editingDisabled;
@property (copy, nonatomic) NSArray *elementListExpandedGroups; // @synthesize elementListExpandedGroups=_elementListExpandedGroups;
@property (strong, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // @synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=_lightTableHidesSkippedSlides;
@property (nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=_lightTableZoomScale;
@property (nonatomic) BOOL mobileLightTableHidesSkippedSlides; // @synthesize mobileLightTableHidesSkippedSlides=_mobileLightTableHidesSkippedSlides;
@property (nonatomic) double mobileLightTableZoomScale; // @synthesize mobileLightTableZoomScale=_mobileLightTableZoomScale;
@property (copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes;
@property (copy, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes;
@property (copy, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property (nonatomic) BOOL showMasterGuides; // @synthesize showMasterGuides=_showMasterGuides;
@property (nonatomic) BOOL showSlideGuides; // @synthesize showSlideGuides=_showSlideGuides;
@property (nonatomic) BOOL showsComments; // @synthesize showsComments=_showsComments;
@property (nonatomic) BOOL showsMobileLightTable; // @synthesize showsMobileLightTable=_showsMobileLightTable;
@property (nonatomic) BOOL showsMobileOutline; // @synthesize showsMobileOutline=_showsMobileOutline;
@property (nonatomic) BOOL showsRuler; // @synthesize showsRuler=_showsRuler;
@property (readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) BOOL slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=_slideViewFitsContentInWindow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)loadFromArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (void)resetForInitialViewing;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)updateOutlineStateFromSlideTree:(id)arg1;

@end

