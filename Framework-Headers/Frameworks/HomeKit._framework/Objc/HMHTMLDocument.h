//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stringValue;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)validateAndReturnError:(id *)arg1;

@end
