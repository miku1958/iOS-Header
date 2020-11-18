//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>
#import <NanoTimeKitCompanion/SYChange-Protocol.h>

@class CLKComplicationDescriptor, NSData, NSNumber, NSString, NSUUID;

@interface NTKDSyncMessage : NSObject <SYChange, NSSecureCoding>
{
    NSUUID *_uuid;
    long long _messageType;
    NSUUID *_faceUUID;
    NSData *_payloadData;
    double _progress;
    NSString *_complicationClientID;
    CLKComplicationDescriptor *_complicationDescriptor;
    NSNumber *_complicationFamily;
}

@property (readonly, nonatomic) long long changeType;
@property (copy, nonatomic) NSString *complicationClientID; // @synthesize complicationClientID=_complicationClientID;
@property (copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // @synthesize complicationDescriptor=_complicationDescriptor;
@property (copy, nonatomic) NSNumber *complicationFamily; // @synthesize complicationFamily=_complicationFamily;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSUUID *faceUUID; // @synthesize faceUUID=_faceUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (copy, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;

+ (id)messageOfType:(long long)arg1;
+ (id)messageOfType:(long long)arg1 withComplicationCliendId:(id)arg2 descriptor:(id)arg3 family:(id)arg4;
+ (id)messageOfType:(long long)arg1 withComplicationClientId:(id)arg2;
+ (id)messageOfType:(long long)arg1 withFaceUUID:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
