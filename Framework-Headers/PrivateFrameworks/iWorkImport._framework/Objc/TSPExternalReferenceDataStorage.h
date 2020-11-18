//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSData, NSURL, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    BOOL _isReachable;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (BOOL)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isReadable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;

@end

