//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSKVStore, NSString;

@interface IMDReplayStorageController : NSObject
{
    NSString *_filePath;
    IDSKVStore *_store;
}

@property (readonly, strong, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property (strong, nonatomic) IDSKVStore *store; // @synthesize store=_store;

- (id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id *)arg2;
- (void)dealloc;
- (void)deleteReplayDB;
- (id)initWithFilePath:(id)arg1;
- (BOOL)storeDictionary:(id)arg1 error:(id *)arg2;

@end
