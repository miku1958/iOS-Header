//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UIPlatterPanningVelocityDataSample : NSObject
{
    NSDate *_time;
    struct CGVector _translation;
    struct CGPoint _point;
}

@property (nonatomic) struct CGPoint point; // @synthesize point=_point;
@property (strong, nonatomic) NSDate *time; // @synthesize time=_time;
@property (nonatomic) struct CGVector translation; // @synthesize translation=_translation;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint)arg1;
- (void)updateTimeToNow;

@end
