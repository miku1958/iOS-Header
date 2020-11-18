//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface INVoiceCommandDeviceInformation : NSObject <NSCopying, NSSecureCoding>
{
    long long _deviceIdiom;
    NSNumber *_isHomePodInUltimateMode;
}

@property (readonly, nonatomic) long long deviceIdiom; // @synthesize deviceIdiom=_deviceIdiom;
@property (readonly, copy, nonatomic) NSNumber *isHomePodInUltimateMode; // @synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

