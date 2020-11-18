//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject
{
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
    TSDStroke *mStroke;
}

@property (readonly, copy, nonatomic) TSDLineEnd *headLineEnd; // @synthesize headLineEnd=mHeadLineEnd;
@property (readonly, copy, nonatomic) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property (readonly, copy, nonatomic) TSDLineEnd *tailLineEnd; // @synthesize tailLineEnd=mTailLineEnd;

+ (id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

