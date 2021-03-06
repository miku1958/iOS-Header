//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSSecureCoding-Protocol.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>
{
    NSPersistentHistoryToken *_persistentHistoryToken;
    int _version;
}

@property (readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken; // @synthesize persistentHistoryToken=_persistentHistoryToken;
@property (readonly, nonatomic) int version; // @synthesize version=_version;

+ (id)currentTokenForContext:(id)arg1;
+ (int)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (id)tokenWithPersistentHistoryToken:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPersistentChangeToken:(id)arg1;

@end

