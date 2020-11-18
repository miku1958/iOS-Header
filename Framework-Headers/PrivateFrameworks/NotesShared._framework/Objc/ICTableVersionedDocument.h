//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, ICTable, NSUUID;

@interface ICTableVersionedDocument : TTVersionedDocument
{
    NSUUID *_replica;
    CRDocument *_innerTableDocument;
    ICTable *_table;
}

@property (readonly) CRDocument *innerTableDocument; // @synthesize innerTableDocument=_innerTableDocument;
@property (readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
@property (strong, nonatomic) ICTable *table; // @synthesize table=_table;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (id)tableDoc;
+ (id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithTableVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)setReplica:(id)arg1;

@end

