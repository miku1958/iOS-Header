//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class MISSING_TYPE, NSString;

@interface MDLVertexAttribute : NSObject <NSCopying>
{
    NSString *_name;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
    unsigned long long _format;
    double _time;
    MISSING_TYPE *_initializationValue;
}

@property (nonatomic) unsigned long long bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property (nonatomic) unsigned long long format; // @synthesize format=_format;
@property (nonatomic) MISSING_TYPE *initializationValue; // @synthesize initializationValue=_initializationValue;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property (nonatomic) double time; // @synthesize time=_time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end

