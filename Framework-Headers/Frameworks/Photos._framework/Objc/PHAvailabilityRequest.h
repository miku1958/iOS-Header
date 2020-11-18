//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, NSXPCConnection, PLPhotoLibrary;

@interface PHAvailabilityRequest : NSObject
{
    _Atomic BOOL _isCancelled;
    PLPhotoLibrary *_photoLibrary;
    NSManagedObjectID *_assetObjectID;
    NSString *_taskIdentifier;
    unsigned long long _signpostID;
    NSXPCConnection *_clientConnection;
}

@property (readonly, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property (strong, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property (readonly, copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;

- (void).cxx_destruct;
- (void)abortClientSide;
- (void)cancel;
- (id)description;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2;
- (BOOL)isCancelled;
- (id)plistDictionary;
- (void)runDaemonSide;

@end
