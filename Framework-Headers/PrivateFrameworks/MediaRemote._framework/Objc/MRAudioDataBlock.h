//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class MRAudioBuffer, NSData, _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface MRAudioDataBlock : NSObject <NSMutableCopying>
{
    MRAudioBuffer *_buffer;
    CDStruct_ace97b7a _time;
    float _gain;
}

@property (readonly, nonatomic) MRAudioBuffer *buffer; // @synthesize buffer=_buffer;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) float gain; // @synthesize gain=_gain;
@property (readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
@property (readonly, nonatomic) CDStruct_ace97b7a time; // @synthesize time=_time;

- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (void)_parseBuffer:(id)arg1;
- (void)_parseGain:(id)arg1;
- (void)_parseTimestamp:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

