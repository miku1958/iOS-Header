//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSString;

@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    long long _faceStyle;
    NSString *_bundleIdentifier;
}

@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) long long faceStyle; // @synthesize faceStyle=_faceStyle;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithFaceStyle:(long long)arg1 bundleIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1;
- (BOOL)isAvailableForDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

