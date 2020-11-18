//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject
{
    double timestamp;
    long long phase;
    unsigned long long tapCount;
    UIWindow *window;
    struct CGPoint locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}

@property (readonly, nonatomic) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property (readonly, nonatomic) unsigned char _pathIndex; // @synthesize _pathIndex;
@property (nonatomic) float _pathMajorRadius; // @synthesize _pathMajorRadius;
@property (nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow;
@property (nonatomic) long long phase; // @synthesize phase;
@property (nonatomic) unsigned long long tapCount; // @synthesize tapCount;
@property (nonatomic) double timestamp; // @synthesize timestamp;
@property (strong, nonatomic) UIWindow *window; // @synthesize window;

+ (id)syntheticTouchWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(BOOL)arg2;
- (void)dealloc;
- (struct CGPoint)getLocationInWindow;
- (id)initWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;

@end

