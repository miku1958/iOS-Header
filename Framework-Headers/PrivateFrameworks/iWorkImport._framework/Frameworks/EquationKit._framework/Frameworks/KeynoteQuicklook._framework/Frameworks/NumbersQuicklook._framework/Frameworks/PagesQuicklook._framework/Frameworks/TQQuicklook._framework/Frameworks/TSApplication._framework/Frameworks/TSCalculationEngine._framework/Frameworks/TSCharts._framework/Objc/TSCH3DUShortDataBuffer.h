//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DVectorDataBuffer.h>

@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer
{
    vector_e28bcd8e mContainer;
}

@property (readonly, nonatomic) vector_e28bcd8e *container;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)components;
- (unsigned long long)count;
- (const void *)data;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

