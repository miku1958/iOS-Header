//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REMMutableCRUndo : NSObject
{
    NSMutableArray *_undoBlocks;
}

@property (readonly, nonatomic) NSMutableArray *undoBlocks; // @synthesize undoBlocks=_undoBlocks;

- (void).cxx_destruct;
- (void)addUndoBlock:(CDUnknownBlockType)arg1;
- (id)immutableCopy;
- (id)init;

@end
