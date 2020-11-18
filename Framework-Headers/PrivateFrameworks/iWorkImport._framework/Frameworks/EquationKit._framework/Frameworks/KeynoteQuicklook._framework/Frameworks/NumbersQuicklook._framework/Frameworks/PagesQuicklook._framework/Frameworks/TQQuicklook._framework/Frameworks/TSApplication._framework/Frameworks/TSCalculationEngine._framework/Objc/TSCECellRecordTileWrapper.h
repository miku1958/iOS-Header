//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@interface TSCECellRecordTileWrapper : TSPObject
{
    unsigned short _internalOwnerID;
    unsigned short _tileColumnBegin;
    unsigned int _tileRowBegin;
    struct TSCECellRecordTile *_tile;
    struct TSCECellRecordList *_unarchivedCellRecords;
}

@property (nonatomic) unsigned short internalOwnerID; // @synthesize internalOwnerID=_internalOwnerID;
@property (readonly, nonatomic) unsigned long long numCellRecords;

- (struct TSCECellRecordTile *)cppTile;
- (void)dealloc;
- (id)description;
- (id)initWithOwnerId:(unsigned short)arg1 tileColumnBegin:(unsigned short)arg2 tileRowBegin:(unsigned int)arg3 context:(id)arg4;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)unpackAfterUnarchiveForCellDependencies:(struct TSCECellDependencies *)arg1;

@end
