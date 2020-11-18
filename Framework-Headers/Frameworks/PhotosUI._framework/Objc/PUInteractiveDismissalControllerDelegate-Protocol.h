//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUInteractiveDismissalController, PUTileController, PUTilingView, UIView, UIViewController;
@protocol PUDisplayLocationProvider;

@protocol PUInteractiveDismissalControllerDelegate <NSObject>
- (UIViewController *)interactiveDismissalControllerViewController:(PUInteractiveDismissalController *)arg1;
- (UIView *)interactiveDismissalControllerViewHostingGestureRecognizers:(PUInteractiveDismissalController *)arg1;

@optional
- (BOOL)interactiveDismissalController:(PUInteractiveDismissalController *)arg1 canBeginDismissalAtLocationFromProvider:(id<PUDisplayLocationProvider>)arg2;
- (PUTileController *)interactiveDismissalControllerDesignatedTileController:(PUInteractiveDismissalController *)arg1;
- (PUTilingView *)interactiveDismissalControllerTilingView:(PUInteractiveDismissalController *)arg1;
@end

