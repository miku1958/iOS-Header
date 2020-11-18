//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, NSXPCConnection, PLAssetsdClientServiceSender;

@interface PHAvailabilityRequest : NSObject
{
    _Atomic BOOL _isCancelled;
    NSManagedObjectID *_assetObjectID;
    NSString *_taskIdentifier;
    NSXPCConnection *_clientConnection;
    PLAssetsdClientServiceSender *_clientSender;
}

@property (readonly, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property (strong, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property (strong, nonatomic) PLAssetsdClientServiceSender *clientSender; // @synthesize clientSender=_clientSender;
@property (copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithAssetObjectID:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (BOOL)isCancelled;
- (id)plistDictionary;
- (void)runDaemonSide;

@end

