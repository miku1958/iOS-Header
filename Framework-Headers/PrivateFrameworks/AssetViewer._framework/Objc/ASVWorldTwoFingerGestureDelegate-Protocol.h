//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVTwoFingerGestureDelegate-Protocol.h>
#import <AssetViewer/ASVWorldGestureDelegate-Protocol.h>

@class ASVGesture;

@protocol ASVWorldTwoFingerGestureDelegate <ASVWorldGestureDelegate, ASVTwoFingerGestureDelegate>
- (void)gesture:(ASVGesture *)arg1 levitatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureBeganLevitation:(ASVGesture *)arg1;
- (void)gestureEndedLevitation:(ASVGesture *)arg1;
@end
