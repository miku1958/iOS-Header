//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIPanGestureRecognizer, UIView, _UIDynamicAnimationGroup;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    double _prevResizingOffset;
    double _resizingOffset;
    double _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    BOOL _isResizing;
    id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_gestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isResizing;
@property (readonly, nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property (readonly) Class superclass;

+ (double)savedResizingOffset;
- (void).cxx_destruct;
- (void)dimKeys:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleResizeGesture:(id)arg1;
- (id)init;
- (void)reloadResizingOffset;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(BOOL)arg2;
- (void)saveResizingStopIndex:(unsigned long long)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)stopResizing;
- (void)uninstallGestureRecognizers;
- (void)updateGestureRecognizers;
- (void)updateGrabber;

@end

