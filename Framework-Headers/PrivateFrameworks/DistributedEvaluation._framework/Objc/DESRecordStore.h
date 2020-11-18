//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DESRecordStore : NSObject
{
    NSString *_bundleId;
}

@property (readonly, nonatomic, getter=isPermitted) BOOL permitted;
@property (readonly, nonatomic) BOOL shouldMakeRecord;

+ (id)_serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)deleteAllSavedRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSavedRecordInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)shouldMakeRecordWithFrequency:(unsigned long long)arg1;

@end

