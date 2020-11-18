//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface CUPairedPeer : NSObject <NSSecureCoding>
{
    NSDictionary *_acl;
    NSData *_altIRK;
    NSUUID *_identifier;
    NSDictionary *_info;
    NSString *_label;
    NSString *_model;
    NSString *_name;
    NSData *_publicKey;
}

@property (copy, nonatomic) NSDictionary *acl; // @synthesize acl=_acl;
@property (copy, nonatomic) NSData *altIRK; // @synthesize altIRK=_altIRK;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

