//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXRuntime/AXGroupable-Protocol.h>

@class AXElementGroup, AXUIElement, NSArray, NSDictionary, NSString, NSURL;

@interface AXElement : NSObject <AXGroupable>
{
    BOOL _representsScannerGroup;
    AXUIElement *_uiElement;
    AXElementGroup *_parentGroup;
    AXElement *_cachedRemoteParent;
    AXElement *_cachedRemoteParentForContextID;
    struct CGPath *_cachedPath;
    struct CGRect _cachedFrame;
    struct CGRect _cachedVisibleFrame;
}

@property (readonly, nonatomic) AXElement *accessibilityUIServerApplication;
@property (readonly, nonatomic) AXElement *application;
@property (readonly, nonatomic) int applicationOrientation;
@property (nonatomic) BOOL assistiveTechFocused;
@property (strong, nonatomic) AXElement *autoscrollTarget;
@property (readonly, nonatomic) NSString *bundleId;
@property (nonatomic) struct CGRect cachedFrame; // @synthesize cachedFrame=_cachedFrame;
@property (strong, nonatomic) struct CGPath *cachedPath; // @synthesize cachedPath=_cachedPath;
@property (strong, nonatomic) AXElement *cachedRemoteParent; // @synthesize cachedRemoteParent=_cachedRemoteParent;
@property (strong, nonatomic) AXElement *cachedRemoteParentForContextID; // @synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID;
@property (nonatomic) struct CGRect cachedVisibleFrame; // @synthesize cachedVisibleFrame=_cachedVisibleFrame;
@property (readonly, nonatomic) BOOL canPerformEscape;
@property (readonly, nonatomic) BOOL canPerformZoom;
@property (readonly, nonatomic) struct CGPoint centerPoint;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) AXElement *currentApplication;
@property (readonly, nonatomic) NSArray *currentApplications;
@property (readonly, nonatomic) NSArray *currentApplicationsIgnoringSiri;
@property (readonly, nonatomic) NSArray *customActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct __AXUIElement *elementRef;
@property (readonly, nonatomic) NSArray *elementsWithSemanticContext;
@property (readonly, nonatomic) NSArray *explorerElements;
@property (readonly, nonatomic) AXElement *firstElementInApplication;
@property (readonly, nonatomic) AXElement *firstElementInApplicationForFocus;
@property (readonly, nonatomic) AXElement *firstResponder;
@property (readonly, nonatomic) struct CGRect focusableFrameForZoom;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) BOOL hasTextEntry;
@property (readonly, nonatomic) BOOL hasVariantKeys;
@property (readonly, nonatomic) BOOL hasWebContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *hint;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAXUIServer;
@property (readonly, nonatomic) BOOL isAccessibilityOpaqueElementProvider;
@property (readonly, nonatomic) BOOL isAccessibleElement;
@property (readonly, nonatomic) BOOL isAutoscrolling;
@property (readonly, nonatomic) BOOL isKeyboardKey;
@property (readonly, nonatomic) BOOL isMathEquation;
@property (readonly, nonatomic) BOOL isScannerElement;
@property (readonly, nonatomic) BOOL isScreenLocked;
@property (readonly, nonatomic) BOOL isSpringBoard;
@property (readonly, nonatomic) BOOL isSystemApplication;
@property (readonly, nonatomic) BOOL isSystemWideElement;
@property (readonly, nonatomic) BOOL isTouchContainer;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic, getter=isNativeFocused) BOOL nativeFocus;
@property (readonly, nonatomic) AXElement *nativeFocusElement;
@property (readonly, nonatomic) AXElement *nativeFocusPreferredElement;
@property (readonly, nonatomic) NSArray *nativeFocusableElements;
@property (readonly, nonatomic) NSArray *parent;
@property (nonatomic) AXElementGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property (nonatomic, getter=isPassivelyListeningForEvents) BOOL passivelyListeningForEvents;
@property (readonly, nonatomic) struct CGPath *path;
@property (readonly, nonatomic) AXElement *remoteParent;
@property (readonly, nonatomic) BOOL representsScannerGroup; // @synthesize representsScannerGroup=_representsScannerGroup;
@property (readonly, nonatomic) int scannerActivateBehavior;
@property (readonly, nonatomic) int scanningBehaviorTraits;
@property (nonatomic) struct _NSRange selectedTextRange;
@property (readonly, nonatomic) NSDictionary *semanticContext;
@property (readonly, nonatomic) NSArray *siriContentElementsWithSemanticContext;
@property (readonly, nonatomic) NSArray *siriContentNativeFocusableElements;
@property (readonly, nonatomic) AXElement *springBoardApplication;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedGestures;
@property (readonly, nonatomic) AXElement *systemApplication;
@property (readonly, nonatomic) struct CGRect textCursorFrame;
@property (readonly, nonatomic) NSArray *textOperations;
@property (readonly, nonatomic) AXElement *touchContainer;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) NSArray *typingCandidates;
@property (strong, nonatomic) AXUIElement *uiElement; // @synthesize uiElement=_uiElement;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) NSString *value;
@property (readonly, nonatomic) NSArray *variantKeys;
@property (readonly, nonatomic) NSArray *visibleElements;
@property (readonly, nonatomic) struct CGRect visibleFrame;
@property (readonly, nonatomic) struct CGPoint visiblePoint;
@property (readonly, nonatomic) unsigned int windowContextId;

