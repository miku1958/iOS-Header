//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARPose : NSObject
{
    double _timestamp;
    CDStruct_14d5dc5e _transform;
}

@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;

- (id)description;
- (id)initWithTimestamp:(double)arg1 transform:(CDStruct_14d5dc5e)arg2;

@end
