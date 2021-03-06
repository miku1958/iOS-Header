//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSCopying-Protocol.h>

@class NSData, NSMutableData, NSString;

@interface HMIDESMutableFloatArray : HMFObject <HMFLogging, NSCopying>
{
    NSMutableData *_data;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, strong, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) const float *floats;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) float *mutableFloats;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)appendArray:(id)arg1;
- (void)appendFloats:(const float *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fillWithFloat:(float)arg1;
- (id)floatArrayByAdding:(id)arg1;
- (id)floatArrayByScaling:(float)arg1;
- (id)floatArrayBySubtracting:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDataTensor:(id)arg1;
- (id)initWithFloats:(const float *)arg1 count:(unsigned long long)arg2;
- (float)l2Norm;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)scale:(float)arg1;
- (void)subtract:(id)arg1;

@end