+ (id)elementAtCoordinate:(struct CGPoint)arg1 withVisualPadding:(BOOL)arg2;
+ (id)elementWithAXUIElement:(struct __AXUIElement *)arg1;
+ (id)elementWithUIElement:(id)arg1;
+ (id)elementsWithUIElements:(id)arg1;
+ (id)primaryApp;
+ (void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)systemWideElement;
+ (void)unregisterNotifications:(id)arg1;
- (id)_axElementsForAXUIElements:(id)arg1;
- (id)_elementForAttribute:(int)arg1 shouldUpdateCache:(BOOL)arg2 shouldFetchAttributes:(BOOL)arg3;
- (BOOL)_performActivate;
- (id)_remoteParentForContextID;
- (void)_updateLabel;
- (BOOL)_zoomInOrOut:(BOOL)arg1;
- (id)auditIssuesForOptions:(id)arg1;
- (void)autoscrollInDirection:(int)arg1;
- (BOOL)canPerformActivate;
- (BOOL)canPerformSecondaryActivate;
- (BOOL)canPerformTrackingDetail;
- (BOOL)canScrollInAtLeastOneDirection;
- (void)clearCachedFrame:(BOOL)arg1 cachedVisibleFrame:(BOOL)arg2;
- (id)containerTypes;
- (struct CGPath *)convertPath:(struct CGPath *)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (void)dealloc;
- (void)decreaseAutoscrollSpeed;
- (double)distanceToElement:(id)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (id)elementForAttribute:(int)arg1;
- (id)elementForAttribute:(int)arg1 parameter:(id)arg2;
- (id)elementsForAttribute:(int)arg1;
- (id)elementsMatchingText:(id)arg1;
- (id)firstResponderForFocus;
- (BOOL)hasAllTraits:(unsigned long long)arg1;
- (BOOL)hasAnyTraits:(unsigned long long)arg1;
- (BOOL)hasOnlyTraits:(unsigned long long)arg1;
- (id)highestAncestorGroup;
- (void)increaseAutoscrollSpeed;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1;
- (id)initWithUIElement:(id)arg1;
- (void)insertText:(id)arg1 atPosition:(long long)arg2;
- (void)insertTextAtCurrentPosition:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isMap;
- (id)keyboardContainer;
- (BOOL)longPress;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (void)pauseAutoscrolling;
- (BOOL)performAction:(int)arg1;
- (BOOL)performAction:(int)arg1 withValue:(id)arg2;
- (BOOL)press;
- (BOOL)pressTVBackButton;
- (BOOL)pressTVDataOnScreenButton;
- (BOOL)pressTVDownButton;
- (BOOL)pressTVFastForwardButton;
- (BOOL)pressTVLeftButton;
- (BOOL)pressTVMenuButton;
- (BOOL)pressTVMicButton;
- (BOOL)pressTVNextTrackButton;
- (BOOL)pressTVPauseButton;
- (BOOL)pressTVPlayButton;
- (BOOL)pressTVPlayPauseButton;
- (BOOL)pressTVPreviousTrackButton;
- (BOOL)pressTVRewindButton;
- (BOOL)pressTVRightButton;
- (BOOL)pressTVSelectButton;
- (BOOL)pressTVSkipBackwardsButton;
- (BOOL)pressTVSkipForwardsButton;
- (BOOL)pressTVStopButton;
- (BOOL)pressTVUpButton;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)remoteApplication;
- (struct __AXUIElement *)scrollAncestorForScrollAction:(int)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)scrollToVisible;
- (void)sendUserEventOccurred;
- (BOOL)setNativeFocus;
- (BOOL)supportsAction:(int)arg1;
- (BOOL)systemPressTVDownButton;
- (BOOL)systemPressTVHomeButton;
- (BOOL)systemPressTVLeftButton;
- (BOOL)systemPressTVMenuButton;
- (BOOL)systemPressTVPlayPauseButton;
- (BOOL)systemPressTVRightButton;
- (BOOL)systemPressTVSelectButton;
- (BOOL)systemPressTVSiriButton;
- (BOOL)systemPressTVUpButton;
- (void)updateCache:(int)arg1;
- (BOOL)viewHierarchyHasNativeFocus;
- (BOOL)zoomIn;
- (BOOL)zoomOut;

@end

