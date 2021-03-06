//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSError;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKRecordDecryptInfo : NSObject
{
    CKRecord *_record;
    NSError *_error;
    NSObject<OS_dispatch_group> *_decryptGroup;
    CDUnknownBlockType _callback;
    unsigned long long _numUnwrapAttempts;
}

@property (copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *decryptGroup; // @synthesize decryptGroup=_decryptGroup;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property unsigned long long numUnwrapAttempts; // @synthesize numUnwrapAttempts=_numUnwrapAttempts;
@property (readonly, nonatomic) CKRecord *record; // @synthesize record=_record;

- (void).cxx_destruct;
- (void)_setupDecryptCallbackForQueue:(id)arg1;
- (id)init;
- (id)initWithRecord:(id)arg1 callbackQueue:(id)arg2;

@end

