//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
{
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (BOOL)_isGroupType:(unsigned int)arg1;
- (struct CGRect)bounds;
- (void)dealloc;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (BOOL)isGroupEnd;
- (BOOL)isGroupStart;
- (BOOL)isLayerGroup;
- (BOOL)isOpen;
- (id)layerEnumerator;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLayers;

@end

