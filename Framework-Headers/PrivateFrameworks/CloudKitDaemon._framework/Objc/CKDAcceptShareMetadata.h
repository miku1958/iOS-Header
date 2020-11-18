//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDAcceptShareMetadata : NSObject
{
    BOOL _acceptedInProcess;
    NSURL *_shareURL;
    CKRecordID *_shareRecordID;
    NSString *_etag;
    NSData *_publicPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicKey;
    unsigned long long _publicKeyVersion;
    NSData *_oonProtectionInfo;
    NSString *_oonParticipantID;
}

@property (nonatomic) BOOL acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (strong, nonatomic) NSString *oonParticipantID; // @synthesize oonParticipantID=_oonParticipantID;
@property (strong, nonatomic) NSData *oonProtectionInfo; // @synthesize oonProtectionInfo=_oonProtectionInfo;
@property (strong, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property (nonatomic) unsigned long long publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property (strong, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property (strong, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property (strong, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property (strong, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;

- (void).cxx_destruct;

@end

