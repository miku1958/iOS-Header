//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSSecureCoding-Protocol.h>

@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding>
{
    BOOL _successfulSync;
    BOOL _marked;
    BOOL _notInSyncedData;
    NSData *_deviceID;
    NSData *_clientData;
    NSData *_deviceVRFOutput;
    NSData *_clientDataVRFOutput;
}

@property (strong) NSData *clientData; // @synthesize clientData=_clientData;
@property (strong) NSData *clientDataVRFOutput; // @synthesize clientDataVRFOutput=_clientDataVRFOutput;
@property (copy) NSData *deviceID; // @synthesize deviceID=_deviceID;
@property (strong) NSData *deviceVRFOutput; // @synthesize deviceVRFOutput=_deviceVRFOutput;
@property BOOL marked; // @synthesize marked=_marked;
@property BOOL notInSyncedData; // @synthesize notInSyncedData=_notInSyncedData;
@property BOOL successfulSync; // @synthesize successfulSync=_successfulSync;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

