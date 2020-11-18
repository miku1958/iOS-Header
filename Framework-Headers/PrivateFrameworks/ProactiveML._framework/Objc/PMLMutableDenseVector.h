//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLDenseVector.h>

#import <ProactiveML/NSCopying-Protocol.h>
#import <ProactiveML/NSMutableCopying-Protocol.h>

@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying>
{
    NSMutableData *_mutableData;
}

@property (readonly, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
@property (readonly, nonatomic) float *mutablePtr;

- (void).cxx_destruct;
- (void)append:(float)arg1;
- (void)append:(const float *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)processValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;
- (void)scaleInPlaceWithFactor:(float)arg1;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (void)sumInPlaceWithVector:(id)arg1;

@end
