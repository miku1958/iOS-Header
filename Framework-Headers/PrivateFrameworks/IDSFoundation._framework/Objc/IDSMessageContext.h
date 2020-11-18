//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCertifiedDeliveryContext, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString;
@protocol OS_os_transaction;

@interface IDSMessageContext : NSObject
{
    id _boostContext;
    NSObject<OS_os_transaction> *_transaction;
    IDSCertifiedDeliveryContext *_certifiedDeliveryContext;
    NSString *_storageGuid;
    NSString *_outgoingResponseIdentifier;
    NSString *_incomingResponseIdentifier;
    NSString *_serviceIdentifier;
    NSString *_fromID;
    NSString *_toID;
    NSString *_originalDestinationDevice;
    NSString *_originalGUID;
    NSData *_engramGroupID;
    NSNumber *_originalCommand;
    NSNumber *_serverTimestamp;
    NSNumber *_originalTimestamp;
    NSError *_wpConnectionError;
    NSString *_senderCorrelationIdentifier;
    NSString *_resourceTransferURLString;
    NSString *_resourceTransferSandboxExtension;
    NSDictionary *_resourceTransferMetadata;
    NSNumber *_broadcastTime;
    NSNumber *_priority;
    NSNumber *_messageSequenceNumber;
    NSNumber *_bytesSent;
    NSNumber *_totalBytes;
    double _averageLocalRTT;
    long long _broadcastID;
    long long _connectionType;
    long long _localMessageState;
    long long _endpointState;
    struct os_unfair_lock_s _lock;
    BOOL _expectsPeerResponse;
    BOOL _wantsManualAck;
    BOOL _fromServerStorage;
    BOOL _deviceBlackedOut;
    BOOL _wantsAppAck;
    BOOL _usedEngram;
    BOOL _messageHadEncryptedData;
}

@property (readonly, nonatomic) double averageLocalRTT; // @synthesize averageLocalRTT=_averageLocalRTT;
@property (strong, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property (nonatomic) long long broadcastID;
@property (strong, nonatomic) NSNumber *broadcastTime;
@property (readonly, copy, nonatomic) NSNumber *bytesSent;
@property (readonly, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext; // @synthesize certifiedDeliveryContext=_certifiedDeliveryContext;
@property (nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL deviceBlackedOut; // @synthesize deviceBlackedOut=_deviceBlackedOut;
@property (readonly, nonatomic) long long endpointState; // @synthesize endpointState=_endpointState;
@property (copy, nonatomic) NSData *engramGroupID;
@property (nonatomic) BOOL expectsPeerResponse;
@property (copy, nonatomic) NSString *fromID;
@property (nonatomic) BOOL fromServerStorage;
@property (copy, nonatomic) NSString *incomingResponseIdentifier;
@property (readonly, nonatomic) long long localMessageState; // @synthesize localMessageState=_localMessageState;
@property (nonatomic) BOOL messageHadEncryptedData; // @synthesize messageHadEncryptedData=_messageHadEncryptedData;
@property (readonly, copy, nonatomic) NSNumber *messageSequenceNumber; // @synthesize messageSequenceNumber=_messageSequenceNumber;
@property (copy, nonatomic) NSNumber *originalCommand;
@property (copy, nonatomic) NSString *originalDestinationDevice;
@property (copy, nonatomic) NSString *originalGUID; // @synthesize originalGUID=_originalGUID;
@property (copy, nonatomic) NSNumber *originalTimestamp;
@property (copy, nonatomic) NSString *outgoingResponseIdentifier;
@property (strong, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSDictionary *resourceTransferMetadata;
@property (copy, nonatomic) NSString *resourceTransferSandboxExtension;
@property (copy, nonatomic) NSString *resourceTransferURLString;
@property (copy, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) NSDate *serverReceivedTime;
@property (copy, nonatomic) NSNumber *serverTimestamp;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *storageGuid;
@property (copy, nonatomic) NSString *toID;
@property (readonly, copy, nonatomic) NSNumber *totalBytes;
@property (nonatomic) BOOL usedEngram;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsManualAck;
@property (readonly, nonatomic) NSError *wpConnectionError;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setBytesSent:(id)arg1;
- (void)setOriginalGuid:(id)arg1;
- (void)setTotalBytes:(id)arg1;
- (void)setWPConnectionError:(id)arg1;

@end
