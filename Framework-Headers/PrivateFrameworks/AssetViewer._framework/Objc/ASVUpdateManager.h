//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol ASVAROnboardingUIUpdateManagerDelegate;

@interface ASVUpdateManager : NSObject
{
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
    id<ASVAROnboardingUIUpdateManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<ASVAROnboardingUIUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawWithTimeDelta:(double)arg1;
- (id)init:(id)arg1 metalLayer:(id)arg2;
- (void)start;
- (void)stop;
- (void)update;

@end

