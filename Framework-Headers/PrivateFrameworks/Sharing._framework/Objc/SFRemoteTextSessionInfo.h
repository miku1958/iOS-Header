//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding>
{
    BOOL _secureTextEntry;
    NSString *_identifier;
    long long _keyboardType;
    NSString *_prompt;
    long long _returnKeyType;
    NSDictionary *_rtiPayload;
    NSString *_text;
    NSString *_title;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property (copy, nonatomic) NSDictionary *rtiPayload; // @synthesize rtiPayload=_rtiPayload;
@property (nonatomic) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRTIPayload:(id)arg1;

@end

