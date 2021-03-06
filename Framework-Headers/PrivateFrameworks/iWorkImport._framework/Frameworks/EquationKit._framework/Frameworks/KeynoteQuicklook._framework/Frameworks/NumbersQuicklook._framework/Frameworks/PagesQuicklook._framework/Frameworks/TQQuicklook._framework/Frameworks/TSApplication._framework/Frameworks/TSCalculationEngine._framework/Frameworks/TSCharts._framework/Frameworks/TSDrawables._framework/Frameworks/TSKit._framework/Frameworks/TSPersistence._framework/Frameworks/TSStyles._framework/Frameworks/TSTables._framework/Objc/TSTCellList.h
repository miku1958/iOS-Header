//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/NSCopying-Protocol.h>

@interface TSTCellList : TSPObject <NSCopying>
{
    vector_73284f0b _cells;
    unsigned long long _trailingEmptyCellCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addCell:(id)arg1;
- (void)addPrecopiedCell:(id)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)initWithContext:(id)arg1;
- (id)lastCell;
- (void)loadFromUnarchiver:(id)arg1;
- (void)replaceCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)shallowAddCell:(id)arg1;
- (unsigned long long)trailingEmptyCellCount;

@end

