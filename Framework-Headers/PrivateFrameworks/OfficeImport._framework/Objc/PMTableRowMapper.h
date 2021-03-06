//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper
{
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (void).cxx_destruct;
- (unsigned long long)cellCount;
- (float)height;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end

