//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCoding-Protocol.h>
#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    unordered_map_7f7b3f19 _map;
}

@property (readonly, nonatomic) const unordered_map_7f7b3f19 *map;

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMap:(const unordered_map_7f7b3f19 *)arg1;
- (id)initWithMovableMap:(unordered_map_7f7b3f19 *)arg1;

@end

