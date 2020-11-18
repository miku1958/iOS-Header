//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <WebKit/WKActionSheetDelegate-Protocol.h>

@class NSString;
@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    optional_b0042d51 _positionInformation;
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
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(BOOL)arg2;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (void)cleanupSheet;
- (id)currentAvailableActionTitles;
- (void)dealloc;
- (RetainPtr_f649c0c3)defaultActionsForImageSheet:(id)arg1;
- (RetainPtr_f649c0c3)defaultActionsForLinkSheet:(id)arg1;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (BOOL)isShowingSheet;
- (BOOL)presentSheet;
- (struct CGRect)presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect)presentationRectForIndicatedElement;
- (struct CGRect)presentationRectInHostViewForSheet;
- (void)showDataDetectorsSheet;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)superviewForSheet;
- (BOOL)synchronouslyRetrievePositionInformation;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end

