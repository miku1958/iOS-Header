//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CRKASMCertificateCommonName : NSObject
{
    NSString *_userIdentifier;
    NSString *_prefix;
    NSUUID *_UUID;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;

+ (id)commonNameWithString:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 UUID:(id)arg3;

@end
