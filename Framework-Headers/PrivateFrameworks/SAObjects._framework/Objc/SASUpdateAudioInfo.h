//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>
{
}

@property (copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *dspStatus;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *productId;
@property (strong, nonatomic) SASRecordingInfo *recordingInfo;
@property (copy, nonatomic) NSString *refId; // @dynamic refId;
@property (readonly) Class superclass;
@property (nonatomic) BOOL triggeredTwoShotBorealis;
@property (copy, nonatomic) NSString *vendorId;

+ (id)updateAudioInfo;
+ (id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
