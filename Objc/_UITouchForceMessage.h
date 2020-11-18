//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _UITouchForceObservationMessageReader;

__attribute__((visibility("hidden")))
@interface _UITouchForceMessage : NSObject
{
    BOOL _isReset;
    _UITouchForceObservationMessageReader *_observeReader;
    BOOL _shouldFilterDueToSystemGestures;
    double _unclampedTouchForce;
    double _maximumPossibleForce;
    double _timestamp;
    struct CGPoint _centroid;
}

@property (nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property (nonatomic) double maximumPossibleForce; // @synthesize maximumPossibleForce=_maximumPossibleForce;
@property (nonatomic) BOOL shouldFilterDueToSystemGestures; // @synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) double unclampedTouchForce; // @synthesize unclampedTouchForce=_unclampedTouchForce;

+ (id)observe:(CDUnknownBlockType)arg1;
+ (id)reset;
- (void).cxx_destruct;
- (void)ifObservation:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;
- (void)ifObservationUnclamped:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;

@end

