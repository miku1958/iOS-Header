//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextTiledLayerMaskedRect : NSObject
{
    double _alpha;
    struct CGRect _boundingRect;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;

+ (id)ghostedRect:(struct CGRect)arg1;
+ (id)rect:(struct CGRect)arg1 alpha:(double)arg2;
- (id)description;
- (id)initWithRect:(struct CGRect)arg1 alpha:(double)arg2;

@end

