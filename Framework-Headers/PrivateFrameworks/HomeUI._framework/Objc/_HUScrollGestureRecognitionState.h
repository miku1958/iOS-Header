//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer;
@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;
    id<NACancelable> _activationTimer;
}

@property (strong, nonatomic) id<NACancelable> activationTimer; // @synthesize activationTimer=_activationTimer;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;

- (void).cxx_destruct;
- (id)initWithGestureRecognizer:(id)arg1;

@end
