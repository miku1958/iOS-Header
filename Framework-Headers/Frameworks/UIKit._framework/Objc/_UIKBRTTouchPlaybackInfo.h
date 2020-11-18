//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchPlaybackInfo : NSObject
{
    int _rowId;
    double _timeIntervalSinceLastStep;
}

@property (readonly, nonatomic) int rowId; // @synthesize rowId=_rowId;
@property (readonly, nonatomic) double timeIntervalSinceLastStep; // @synthesize timeIntervalSinceLastStep=_timeIntervalSinceLastStep;

+ (id)withRowId:(int)arg1 andTimeInterval:(double)arg2;
- (id)initWithRowId:(int)arg1 andTimeInterval:(double)arg2;

@end

