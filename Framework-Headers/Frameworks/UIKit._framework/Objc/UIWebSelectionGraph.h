//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectionGraph : NSObject
{
    NSMutableArray *_selectionNodes;
}

- (id)addNodeFromSelection:(id)arg1;
- (void)clearNodes;
- (void)dealloc;
- (void)exploreFromNode:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3;
- (id)init;

@end

