//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChangeTracking-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, SYLegacyStore;

@interface SYTransaction : NSObject <SYChangeTracking>
{
    _Atomic BOOL _inTransaction;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    CDUnknownBlockType _completion;
    SYLegacyStore *_store;
    NSMutableArray *_changes;
}

@property (strong, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property (strong, nonatomic) SYLegacyStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_beginTransaction;
- (BOOL)_endTransaction;
- (void)_transactionDidComplete:(BOOL)arg1;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)changeList;
- (void)commit;
- (void)commitBlocking:(BOOL)arg1 reportError:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)initWithStore:(id)arg1;
- (void)rollback;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;

@end

