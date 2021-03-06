//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreOverlays/NSObject-Protocol.h>

@class ASOHostContext, ASORemoteOverlay, _UIRemoteViewController;

@protocol ASORemoteContextProvider <NSObject>
- (void)didFinishDismissingOverlay:(ASORemoteOverlay *)arg1;
- (ASOHostContext *)hostContextForOverlayViewService;
- (_UIRemoteViewController *)remoteViewControllerForOverlayViewService;
- (void)willStartPresentingOverlay:(ASORemoteOverlay *)arg1;
@end

