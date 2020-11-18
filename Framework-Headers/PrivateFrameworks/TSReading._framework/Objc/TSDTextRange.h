//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextRange.h>

@interface TSDTextRange : UITextRange
{
    struct _NSRange _range;
    BOOL _eolAffinity;
    float _preferredStartPosition;
    float _preferredEndPosition;
}

@property (nonatomic) BOOL isAtEndOfLine; // @synthesize isAtEndOfLine=_eolAffinity;
@property (readonly, nonatomic) float preferredEndPosition; // @synthesize preferredEndPosition=_preferredEndPosition;
@property (readonly, nonatomic) float preferredStartPosition; // @synthesize preferredStartPosition=_preferredStartPosition;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;

+ (id)textRangeWithRange:(struct _NSRange)arg1;
+ (id)textRangeWithRange:(struct _NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)end;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRange:(struct _NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)start;

@end

