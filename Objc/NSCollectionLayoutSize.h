//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSCollectionLayoutDimension;

@interface NSCollectionLayoutSize : NSObject <NSCopying>
{
    NSCollectionLayoutDimension *_widthDimension;
    NSCollectionLayoutDimension *_heightDimension;
    long long _widthSemantic;
    long long _heightSemantic;
    struct CGSize _size;
}

@property (strong, nonatomic) NSCollectionLayoutDimension *heightDimension; // @synthesize heightDimension=_heightDimension;
@property (nonatomic) long long heightSemantic; // @synthesize heightSemantic=_heightSemantic;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (strong, nonatomic) NSCollectionLayoutDimension *widthDimension; // @synthesize widthDimension=_widthDimension;
@property (nonatomic) long long widthSemantic; // @synthesize widthSemantic=_widthSemantic;

+ (id)sizeWithAbsoluteSize:(struct CGSize)arg1;
+ (id)sizeWithContainerSize;
+ (id)sizeWithContainerWidthFactor:(double)arg1 containerHeightFactor:(double)arg2;
+ (id)sizeWithSize:(struct CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3;
+ (id)sizeWithWidth:(double)arg1 widthSemantic:(long long)arg2 height:(double)arg3 heightSemantic:(long long)arg4;
+ (id)sizeWithWidthDimension:(id)arg1 heightDimension:(id)arg2;
- (void).cxx_destruct;
- (struct CGSize)_effectiveSizeForContainer:(id)arg1;
- (struct CGSize)_effectiveSizeForContainer:(id)arg1 ignoringInsets:(BOOL)arg2;
- (BOOL)_isEstimatedForAxis:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 width:(id)arg4 height:(id)arg5;
- (BOOL)isContainerSize;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEstimated;

@end

