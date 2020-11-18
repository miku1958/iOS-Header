//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/HUQuickControlViewInteractionDelegate-Protocol.h>

@class NSString, UIView, UIViewController;
@protocol HUQuickControlInteractiveView, HUQuickControlInteractiveViewController;

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate>
{
    BOOL _shouldDismissAutomatically;
    BOOL _hasStartedSecondTouch;
    id _value;
    UIViewController<HUQuickControlInteractiveViewController> *_contraptionViewController;
}

@property (readonly, nonatomic) UIViewController<HUQuickControlInteractiveViewController> *contraptionViewController; // @synthesize contraptionViewController=_contraptionViewController;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *controlView; // @dynamic controlView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStartedSecondTouch; // @synthesize hasStartedSecondTouch=_hasStartedSecondTouch;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldDismissAutomatically; // @synthesize shouldDismissAutomatically=_shouldDismissAutomatically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestDismissalIfNecessary;
- (void)_setValue:(id)arg1 notifyDelegate:(BOOL)arg2 updateControlView:(BOOL)arg3;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)initWithContraptionViewController:(id)arg1 delegate:(id)arg2;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (BOOL)isUserInteractionActive;
- (BOOL)isUserInteractionEnabled;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

