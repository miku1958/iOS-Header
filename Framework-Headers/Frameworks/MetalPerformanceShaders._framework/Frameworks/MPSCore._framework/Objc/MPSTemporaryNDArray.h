//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSNDArray.h>

@interface MPSTemporaryNDArray : MPSNDArray
{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;

+ (id)defaultAllocator;
+ (id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;
- (void)synchronizeOnCommandBuffer:(id)arg1;

@end
