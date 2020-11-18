//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray, PatConfigInclusionProof, Signature;

@interface PublicKeysResponse : GPBMessage
{
}

@property (strong, nonatomic) NSMutableArray *appLeafsArray; // @dynamic appLeafsArray;
@property (readonly, nonatomic) unsigned long long appLeafsArray_Count; // @dynamic appLeafsArray_Count;
@property (nonatomic) BOOL hasPatConfigProof; // @dynamic hasPatConfigProof;
@property (nonatomic) BOOL hasVrfSignature; // @dynamic hasVrfSignature;
@property (strong, nonatomic) NSMutableArray *intermediatesArray; // @dynamic intermediatesArray;
@property (readonly, nonatomic) unsigned long long intermediatesArray_Count; // @dynamic intermediatesArray_Count;
@property (strong, nonatomic) PatConfigInclusionProof *patConfigProof; // @dynamic patConfigProof;
@property (nonatomic) int status; // @dynamic status;
@property (nonatomic) unsigned long long tltBeginningMs; // @dynamic tltBeginningMs;
@property (strong, nonatomic) NSMutableArray *tltLeafsArray; // @dynamic tltLeafsArray;
@property (readonly, nonatomic) unsigned long long tltLeafsArray_Count; // @dynamic tltLeafsArray_Count;
@property (copy, nonatomic) NSData *vrfKey; // @dynamic vrfKey;
@property (copy, nonatomic) NSData *vrfPublicKey; // @dynamic vrfPublicKey;
@property (strong, nonatomic) Signature *vrfSignature; // @dynamic vrfSignature;

+ (id)descriptor;

@end
