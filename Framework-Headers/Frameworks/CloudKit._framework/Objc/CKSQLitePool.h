//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKSQLitePool : NSObject
{
    BOOL _drainScheduled;
    CDUnknownBlockType _factory;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_dbs;
}

@property (strong, nonatomic) NSMutableArray *dbs; // @synthesize dbs=_dbs;
@property (nonatomic) BOOL drainScheduled; // @synthesize drainScheduled=_drainScheduled;
@property (readonly, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)_acquireDatabaseWithError:(id *)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_drain;
- (id)_openDatabaseWithError:(id *)arg1;
- (void)_scheduleDrain;
- (id)acquireDatabase:(BOOL)arg1;
- (void)closeAll;
- (id)initWithFactory:(CDUnknownBlockType)arg1;
- (id)initWithFactory:(CDUnknownBlockType)arg1 queueAttr:(id)arg2;
- (void)performWithDatabase:(CDUnknownBlockType)arg1;
- (BOOL)performWithDatabase:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)releaseDatabase:(id)arg1;

@end

