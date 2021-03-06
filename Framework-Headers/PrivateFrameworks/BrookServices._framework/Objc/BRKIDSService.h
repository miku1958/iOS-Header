//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrookServices/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;
@protocol BRKIDSServiceCompanionContextManagerDelegate, BRKIDSServiceCompanionDataCollectionDelegate, BRKIDSServiceContextManagerDelegate, OS_dispatch_queue;

@interface BRKIDSService : NSObject <IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_idsQueue;
    id<BRKIDSServiceContextManagerDelegate> _contextManagerDelegate;
    id<BRKIDSServiceCompanionContextManagerDelegate> _companionContextManagerDelegate;
    id<BRKIDSServiceCompanionDataCollectionDelegate> _dataCollectionDelegate;
    IDSService *_idsService;
}

@property (weak, nonatomic) id<BRKIDSServiceCompanionContextManagerDelegate> companionContextManagerDelegate; // @synthesize companionContextManagerDelegate=_companionContextManagerDelegate;
@property (weak, nonatomic) id<BRKIDSServiceContextManagerDelegate> contextManagerDelegate; // @synthesize contextManagerDelegate=_contextManagerDelegate;
@property (weak, nonatomic) id<BRKIDSServiceCompanionDataCollectionDelegate> dataCollectionDelegate; // @synthesize dataCollectionDelegate=_dataCollectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidEnterRegion:(id)arg1;
- (void)locationManagerDidExitRegion:(id)arg1;
- (void)locationManagerStartMonitoringForRegion:(id)arg1;
- (void)locationManagerStopMonitoringForRegion:(id)arg1;
- (id)sendProtobuf:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4 withTimeout:(double)arg5;
- (id)sendResourceAtURL:(id)arg1 metadata:(id)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4 withTimeout:(double)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end

