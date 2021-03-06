//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject
{
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

@property (strong, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property (strong, nonatomic) NSArray *sortedRecords; // @synthesize sortedRecords=_sortedRecords;

+ (id)topologicallySortRecords:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)addRecords:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)init;
- (id)recordsByTopologicalSortWithError:(id *)arg1;

@end

