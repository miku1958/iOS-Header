//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCHistogram : NSObject
{
    unsigned int *_buckets;
    const unsigned int *_ranges;
    unsigned int _bucketCount;
}

@property (readonly) const unsigned int *ranges; // @synthesize ranges=_ranges;

+ (const unsigned int *)bucketWithType:(int)arg1 count:(unsigned int *)arg2;
+ (id)rangesDescription:(int)arg1;
- (void)addValue:(unsigned int)arg1;
- (void)addValue:(unsigned int)arg1 withIncrement:(unsigned int)arg2;
- (id)array;
- (unsigned int)bucketValueAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1;
- (BOOL)merge:(id)arg1;
- (void)reset;

@end
