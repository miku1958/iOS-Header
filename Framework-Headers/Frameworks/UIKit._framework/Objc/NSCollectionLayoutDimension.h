//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface NSCollectionLayoutDimension : NSObject <NSCopying>
{
    double _dimension;
    long long _semantic;
}

@property (nonatomic) double dimension; // @synthesize dimension=_dimension;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) BOOL isFractionalHeight;
@property (readonly, nonatomic) BOOL isFractionalWidth;
@property (nonatomic) long long semantic; // @synthesize semantic=_semantic;

+ (id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2;
+ (id)absoluteDimension:(double)arg1;
+ (id)estimatedDimension:(double)arg1;
+ (id)fractionalHeightDimension:(double)arg1;
+ (id)fractionalWidthDimension:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDimension:(double)arg1 semantic:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end
