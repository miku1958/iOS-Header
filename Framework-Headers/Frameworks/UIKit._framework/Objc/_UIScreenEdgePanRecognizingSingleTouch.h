//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScreenEdgePanRecognizerDelegate-Protocol.h>
#import <UIKit/_UIScreenEdgePanRecognizing-Protocol.h>

@class NSString, _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizingDelegate;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizingSingleTouch : NSObject <_UIScreenEdgePanRecognizerDelegate, _UIScreenEdgePanRecognizing>
{
    _UIScreenEdgePanRecognizer *_recognizer;
    id<_UIScreenEdgePanRecognizingDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIScreenEdgePanRecognizingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL recognizeAlongEdge;
@property (nonatomic) BOOL recognizeImmediatelyFromEdgeLocked;
@property (nonatomic) struct CGRect screenBounds;
@property (readonly, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic) BOOL shouldUseGrapeFlags;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetEdges;

- (void).cxx_destruct;
- (void)giveTouchIdentifiersToIgnore:(CDUnknownBlockType)arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned int)arg7;
- (id)initWithType:(long long)arg1;
- (BOOL)isRequiringLongPress;
- (unsigned long long)maxInitialTouches;
- (void)reset;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;

@end
