//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLPreviewContext;
@protocol QLPrintingProtocol;

@protocol QLLocalPreviewingController <NSObject>
- (void)loadPreviewControllerWithContents:(id)arg1 context:(QLPreviewContext *)arg2 completionHandler:(void (^)(NSError *))arg3;

@optional
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canShowNavBar;
- (BOOL)canShowToolBar;
- (BOOL)canSwipeToDismiss;
- (BOOL)canToggleFullScreen;
- (void)prepareForActionSheetPresentation;
- (void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (void)previewWillFinishAppearing;
- (id<QLPrintingProtocol>)printer;
@end

