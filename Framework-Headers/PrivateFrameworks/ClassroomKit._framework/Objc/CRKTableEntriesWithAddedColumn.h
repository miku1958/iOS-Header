//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSArray, NSString;
@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedColumn : NSObject <CRKTableEntries>
{
    id<CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    NSArray *mEntries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 entries:(id)arg3;
- (unsigned long long)rowCount;

@end

