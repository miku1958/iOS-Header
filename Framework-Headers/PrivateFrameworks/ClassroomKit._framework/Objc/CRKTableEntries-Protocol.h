//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@protocol CRKTableEntry;

@protocol CRKTableEntries <NSObject>
- (unsigned long long)columnCount;
- (id<CRKTableEntry>)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)rowCount;
@end

