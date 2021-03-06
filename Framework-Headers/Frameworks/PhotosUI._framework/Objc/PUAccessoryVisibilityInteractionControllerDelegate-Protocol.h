//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAccessoryVisibilityInteractionController, UIView;
@protocol PUDisplayLocationProvider;

@protocol PUAccessoryVisibilityInteractionControllerDelegate <NSObject>
- (UIView *)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(PUAccessoryVisibilityInteractionController *)arg1;

@optional
- (BOOL)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 canBeginAtLocationFromProvider:(id<PUDisplayLocationProvider>)arg2;
- (BOOL)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 isLocationFromProviderInAccessoryContent:(id<PUDisplayLocationProvider>)arg2;
- (void)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 setAccessoryVisible:(BOOL)arg2 changeReason:(long long)arg3;
- (void)accessoryVisibilityInteractionControllerDidEnd:(PUAccessoryVisibilityInteractionController *)arg1;
@end

