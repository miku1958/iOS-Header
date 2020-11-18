//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUColor;

@interface TSTTableBadge : NSObject
{
    int _badgeType;
    TSUColor *_color;
    double _viewScale;
    struct CGRect _frame;
}

@property (nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
@property (strong, nonatomic) TSUColor *color; // @synthesize color=_color;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (nonatomic) double viewScale; // @synthesize viewScale=_viewScale;

+ (id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(struct CGRect)arg4;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;

@end

