//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIFocusGuide, UIImage, UIView, _UIDebugIssueReport, _UIDebugLogReport, _UIFocusItemInfo, _UIFocusMapSearchInfo, _UIFocusMovementInfo;
@protocol UIFocusEnvironment, UIFocusItem, UIFocusItemScrollableContainer, _UIFocusUpdateRequesting;

@interface UIFocusUpdateContext : NSObject
{
    struct {
        unsigned int isValid:1;
        unsigned int hasValidated:1;
        unsigned int shouldUpdateDestinationItem:1;
        unsigned int sourceItemMayRemainFocused:1;
        unsigned int didResolveCommonAncestorEnvironment:1;
    } _flags;
    _UIFocusItemInfo *_destinationItemInfo;
    id<UIFocusEnvironment> _commonAncestorEnvironment;
    UIImage *_regionMapSnapshotsVisualRepresentation;
    id<_UIFocusUpdateRequesting> _request;
    _UIFocusItemInfo *_sourceItemInfo;
    _UIFocusMovementInfo *_focusMovement;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    id<UIFocusEnvironment> _initialDestinationEnvironment;
    id<UIFocusItemScrollableContainer> _commonScrollableContainer;
    double _destinationViewDistanceOffscreen;
    NSArray *_regionMapSnapshots;
    _UIDebugLogReport *_preferredFocusReport;
    _UIDebugIssueReport *_validationReport;
    UIFocusGuide *_focusedGuide;
}

@property (readonly, weak, nonatomic, getter=_commonAncestorEnvironment) id<UIFocusEnvironment> commonAncestorEnvironment; // @synthesize commonAncestorEnvironment=_commonAncestorEnvironment;
@property (strong, nonatomic, getter=_commonScrollableContainer, setter=_setCommonScrollableContainer:) id<UIFocusItemScrollableContainer> commonScrollableContainer; // @synthesize commonScrollableContainer=_commonScrollableContainer;
@property (readonly, copy, nonatomic, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo; // @synthesize destinationItemInfo=_destinationItemInfo;
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen; // @synthesize destinationViewDistanceOffscreen=_destinationViewDistanceOffscreen;
@property (readonly, nonatomic) unsigned long long focusHeading;
@property (strong, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property (readonly, nonatomic, getter=_focusMovement) _UIFocusMovementInfo *focusMovement; // @synthesize focusMovement=_focusMovement;
@property (readonly, nonatomic, getter=_focusVelocity) struct CGVector focusVelocity;
@property (readonly, weak, nonatomic, getter=_focusedGuide) UIFocusGuide *focusedGuide; // @synthesize focusedGuide=_focusedGuide;
@property (readonly, weak, nonatomic, getter=_initialDestinationEnvironment) id<UIFocusEnvironment> initialDestinationEnvironment; // @synthesize initialDestinationEnvironment=_initialDestinationEnvironment;
@property (readonly, weak, nonatomic) id<UIFocusItem> nextFocusedItem;
@property (readonly, weak, nonatomic) UIView *nextFocusedView;
@property (strong, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport; // @synthesize preferredFocusReport=_preferredFocusReport;
@property (readonly, weak, nonatomic) id<UIFocusItem> previouslyFocusedItem;
@property (readonly, weak, nonatomic) UIView *previouslyFocusedView;
@property (strong, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots; // @synthesize regionMapSnapshots=_regionMapSnapshots;
@property (readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation; // @synthesize regionMapSnapshotsVisualRepresentation=_regionMapSnapshotsVisualRepresentation;
@property (readonly, nonatomic, getter=_request) id<_UIFocusUpdateRequesting> request; // @synthesize request=_request;
@property (readonly, copy, nonatomic, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo; // @synthesize sourceItemInfo=_sourceItemInfo;
@property (strong, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport; // @synthesize validationReport=_validationReport;

+ (id)_defaultValidationReportFormatter;
- (void).cxx_destruct;
- (void)_didUpdateFocus;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_initWithContext:(id)arg1;
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;
- (id)_initWithFocusUpdateRequest:(id)arg1;
- (BOOL)_isValidInFocusSystem:(id)arg1;
- (id)_publicRegionMapSnapshots;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setSourceItemInfo:(id)arg1;
- (void)_updateDestinationItemIfNeeded;
- (BOOL)_validate;
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)init;

@end

