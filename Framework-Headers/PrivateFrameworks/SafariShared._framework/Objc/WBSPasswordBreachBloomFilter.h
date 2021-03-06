//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WBSPasswordBreachBloomFilter : NSObject
{
    unsigned int _capacity;
    unsigned int _errorDenominator;
    unsigned int _hashCount;
    unsigned int _bucketCount;
    NSData *_bucketData;
}

@property (readonly, nonatomic) NSData *serializedRepresentation;

- (void).cxx_destruct;
- (void)_enumerateBucketIndexesForData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)_getBucketAtIndex:(unsigned int)arg1;
- (void)_setBucketAtIndex:(unsigned int)arg1 inBuffer:(char *)arg2;
- (void)addData:(id)arg1;
- (BOOL)containsData:(id)arg1;
- (BOOL)containsLowercaseHexStringForData:(id)arg1;
- (id)description;
- (id)initWithCapacity:(unsigned int)arg1 errorDenominator:(unsigned int)arg2 bucketData:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;

@end

