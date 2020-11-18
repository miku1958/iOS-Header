//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@protocol NSObject;

@protocol PXTileTransitionAnimationCoordinator <NSObject>
- (BOOL)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id<NSObject>)arg5;
- (BOOL)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id<NSObject>)arg5;
- (id<NSObject>)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id<NSObject>)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id<NSObject>)arg6;
- (BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id<NSObject>)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id<NSObject>)arg5;
@end

