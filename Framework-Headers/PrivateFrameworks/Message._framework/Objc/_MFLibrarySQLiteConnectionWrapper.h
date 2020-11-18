//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFProtectedSQLiteConnection, NSArray;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject
{
    NSArray *_stack;
    BOOL _writer;
    BOOL _invalid;
    MFProtectedSQLiteConnection *_connection;
    unsigned long long _refcount;
}

@property (readonly, nonatomic) MFProtectedSQLiteConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property (readonly, nonatomic) unsigned long long refcount; // @synthesize refcount=_refcount;
@property (readonly, nonatomic) BOOL writer; // @synthesize writer=_writer;

+ (id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2;
- (void)dealloc;
- (unsigned long long)decrementRefcount;
- (unsigned long long)incrementRefcount;
- (id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2;

@end

