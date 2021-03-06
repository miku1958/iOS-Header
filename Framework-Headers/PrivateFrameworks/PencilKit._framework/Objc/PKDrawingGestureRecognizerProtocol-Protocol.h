//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class UITouch;
@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@protocol PKDrawingGestureRecognizerProtocol <NSObject>

@property (readonly, nonatomic) unsigned long long activeInputProperties;
@property (weak, nonatomic) id<PKDrawingGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id<PKDrawingGestureTarget> drawingTarget;
@property (readonly, nonatomic) UITouch *drawingTouch;
@property (readonly, nonatomic) BOOL isReplaying;

- (void)cancel;
- (void)end;
@end

