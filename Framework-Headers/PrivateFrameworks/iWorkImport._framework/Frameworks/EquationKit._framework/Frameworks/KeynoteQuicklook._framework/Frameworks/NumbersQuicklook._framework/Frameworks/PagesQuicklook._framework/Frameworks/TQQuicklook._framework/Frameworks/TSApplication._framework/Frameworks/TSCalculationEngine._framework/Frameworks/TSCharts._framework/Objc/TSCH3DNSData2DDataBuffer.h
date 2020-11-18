//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3D2DDataBuffer.h>

@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer
{
    NSData *mConstData;
    NSMutableData *mMutableData;
}

@property (readonly, nonatomic) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1 data:(id)arg2;
+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1 mutableData:(id)arg2;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)count;
- (const void *)data;
- (void)dealloc;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1 data:(id)arg2;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension *)arg1 mutableData:(id)arg2;
- (void *)mutableData;
- (void)resizeFillDimension:(const struct DataBuffer2DDimension *)arg1;

@end
