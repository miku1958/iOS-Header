//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _SFCertificate : NSObject
{
    id _certificateInternal;
}

@property (readonly, nonatomic) long long certificateType;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) struct __SecCertificate *secCertificate;
@property (readonly, nonatomic) NSData *serialNumber;
@property (readonly, nonatomic) NSString *subject;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithSecCertificate:(struct __SecCertificate *)arg1;

@end
