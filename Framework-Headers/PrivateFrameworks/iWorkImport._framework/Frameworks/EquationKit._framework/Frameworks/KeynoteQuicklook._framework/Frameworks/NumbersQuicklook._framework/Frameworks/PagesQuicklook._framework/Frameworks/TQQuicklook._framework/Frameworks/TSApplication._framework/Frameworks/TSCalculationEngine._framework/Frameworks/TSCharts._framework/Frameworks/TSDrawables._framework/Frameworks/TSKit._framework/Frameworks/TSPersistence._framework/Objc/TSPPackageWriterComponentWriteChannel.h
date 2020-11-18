//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSPComponentWriteChannel-Protocol.h>

@class NSString, TSUZipFileWriter;

@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    BOOL _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithArchiveWriter:(id)arg1;
- (void)writeData:(id)arg1;

@end
