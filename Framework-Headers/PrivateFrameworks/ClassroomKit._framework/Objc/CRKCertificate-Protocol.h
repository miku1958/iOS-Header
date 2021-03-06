//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKKeychainItem-Protocol.h>

@class NSArray, NSData, NSDateInterval, NSString;

@protocol CRKCertificate <CRKKeychainItem>

@property (readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property (readonly, copy, nonatomic) NSArray *commonNames;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) unsigned int hashingAlgorithm;
@property (readonly, nonatomic) long long keySizeInBits;
@property (readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property (readonly, nonatomic) struct __SecCertificate *underlyingCertificate;
@property (readonly, nonatomic) NSDateInterval *validityDateInterval;

@end

