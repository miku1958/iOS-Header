//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLMeshBuffer-Protocol.h>

@class MDLMeshBufferZoneDefault, NSData, NSMutableData, NSString;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer>
{
    MDLMeshBufferZoneDefault *_zone;
    MDLMeshBufferZoneDefault *_zoneDefault;
    NSMutableData *_data;
    unsigned long long _length;
    id<MDLMeshBufferAllocator> _allocator;
    unsigned long long _type;
    NSString *_name;
}

@property (readonly, strong, nonatomic) id<MDLMeshBufferAllocator> allocator;
@property (readonly, strong, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, strong, nonatomic) id<MDLMeshBufferZone> zone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)map;
- (id)name;
- (void)setName:(id)arg1;

@end

