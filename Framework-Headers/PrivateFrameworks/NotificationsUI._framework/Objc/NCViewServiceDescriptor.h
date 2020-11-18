//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <NotificationsUI/NSCopying-Protocol.h>
#import <NotificationsUI/NSSecureCoding-Protocol.h>

@class NSString;

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_viewControllerClassName;
    NSString *_bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;

+ (id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;

@end

