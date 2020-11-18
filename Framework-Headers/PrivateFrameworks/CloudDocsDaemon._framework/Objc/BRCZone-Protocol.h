//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BRCDumpContext, BRCPQLConnection, BRCZoneRowID, NSMutableDictionary, PQLConnection;

@protocol BRCZone

@property (readonly, nonatomic) BRCPQLConnection *db;
@property (strong, nonatomic) BRCZoneRowID *dbRowID;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (nonatomic) BOOL needsSave;
@property (readonly, nonatomic) NSMutableDictionary *plist;

- (BOOL)dumpStatusToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
- (BOOL)dumpTablesToContext:(BRCDumpContext *)arg1 includeAllItems:(BOOL)arg2 error:(id *)arg3;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
@end
