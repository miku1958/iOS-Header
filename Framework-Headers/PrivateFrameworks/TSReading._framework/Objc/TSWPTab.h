//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSString;

@interface TSWPTab : NSObject <NSCopying>
{
    double _position;
    int _alignment;
    NSString *_leader;
}

@property (nonatomic) int alignment; // @synthesize alignment=_alignment;
@property (copy, nonatomic) NSString *leader; // @synthesize leader=_leader;
@property (nonatomic) double position; // @synthesize position=_position;

+ (id)displayStringFromTabLeader:(id)arg1;
+ (void)initialize;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopAlignmentStringLeft;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2;
+ (id)tab;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareToPosition:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPosition:(double)arg1;
- (double)positionInInches;
- (void)setPositionInInches:(double)arg1;

@end

