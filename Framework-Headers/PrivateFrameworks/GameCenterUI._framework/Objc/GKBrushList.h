//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKThemeBrush.h>

@class NSArray;

@interface GKBrushList : GKThemeBrush
{
    NSArray *_brushList;
}

@property (strong, nonatomic) NSArray *brushList; // @synthesize brushList=_brushList;

+ (id)brushListWithBrushes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (struct CGRect)drawRectForBrushAtIndex:(unsigned long long)arg1 fromRect:(struct CGRect)arg2 input:(id)arg3;
- (void)willDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;

@end

