//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>
{
    BOOL _useSCRT;
    NSData *_dataToSign;
    long long _validityInMinutes;
}

@property (strong, nonatomic) NSData *dataToSign; // @synthesize dataToSign=_dataToSign;
@property (nonatomic) BOOL useSCRT; // @synthesize useSCRT=_useSCRT;
@property (nonatomic) long long validityInMinutes; // @synthesize validityInMinutes=_validityInMinutes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
