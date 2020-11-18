//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSSecureCoding-Protocol.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>
{
    NSData *_deviceID;
    NSData *_deviceIDVRFOutput;
    NSMutableArray *_clientDatas;
}

@property (strong) NSMutableArray *clientDatas; // @synthesize clientDatas=_clientDatas;
@property (strong) NSData *deviceID; // @synthesize deviceID=_deviceID;
@property (strong) NSData *deviceIDVRFOutput; // @synthesize deviceIDVRFOutput=_deviceIDVRFOutput;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addClientDatasObject:(id)arg1;
- (id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2;
- (id)clientRecordsForVRFOutput:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2;
- (void)removeClientDatasObject:(id)arg1;
- (BOOL)updateWithMutation:(id)arg1 error:(id *)arg2;

@end
