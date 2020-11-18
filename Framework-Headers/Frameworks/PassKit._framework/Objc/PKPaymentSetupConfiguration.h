//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding>
{
    NSString *_referrerIdentifier;
    NSURL *_originatingURL;
    NSString *_merchantIdentifier;
    NSArray *_signedFields;
    NSString *_signature;
}

@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property (strong, nonatomic) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
@property (copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property (copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property (copy, nonatomic) NSArray *signedFields; // @synthesize signedFields=_signedFields;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
