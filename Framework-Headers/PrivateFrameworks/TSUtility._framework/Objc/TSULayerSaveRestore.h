//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSURetainedPointerKeyDictionary;

@interface TSULayerSaveRestore : NSObject
{
    TSURetainedPointerKeyDictionary *_layerStates;
}

@property (strong, nonatomic) TSURetainedPointerKeyDictionary *layerStates; // @synthesize layerStates=_layerStates;

- (void)dealloc;
- (id)objectForLayer:(id)arg1 key:(id)arg2;
- (BOOL)restoreLayer:(id)arg1;
- (void)saveLayer:(id)arg1;

@end
