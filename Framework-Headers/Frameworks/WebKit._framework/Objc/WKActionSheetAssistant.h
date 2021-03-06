//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <WebKit/UIContextMenuInteractionDelegate-Protocol.h>
#import <WebKit/WKActionSheetDelegate-Protocol.h>

@class NSString;
@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    Optional_b5290310 _positionInformation;
    struct RetainPtr<UIContextMenuInteraction> _dataDetectorContextMenuInteraction;
    struct WeakObjCPtr<UIView> _view;
    BOOL _needsLinkIndicator;
    BOOL _isPresentingDDUserInterface;
    BOOL _hasPendingActionSheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WKActionSheetAssistantDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL needsLinkIndicator; // @synthesize needsLinkIndicator=_needsLinkIndicator;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(BOOL)arg3;
- (id)_elementActionForDDAction:(id)arg1;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (long long)_presentationStyleForPositionInfo:(const struct InteractionInformationAtPosition *)arg1 elementInfo:(id)arg2;
- (void)cleanupSheet;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)currentAvailableActionTitles;
- (Optional_b5290310)currentPositionInformation;
- (void)dealloc;
- (RetainPtr_c682c8da)defaultActionsForImageSheet:(id)arg1;
- (RetainPtr_c682c8da)defaultActionsForLinkSheet:(id)arg1;
- (void)ensureContextMenuInteraction;
- (void)handleElementActionWithType:(long long)arg1 element:(id)arg2 needsInteraction:(BOOL)arg3;
- (BOOL)hasContextMenuInteraction;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (void)interactionDidStartWithPositionInformation:(const struct InteractionInformationAtPosition *)arg1;
- (BOOL)isShowingSheet;
- (BOOL)presentSheet;
- (struct CGRect)presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect)presentationRectForIndicatedElement;
- (struct CGRect)presentationRectInHostViewForSheet;
- (void)removeContextMenuInteraction;
- (void)showDataDetectorsUIForPositionInformation:(const struct InteractionInformationAtPosition *)arg1;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)suggestedActionsForContextMenuWithPositionInformation:(const struct InteractionInformationAtPosition *)arg1;
- (id)superviewForSheet;
- (BOOL)synchronouslyRetrievePositionInformation;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end

