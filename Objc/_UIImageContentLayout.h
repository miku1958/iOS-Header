//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayout : NSObject
{
    struct {
        unsigned int contentsIsGenerator:1;
        unsigned int contentsIsCGImage:1;
        unsigned int rendersContentAtNaturalSize:1;
    } _flags;
    id _contents;
    UIColor *_contentsMultiplyColor;
    double _contentsScaleFactor;
    double _baselineOffsetFromTop;
    double _baselineOffsetFromBottom;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _contentsTransform;
}

@property (readonly, nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property (readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (readonly, nonatomic) id contents;
@property (readonly, nonatomic) UIColor *contentsMultiplyColor;
@property (readonly, nonatomic) double contentsScaleFactor; // @synthesize contentsScaleFactor=_contentsScaleFactor;
@property (readonly, nonatomic) struct CGAffineTransform contentsTransform; // @synthesize contentsTransform=_contentsTransform;

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize)arg3;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasContents;

@end

