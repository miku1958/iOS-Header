//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal
{
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (int)defaultFamiliarity;
- (BOOL)isFriend;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end

