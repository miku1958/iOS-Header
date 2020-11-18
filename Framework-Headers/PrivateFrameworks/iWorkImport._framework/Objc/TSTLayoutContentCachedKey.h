//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTLayoutContentCachedKey : NSObject <NSCopying>
{
    NSString *mString;
    double mWidth;
    double mHeight;
    TSWPParagraphStyle *mParagraphStyle;
    BOOL mCellWraps;
    int mValueType;
    struct UIEdgeInsets mPaddingInsets;
    int mVerticalAlignment;
    int mWritingDirection;
}

@property (readonly, nonatomic) BOOL cellWraps; // @synthesize cellWraps=mCellWraps;
@property (readonly, nonatomic) double height; // @synthesize height=mHeight;
@property (readonly, nonatomic) struct UIEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property (readonly, nonatomic) NSString *string; // @synthesize string=mString;
@property (readonly, nonatomic) int valueType; // @synthesize valueType=mValueType;
@property (readonly, nonatomic) int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;
@property (readonly, nonatomic) double width; // @synthesize width=mWidth;
@property (readonly, nonatomic) int writingDirection; // @synthesize writingDirection=mWritingDirection;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets)arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutContentCachedKey:(id)arg1;

@end

