//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizingDelegate;

@protocol _UIScreenEdgePanRecognizing <NSObject>

@property (weak, nonatomic) id<_UIScreenEdgePanRecognizingDelegate> delegate;
@property (nonatomic) BOOL recognizeAlongEdge;
@property (nonatomic) BOOL recognizeImmediatelyFromEdgeLocked;
@property (nonatomic) struct CGRect screenBounds;
@property (readonly, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic) BOOL shouldUseGrapeFlags;
@property (readonly, nonatomic) long long state;
@property (nonatomic) unsigned long long targetEdges;

- (void)giveTouchIdentifiersToIgnore:(void (^)(NSIndexSet *))arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned int)arg7;
- (id)initWithType:(long long)arg1;
- (BOOL)isRequiringLongPress;
- (unsigned long long)maxInitialTouches;
- (void)reset;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
@end

