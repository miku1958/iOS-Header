//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _CNAutocompleteTableViewModelDiff : NSObject
{
    NSIndexSet *_changedRows;
    NSIndexSet *_deletedRows;
    NSIndexSet *_insertedRows;
}

@property (strong, nonatomic) NSIndexSet *changedRows; // @synthesize changedRows=_changedRows;
@property (strong, nonatomic) NSIndexSet *deletedRows; // @synthesize deletedRows=_deletedRows;
@property (strong, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;

- (void).cxx_destruct;

@end
