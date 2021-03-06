//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying>
{
    short _renderValues[6];
    short _engagementValues[6];
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getRankingValues:(short *)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3;
- (void)incrementRankingValuesForType:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setRankingValues:(short [6])arg1 forType:(int)arg2;

@end

