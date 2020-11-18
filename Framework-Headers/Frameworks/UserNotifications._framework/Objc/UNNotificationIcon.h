//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_applicationIdentifier;
    NSString *_name;
    NSString *_path;
}

@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;

+ (id)iconAtPath:(id)arg1;
+ (id)iconForApplicationIdentifier:(id)arg1;
+ (id)iconNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

