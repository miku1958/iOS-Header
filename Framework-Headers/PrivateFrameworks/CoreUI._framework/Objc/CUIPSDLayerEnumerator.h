//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator
{
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    BOOL _isImageFile;
}

+ (id)enumeratorWithPSDImage:(id)arg1;
+ (id)enumeratorWithPSDLayerGroup:(id)arg1;
- (id)allObjects;
- (void)dealloc;
- (id)initWithPSDImage:(id)arg1;
- (id)initWithPSDLayerGroup:(id)arg1;
- (id)nextObject;

@end

