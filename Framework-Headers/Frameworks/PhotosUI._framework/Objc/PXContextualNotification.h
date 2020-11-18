//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition, NSString, NSValue, PXContextualNotificationCenter, PXContextualNotificationView, UIImage, UIView, UIWindow;
@protocol PXContextualNotificationDelegate;

@interface PXContextualNotification : NSObject
{
    struct {
        BOOL containingFrameInCoordinateSpace;
        BOOL preferredContainerView;
        BOOL preferredAnimation;
        BOOL shouldPassthroughPointInCoordinateSpace;
        BOOL wasTapped;
        BOOL wasDiscarded;
        BOOL didDisappear;
    } _delegateRespondsTo;
    id<PXContextualNotificationDelegate> _delegate;
    long long _style;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    UIImage *_image;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    id _userInfo;
    long long _appearanceState;
    UIWindow *_window;
    PXContextualNotificationCenter *_contextualNotificationCenter;
    PXContextualNotificationView *_view;
    long long _animationCount;
    NSValue *_releaseVelocity;
    double _panInitialVerticalOffset;
    struct PXContextualNotificationVisualState _nextState;
    struct PXContextualNotificationVisualState _appliedState;
}

@property (nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property (nonatomic) long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property (nonatomic) struct PXContextualNotificationVisualState appliedState; // @synthesize appliedState=_appliedState;
@property (weak, nonatomic) PXContextualNotificationCenter *contextualNotificationCenter; // @synthesize contextualNotificationCenter=_contextualNotificationCenter;
@property (weak, nonatomic) id<PXContextualNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition; // @synthesize loopingVideoComposition=_loopingVideoComposition;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) struct PXContextualNotificationVisualState nextState; // @synthesize nextState=_nextState;
@property (nonatomic) double panInitialVerticalOffset; // @synthesize panInitialVerticalOffset=_panInitialVerticalOffset;
@property (readonly, nonatomic) long long preferredAnimation;
@property (readonly, nonatomic) UIView *preferredContainerView;
@property (strong, nonatomic) NSValue *releaseVelocity; // @synthesize releaseVelocity=_releaseVelocity;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property (strong, nonatomic) PXContextualNotificationView *view; // @synthesize view=_view;
@property (weak, nonatomic) UIWindow *window; // @synthesize window=_window;

- (void).cxx_destruct;
- (void)_invalidate;
- (struct CGRect)containingFrameInContainerView:(id)arg1;
- (void)dismiss;
- (void)handleDiscard;
- (void)handleTap:(id)arg1;
- (id)init;
- (void)invalidateLayout;
- (void)present;
- (BOOL)shouldPassthroughPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;

@end
