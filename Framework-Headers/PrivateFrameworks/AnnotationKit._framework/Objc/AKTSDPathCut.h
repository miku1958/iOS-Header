//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKTSDPathCut : NSObject
{
    long long mSegment;
    double mT;
    double mSkew;
}

@property (readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
@property (readonly, nonatomic) double skew; // @synthesize skew=mSkew;
@property (readonly, nonatomic) double t; // @synthesize t=mT;

- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3;

@end

