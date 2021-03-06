//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFOSTransaction, NSData, NSDate, NSNumber, NSString;

@interface HMDSnapshotFile : HMFObject <HMFLogging>
{
    BOOL _externalFilePath;
    NSString *_directory;
    NSString *_filePath;
    NSDate *_snapshotTimestamp;
    NSNumber *_slotIdentifier;
    NSNumber *_aspectRatio;
    HMFOSTransaction *_snapshotCATransaction;
}

@property (readonly) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *directory; // @synthesize directory=_directory;
@property (readonly) NSData *encodedDataForIDSSend;
@property (readonly) BOOL externalFilePath; // @synthesize externalFilePath=_externalFilePath;
@property (readonly) NSString *filePath; // @synthesize filePath=_filePath;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property (strong, nonatomic) HMFOSTransaction *snapshotCATransaction; // @synthesize snapshotCATransaction=_snapshotCATransaction;
@property (readonly) NSDate *snapshotTimestamp; // @synthesize snapshotTimestamp=_snapshotTimestamp;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2;
- (void)dealloc;
- (BOOL)decodeIDSDataReceived:(id)arg1 snapshotDataTransaction:(id)arg2;
- (id)initWithImageDirectory:(id)arg1;
- (id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (BOOL)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(BOOL)arg5 writeBack:(BOOL)arg6;
- (void)updateSlotIdentifier;

@end

