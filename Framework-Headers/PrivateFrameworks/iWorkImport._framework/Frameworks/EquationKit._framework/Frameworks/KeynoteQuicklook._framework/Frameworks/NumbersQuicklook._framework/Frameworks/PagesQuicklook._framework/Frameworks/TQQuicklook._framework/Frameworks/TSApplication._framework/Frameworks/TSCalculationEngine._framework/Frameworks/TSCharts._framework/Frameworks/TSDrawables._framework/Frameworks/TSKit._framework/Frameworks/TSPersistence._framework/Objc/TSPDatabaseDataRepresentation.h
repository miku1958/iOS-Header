//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation
{
    TSPDatabase *_database;
    long long _identifier;
}

- (void).cxx_destruct;
- (struct sqlite3_blob *)_openBlob;
- (struct ZeroCopyInputStream *)createProtobufInputStream;
- (long long)dataLength;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithDatabase:(id)arg1 identifier:(long long)arg2;
- (id)inputStream;

@end
