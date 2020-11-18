//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSCopying-Protocol.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying>
{
    double _timestamp;
    NSData *_sampleData;
    NSDictionary *_metadata;
    Class _sampleClass;
}

@property (strong) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy) id sample;
@property (strong) Class sampleClass; // @synthesize sampleClass=_sampleClass;
@property (strong) NSData *sampleData; // @synthesize sampleData=_sampleData;
@property (readonly) double timestamp; // @synthesize timestamp=_timestamp;

+ (void)initialize;
+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4;

@end
