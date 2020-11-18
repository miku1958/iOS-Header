//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying>
{
    UIKBGeometry *m_geometry;
    struct CGRect m_frame;
    struct CGRect m_paddedFrame;
    int m_concaveCorner;
    struct CGSize m_concaveCornerOffset;
    unsigned long long m_uid;
    BOOL m_scaled;
    UIKBShape *m_originalShape;
}

@property (nonatomic) int concaveCorner; // @synthesize concaveCorner=m_concaveCorner;
@property (nonatomic) struct CGSize concaveCornerOffset; // @synthesize concaveCornerOffset=m_concaveCornerOffset;
@property (nonatomic) struct CGRect frame; // @synthesize frame=m_frame;
@property (strong, nonatomic) UIKBGeometry *geometry; // @synthesize geometry=m_geometry;
@property (strong, nonatomic) UIKBShape *originalShape; // @synthesize originalShape=m_originalShape;
@property (nonatomic) struct CGRect paddedFrame; // @synthesize paddedFrame=m_paddedFrame;
@property (nonatomic) BOOL scaled; // @synthesize scaled=m_scaled;
@property (readonly, nonatomic) unsigned long long uid; // @synthesize uid=m_uid;

+ (id)shape;
+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 inYAxis:(BOOL)arg2;
- (void)addRectFrom:(id)arg1;
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(BOOL)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3 concaveCorner:(int)arg4 concaveCornerOffset:(struct CGSize)arg5;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)makeLikeOther:(id)arg1;
- (void)scaleIfNeeded:(double)arg1 onlyYAxis:(BOOL)arg2;
- (void)scaleWidth:(double)arg1;
- (void)setConcaveCornerSize:(struct CGSize)arg1;
- (BOOL)shouldUseGeometry;

@end

