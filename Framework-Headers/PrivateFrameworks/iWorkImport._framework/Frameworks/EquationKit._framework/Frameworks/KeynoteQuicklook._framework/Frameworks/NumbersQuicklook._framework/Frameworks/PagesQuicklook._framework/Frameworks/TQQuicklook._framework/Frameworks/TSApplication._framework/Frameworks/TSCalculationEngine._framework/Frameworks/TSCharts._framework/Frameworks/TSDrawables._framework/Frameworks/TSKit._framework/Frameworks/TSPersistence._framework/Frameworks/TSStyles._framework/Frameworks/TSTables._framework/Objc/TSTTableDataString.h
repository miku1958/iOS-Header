//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/TSTTableDataObject.h>

@interface TSTTableDataString : TSTTableDataObject
{
    BOOL _shouldWrap;
}

@property (readonly, nonatomic) BOOL shouldWrap; // @synthesize shouldWrap=_shouldWrap;

+ (id)objectWithString:(id)arg1 refCount:(unsigned int)arg2;
- (id)description;
- (void)encodeToArchive:(struct TableDataList_ListEntry *)arg1 archiver:(id)arg2;
- (unsigned long long)estimateByteSize;
- (id)initObjectWithString:(id)arg1 refCount:(unsigned int)arg2;
- (void)loadFromArchive:(const struct TableDataList_ListEntry *)arg1 unarchiver:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)string;

@end
