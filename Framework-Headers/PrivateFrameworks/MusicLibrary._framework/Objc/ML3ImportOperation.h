//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ML3ServiceDatabaseImport, NSData, NSError;

@interface ML3ImportOperation : NSOperation
{
    CDUnknownBlockType _clientCompletionHandler;
    BOOL _suspended;
    BOOL _success;
    float _progress;
    ML3ServiceDatabaseImport *_import;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    NSData *_returnData;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) ML3ServiceDatabaseImport *import; // @synthesize import=_import;
@property (readonly, nonatomic) unsigned long long importSource;
@property (readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property (copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property (readonly, nonatomic) NSData *returnData; // @synthesize returnData=_returnData;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;

+ (id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2;
- (void).cxx_destruct;
- (CDUnknownBlockType)_clientCompletionHandler;
- (void)_setClientCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_writerTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDatabaseImport:(id)arg1;
- (id)longDescription;
- (void)main;
- (void)setError:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setReturnData:(id)arg1;
- (void)setSuccess:(BOOL)arg1;

@end

