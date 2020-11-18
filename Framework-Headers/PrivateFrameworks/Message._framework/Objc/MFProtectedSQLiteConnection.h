//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection
{
    NSString *_vfsName;
    BOOL _attached;
}

@property (readonly, nonatomic) BOOL isProtectedDatabaseAttached; // @synthesize isProtectedDatabaseAttached=_attached;

- (const char *)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)close;
- (void)dealloc;
- (int)detachProtectedDatabase;
- (id)initWithConfiguration:(id)arg1;

@end
