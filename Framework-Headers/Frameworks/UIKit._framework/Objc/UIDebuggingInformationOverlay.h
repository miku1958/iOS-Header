//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWindow.h>

#import <UIKitCore/UISplitViewControllerDelegate-Protocol.h>

@class NSMutableArray, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController, UIEvent;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate>
{
    BOOL _isFullscreen;
    BOOL _checkingTouches;
    BOOL _touchCaptureEnabled;
    NSMutableArray *_touchObservers;
    UIWindow *_inspectedWindow;
    UIEvent *_lastTouch;
    struct CGPoint _drawingOrigin;
}

@property (nonatomic) BOOL checkingTouches; // @synthesize checkingTouches=_checkingTouches;
@property (nonatomic) struct CGPoint drawingOrigin; // @synthesize drawingOrigin=_drawingOrigin;
@property (strong, nonatomic) UIWindow *inspectedWindow; // @synthesize inspectedWindow=_inspectedWindow;
@property (nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property (strong, nonatomic) UIEvent *lastTouch; // @synthesize lastTouch=_lastTouch;
@property (readonly, nonatomic) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (strong, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) BOOL touchCaptureEnabled; // @synthesize touchCaptureEnabled=_touchCaptureEnabled;
@property (strong, nonatomic) NSMutableArray *touchObservers; // @synthesize touchObservers=_touchObservers;

+ (id)overlay;
+ (void)prepareDebuggingOverlay;
- (void).cxx_destruct;
- (void)_setHidden:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)toggleFullscreen;
- (void)toggleVisibility;

@end
