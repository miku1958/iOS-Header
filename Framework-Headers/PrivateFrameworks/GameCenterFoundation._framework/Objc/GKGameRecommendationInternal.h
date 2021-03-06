//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal
{
    NSString *_reason;
    NSString *_engineID;
}

@property (strong, nonatomic) NSString *engineID; // @synthesize engineID=_engineID;
@property (strong, nonatomic) NSString *reason; // @synthesize reason=_reason;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (id)initWithGame:(id)arg1;
- (id)serverRepresentation;

@end

