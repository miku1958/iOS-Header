//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPAccessoryPairingConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _roleId;
    NSString *_roleEmoji;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *roleEmoji; // @synthesize roleEmoji=_roleEmoji;
@property (nonatomic) long long roleId; // @synthesize roleId=_roleId;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2 roleEmoji:(id)arg3;

@end

