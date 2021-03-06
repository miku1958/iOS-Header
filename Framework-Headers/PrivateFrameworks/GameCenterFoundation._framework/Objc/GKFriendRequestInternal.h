//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal
{
    NSString *_message;
    NSDate *_date;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (int)defaultFamiliarity;

@end

