//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, NSString, TSKAnnotationAuthor, TSKSelectionPath, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedViewState : TSPObject
{
    struct CGRect _visibleRect;
    TSKSelectionPath *_compatibilitySelectionPath;
    TSKSelectionPath *_selectionPath;
    TSWPSelection *_bodySelection;
    BOOL _masterDrawablesSelectable;
    NSMutableDictionary *_chartUIState;
    BOOL _rulerVisible;
    BOOL _layoutBordersVisible;
    BOOL _wordCountHUDVisible;
    BOOL _showsComments;
    BOOL _showsCTMarkup;
    BOOL _showsCTDeletions;
    BOOL _hasShowsCTMarkup;
    BOOL _hasShowsCTDeletions;
    BOOL _changeTrackingPaused;
    BOOL _showsPageNavigator;
    BOOL _showsActivitySidebar;
    int _viewScaleMode;
    double _viewScale;
    struct CGRect _windowFrame;
    int _viewScaleModeiOS;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    BOOL _inspectorHidden;
    int _wordCountHUDType;
    struct CGPoint _wordCountHUDPosition;
    BOOL _showUserDefinedGuides;
    NSString *_authorFilterName;
    TSKAnnotationAuthor *_authorFilter;
}

@property (strong, nonatomic) TSKSelectionPath *compatibilitySelectionPath; // @synthesize compatibilitySelectionPath=_compatibilitySelectionPath;
@property (strong, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;

- (void).cxx_destruct;
- (void)captureViewStateWithProvider:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_setArchivedViewStateDefaults;
- (void)readCanvasStateWithConsumer:(id)arg1;
- (void)readViewStateWithConsumer:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)showsComments;

@end

