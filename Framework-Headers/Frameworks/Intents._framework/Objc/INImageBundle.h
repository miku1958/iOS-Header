//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundlePath;
    NSString *_bundleIdentifier;
    unsigned long long _bundleType;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property (nonatomic) unsigned long long bundleType; // @synthesize bundleType=_bundleType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
