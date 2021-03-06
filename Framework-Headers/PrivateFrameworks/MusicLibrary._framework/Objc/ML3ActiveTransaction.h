//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSLocking-Protocol.h>

@class ML3Client, ML3DatabaseConnection, ML3MusicLibrary, MSVXPCTransaction, NSLock, NSUUID;

@interface ML3ActiveTransaction : NSObject <NSLocking>
{
    ML3DatabaseConnection *_connection;
    NSLock *_lock;
    MSVXPCTransaction *_xpcTransaction;
    BOOL _terminable;
    BOOL _inUseByOperation;
    BOOL _readOnly;
    ML3MusicLibrary *_library;
    NSUUID *_identifier;
    ML3Client *_client;
    double _lastUsedTime;
}

@property (readonly, nonatomic) ML3Client *client; // @synthesize client=_client;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL inUseByOperation; // @synthesize inUseByOperation=_inUseByOperation;
@property (nonatomic) double lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property (readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property (nonatomic) BOOL terminable; // @synthesize terminable=_terminable;

- (void).cxx_destruct;
- (id)_relinquishConnection;
- (id)description;
- (id)init;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3;
- (void)lock;
- (void)unlock;
- (void)updateLastUsed;

@end

