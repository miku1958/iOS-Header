//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BRCDumpContext, NSMutableDictionary, NSNumber, PQLConnection;

@protocol BRCContainer

@property (readonly, nonatomic) PQLConnection *db;
@property (strong, nonatomic) NSNumber *dbRowID;
@property (readonly, nonatomic) BOOL isPrivateContainer;
@property (readonly, nonatomic) BOOL isSharedContainer;
@property (nonatomic) BOOL needsSave;
@property (readonly, nonatomic) NSMutableDictionary *plist;

- (BOOL)dumpStatusToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
- (BOOL)dumpTablesToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
@end
