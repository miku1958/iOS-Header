//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TSDLayout, TSDWrapSegments, TSUPointerKeyDictionary, TSWPColumn;
@protocol TSWPLayoutTarget;

__attribute__((visibility("hidden")))
@interface TPTextWrapCookie : NSObject
{
    NSMutableArray *_floatingWrappables;
    TSUPointerKeyDictionary *_wrapSegmentsInverseTransformInRootDictionary;
    TSWPColumn *_column;
    TSDLayout<TSWPLayoutTarget> *_target;
    TSDWrapSegments *_interiorWrapSegments;
    struct CGAffineTransform _targetInverseTransformInRoot;
}

@property (strong, nonatomic) TSWPColumn *column; // @synthesize column=_column;
@property (readonly, nonatomic) NSArray *floatingWrappables; // @synthesize floatingWrappables=_floatingWrappables;
@property (strong, nonatomic) TSDWrapSegments *interiorWrapSegments; // @synthesize interiorWrapSegments=_interiorWrapSegments;
@property (weak, nonatomic) TSDLayout<TSWPLayoutTarget> *target; // @synthesize target=_target;
@property (readonly, nonatomic) struct CGAffineTransform targetInverseTransformInRoot; // @synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot;

+ (id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2;
- (void).cxx_destruct;
- (void)addFloatingWrappable:(id)arg1;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;
- (id)transformedWrapSegmentsForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform)arg2;

@end

