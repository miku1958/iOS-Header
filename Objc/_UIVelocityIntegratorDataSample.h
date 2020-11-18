//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVelocityIntegratorDataSample : NSObject
{
    double _timestamp;
    struct CGVector _translation;
    struct CGPoint _point;
}

@property (nonatomic) struct CGPoint point; // @synthesize point=_point;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) struct CGVector translation; // @synthesize translation=_translation;

- (id)description;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint)arg1 minimumRequiredMovement:(double)arg2;
- (void)updateTimeToNow;

@end

