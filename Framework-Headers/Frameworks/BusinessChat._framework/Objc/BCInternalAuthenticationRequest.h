//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionaryImageSerializable-Protocol.h>
#import <BusinessChat/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface BCInternalAuthenticationRequest : NSObject <BCDictionaryImageSerializable, NSSecureCoding>
{
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_responseEncryptionKey;
    NSArray *_retrieve;
    NSDictionary *_labels;
}

@property (strong, nonatomic) NSString *businessIdentifier; // @synthesize businessIdentifier=_businessIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (strong, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property (strong, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property (strong, nonatomic) NSString *responseEncryptionKey; // @synthesize responseEncryptionKey=_responseEncryptionKey;
@property (strong, nonatomic) NSArray *retrieve; // @synthesize retrieve=_retrieve;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end

