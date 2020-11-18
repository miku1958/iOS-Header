//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding>
{
    NSString *_type;
    NSUUID *_uuid;
    NSFileHandle *_dataFile;
    NSNumber *_offsetInFile;
    long long _chunkSize;
}

@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property (strong) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSNumber *offsetInFile; // @synthesize offsetInFile=_offsetInFile;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4;

@end

