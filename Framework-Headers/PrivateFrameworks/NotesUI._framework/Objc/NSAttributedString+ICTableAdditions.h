//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (ICTableAdditions)
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange *)arg2;
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long *)arg2;
- (unsigned long long)ic_numberOfTables;
- (struct _NSRange)ic_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)ic_textTablesInRange:(struct _NSRange)arg1;
@end
