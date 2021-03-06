//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionDelegate-Protocol.h>
#import <PencilKit/PKScribbleInteractionElementSource-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSUUID, PKFakeUITapGestureForRequirements, UITapGestureRecognizer, UIView, _PKFakeTapToFocusInfo;

@interface PKFakeTapToFocusDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate>
{
    UIView *_view;
    _PKFakeTapToFocusInfo *_focusInfo;
    NSUUID *_elementID;
    UITapGestureRecognizer *_tapGesture;
    PKFakeUITapGestureForRequirements *_gestureForRequirements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_infoInProcess;
+ (BOOL)_shouldAttachForView:(id)arg1;
+ (id)_tapGestureForView:(id)arg1;
+ (BOOL)isPossibleForView:(id)arg1 focusInfo:(id)arg2;
- (void).cxx_destruct;
- (void)_focusWithFocusInfo:(id)arg1;
- (void)_scribbleInteraction:(id)arg1 didTargetElement:(id)arg2 forTouches:(id)arg3 event:(id)arg4;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (BOOL)_scribbleInteractionIsEnabled:(id)arg1;
- (BOOL)_shouldFocusBeforeObservingWithFocusInfo:(id)arg1;
- (void)_waitForFirstResponderChangeWithFocusInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithView:(id)arg1;

@end

