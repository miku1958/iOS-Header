//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSMutableSet, NSSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_fromSet;
    NSMutableSet *_toSet;
    NSMutableSet *_additions;
    NSMutableSet *_deletions;
    NSMutableSet *_updates;
}

@property (readonly, nonatomic) NSSet *additions; // @synthesize additions=_additions;
@property (readonly, nonatomic) NSSet *deletions; // @synthesize deletions=_deletions;
@property (readonly, nonatomic) NSSet *fromSet; // @synthesize fromSet=_fromSet;
@property (readonly, nonatomic) NSSet *toSet; // @synthesize toSet=_toSet;
@property (readonly, nonatomic) NSSet *updates; // @synthesize updates=_updates;

+ (id)diffFromSet:(id)arg1 toSet:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
