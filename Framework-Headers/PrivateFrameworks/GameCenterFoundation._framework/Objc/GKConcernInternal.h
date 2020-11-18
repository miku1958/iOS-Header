//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    NSString *_message;
    unsigned int _concernID;
}

@property (nonatomic) unsigned int concernID; // @synthesize concernID=_concernID;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

