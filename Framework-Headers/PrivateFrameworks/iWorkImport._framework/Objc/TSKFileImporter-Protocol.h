//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKImporter-Protocol.h>

@class NSString;
@protocol TSDImportExportDelegate;

@protocol TSKFileImporter <TSKImporter>
- (BOOL)canCreateFile;
- (BOOL)importToPath:(NSString *)arg1 delegate:(id<TSDImportExportDelegate>)arg2 error:(id *)arg3;
@end

