//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFUSimpleOutputStream;

@interface TSPDistributableArchiveOutputStream : NSObject
{
    id<SFUSimpleOutputStream> _outputStream;
    long long _offset;
    BOOL _doneWritingObjectEntries;
    BOOL _doneWritingFileDescriptorProtos;
    BOOL _doneWritingClassInfoMap;
    BOOL _descriptorsEnabled;
    BOOL _tocEnabled;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)arg1 checkCrc:(unsigned int)arg2 enableDescriptors:(BOOL)arg3 enableToc:(BOOL)arg4 closedCleanly:(BOOL)arg5 archivedVersions:(CDStruct_af2b86c8)arg6;
- (BOOL)writeEntry:(id)arg1 offset:(long long *)arg2 headerLength:(unsigned int *)arg3 error:(id *)arg4;

@end

