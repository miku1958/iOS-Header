//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject
{
    BOOL _shouldReturnScannerGroups;
    BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
    BOOL _shouldIncludeKeyboardObscuredElements;
    BOOL _shouldUseAllSubviews;
    BOOL _includeHiddenViews;
    BOOL _includeWindowlessViews;
    BOOL _sorted;
    BOOL _includeAncestorsOfSelfInSiblingMatch;
    BOOL _forSpeakScreen;
    BOOL _shouldIncludeStatusBarWindow;
    long long _direction;
    CDUnknownBlockType _leafNodePredicate;
    NSArray *_allowedViewsForTraversal;
    CDUnknownBlockType _alternateViewChildrenHandler;
}

@property (strong, nonatomic) NSArray *allowedViewsForTraversal; // @synthesize allowedViewsForTraversal=_allowedViewsForTraversal;
@property (copy, nonatomic) CDUnknownBlockType alternateViewChildrenHandler; // @synthesize alternateViewChildrenHandler=_alternateViewChildrenHandler;
@property (nonatomic) long long direction; // @synthesize direction=_direction;
@property (nonatomic) BOOL forSpeakScreen; // @synthesize forSpeakScreen=_forSpeakScreen;
@property (nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch; // @synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch;
@property (nonatomic) BOOL includeHiddenViews; // @synthesize includeHiddenViews=_includeHiddenViews;
@property (nonatomic) BOOL includeWindowlessViews; // @synthesize includeWindowlessViews=_includeWindowlessViews;
@property (copy, nonatomic) CDUnknownBlockType leafNodePredicate; // @synthesize leafNodePredicate=_leafNodePredicate;
@property (nonatomic) BOOL shouldIncludeKeyboardObscuredElements; // @synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements;
@property (nonatomic) BOOL shouldIncludeStatusBarWindow; // @synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow;
@property (nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame; // @synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) BOOL shouldReturnScannerGroups; // @synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups;
@property (nonatomic) BOOL shouldUseAllSubviews; // @synthesize shouldUseAllSubviews=_shouldUseAllSubviews;
@property (nonatomic) BOOL sorted; // @synthesize sorted=_sorted;

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultVoiceOverOptions;
+ (id)defaultVoiceOverOptionsHonoringGroupsForContainer:(id)arg1;
+ (id)options;
+ (id)optionsHonoringGroupsForContainer:(id)arg1;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
