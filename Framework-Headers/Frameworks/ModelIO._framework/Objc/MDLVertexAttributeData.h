//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject
{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
}

@property (nonatomic) void *dataStart;
@property (nonatomic) unsigned long long format;
@property (strong, nonatomic) MDLMeshBufferMap *map;
@property (nonatomic) unsigned long long stride;

- (void).cxx_destruct;
- (id)init;

@end

