//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

__attribute__((visibility("hidden")))
@interface TNFormSelection : TSKSelection
{
    struct TSUModelColumnIndex _fieldIndex;
    struct TSUModelRowIndex _recordIndex;
}

@property (readonly, nonatomic) struct TSUModelColumnIndex fieldIndex; // @synthesize fieldIndex=_fieldIndex;
@property (readonly, nonatomic) struct TSUModelRowIndex recordIndex; // @synthesize recordIndex=_recordIndex;

+ (Class)archivedSelectionClass;
+ (id)selection;
+ (id)selectionForRecordIndex:(struct TSUModelRowIndex)arg1 fieldIndex:(struct TSUModelColumnIndex)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordIndex:(struct TSUModelRowIndex)arg1 fieldIndex:(struct TSUModelColumnIndex)arg2;
- (BOOL)isEqual:(id)arg1;

@end
