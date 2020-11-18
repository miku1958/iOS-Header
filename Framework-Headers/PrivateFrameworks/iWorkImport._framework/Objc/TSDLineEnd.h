//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDLineEnd : NSObject <TSSPropertyValueArchiving, NSCopying, TSDMixing>
{
    struct CGPath *mPath;
    struct CGPath *mWrapPath;
    struct CGPoint mEndPoint;
    BOOL mIsFilled;
    NSString *mIdentifier;
    int mLineJoin;
}

@property (readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEndPoint;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
@property (readonly, nonatomic) BOOL isFilled; // @synthesize isFilled=mIsFilled;
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) int lineJoin; // @synthesize lineJoin=mLineJoin;
@property (readonly, nonatomic) struct CGPath *path; // @synthesize path=mPath;
@property (readonly, nonatomic) struct CGPath *wrapPath;

+ (id)filledArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)filledSquare;
+ (id)instanceWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
+ (id)invertedArrow;
+ (id)line;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
+ (id)lineEndWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)openArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)simpleArrow;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
- (id)initWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGImage *)newLineEndImageOnRight:(BOOL)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;
- (void)saveToArchive:(struct LineEndArchive *)arg1 archiver:(id)arg2;
- (double)scaleForStrokeWidth:(double)arg1;

@end

