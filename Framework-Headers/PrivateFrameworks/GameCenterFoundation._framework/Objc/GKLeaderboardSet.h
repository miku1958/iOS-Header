//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKLeaderboardSetInternal, NSArray, NSString;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>
{
    GKLeaderboardSetInternal *_internal;
}

@property (readonly, strong, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong) GKLeaderboardSetInternal *internal; // @synthesize internal=_internal;
@property (readonly, strong, nonatomic) NSArray *leaderboardIdentifiers; // @dynamic leaderboardIdentifiers;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardSetsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
