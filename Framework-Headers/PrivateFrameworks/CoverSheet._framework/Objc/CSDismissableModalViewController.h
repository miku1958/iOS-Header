//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPresentationViewController.h>

#import <CoverSheet/CSModalHomeGestureParticipating-Protocol.h>
#import <CoverSheet/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIScreenEdgePanGestureRecognizer;
@protocol CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;

@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, UIGestureRecognizerDelegate>
{
    UIScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    id<CSDismissableModalViewControllerDelegate> _delegate;
    id<CSModalHomeAffordanceControlling> _homeAffordanceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSDismissableModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<CSModalHomeAffordanceControlling> homeAffordanceController; // @synthesize homeAffordanceController=_homeAffordanceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureRecognizer:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;

@end
