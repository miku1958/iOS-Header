//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface GKStoreItemInternal : GKInternalRepresentation
{
    NSNumber *_adamID;
    NSString *_artistName;
    NSString *_priceDisplay;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    BOOL _owned;
}

@property (strong, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property (strong, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) unsigned int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property (nonatomic) BOOL owned; // @synthesize owned=_owned;
@property (strong, nonatomic) NSString *priceDisplay; // @synthesize priceDisplay=_priceDisplay;
@property (strong, nonatomic) NSURL *shortViewItemURL; // @synthesize shortViewItemURL=_shortViewItemURL;
@property (strong, nonatomic) NSURL *tellAFriendMessageContentsUrl; // @synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl;
@property (strong, nonatomic) NSURL *viewItemURL; // @synthesize viewItemURL=_viewItemURL;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3;

@end

