//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBAppPlatterDragSourceViewProviding-Protocol.h>

@class FBDisplayLayoutElement, FBSDisplayIdentity, NSString, SBLayoutElement, SBLayoutState, SBOrientationTransformWrapperView, UIView;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding>
{
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    BOOL _isViewVisible;
    BOOL _isTransitioningVisibility;
    BOOL _dragging;
    UIView *_contentContainerView;
    FBSDisplayIdentity *_displayIdentity;
    SBLayoutElement *_layoutElement;
    SBLayoutState *_layoutState;
    unsigned long long _supportedContentInterfaceOrientations;
    long long _contentWrapperInterfaceOrientation;
    struct CGRect _referenceFrame;
}

@property (readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView;
@property (readonly, nonatomic) BOOL _shouldDisplayLayoutElementBecomeActive;
@property (nonatomic) long long contentWrapperInterfaceOrientation; // @synthesize contentWrapperInterfaceOrientation=_contentWrapperInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property (nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@property (readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property (readonly, nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long supportedContentInterfaceOrientations; // @synthesize supportedContentInterfaceOrientations=_supportedContentInterfaceOrientations;
@property (readonly, nonatomic) BOOL supportsReuse;

- (void).cxx_destruct;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(CDUnknownBlockType)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (id)containerViewForBlurContentView;
- (void)dealloc;
- (void)didEndTransitionToVisible:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialCornerRadiusConfiguration;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (id)initialRimShadowFilters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (void)invalidate;
- (void)loadView;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)prepareForReuse;
- (id)sourceView;
- (void)willBeginTransitionToVisible:(BOOL)arg1;

@end

