//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSString, SignedMutationTimestamp, VRFWitness;

@interface InsertResponse : GPBMessage
{
}

@property (copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property (strong, nonatomic) VRFWitness *clientDataWitness; // @dynamic clientDataWitness;
@property (strong, nonatomic) VRFWitness *deviceIdWitness; // @dynamic deviceIdWitness;
@property (nonatomic) BOOL hasClientDataWitness; // @dynamic hasClientDataWitness;
@property (nonatomic) BOOL hasDeviceIdWitness; // @dynamic hasDeviceIdWitness;
@property (nonatomic) BOOL hasSmt; // @dynamic hasSmt;
@property (nonatomic) BOOL hasUriWitness; // @dynamic hasUriWitness;
@property (copy, nonatomic) NSString *serverEventInfo; // @dynamic serverEventInfo;
@property (strong, nonatomic) SignedMutationTimestamp *smt; // @dynamic smt;
@property (nonatomic) int status; // @dynamic status;
@property (strong, nonatomic) VRFWitness *uriWitness; // @dynamic uriWitness;

+ (id)descriptor;

@end
