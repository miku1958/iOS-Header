//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface MFArrayDiff : NSObject
{
    NSIndexSet *_commonIndexes;
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
}

@property (strong, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
@property (strong, nonatomic) NSIndexSet *commonIndexes; // @synthesize commonIndexes=_commonIndexes;
@property (strong, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;

- (void).cxx_destruct;
- (id)debugDescription;

@end

