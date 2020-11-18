//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGraphicsRendererFormat, _UIReusePool;

@interface UIGraphicsRenderer : NSObject
{
    UIGraphicsRendererFormat *_format;
    _UIReusePool *_reusePool;
}

@property (readonly, nonatomic) BOOL allowsImageOutput;
@property (readonly, nonatomic) UIGraphicsRendererFormat *format; // @synthesize format=_format;

+ (struct CGContext *)_contextWithFormat:(id)arg1 renderer:(id)arg2;
+ (void)_destroyCGContext:(struct CGContext *)arg1 withRenderer:(id)arg2;
+ (BOOL)_supportsContextReuse;
+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;
- (void).cxx_destruct;
- (void)_configureReuseState;
- (struct CGContext *)_dequeueContextForReuse;
- (void)_enqueueContextForReuse:(struct CGContext *)arg1;
- (void)_prepareContextForReuse:(struct CGContext *)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (id)initWithFormat:(id)arg1 bounds:(struct CGRect)arg2;
- (void)popContext:(id)arg1;
- (void)pushContext:(id)arg1;
- (BOOL)runDrawingActions:(CDUnknownBlockType)arg1 completionActions:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)runDrawingActions:(CDUnknownBlockType)arg1 completionActions:(CDUnknownBlockType)arg2 format:(id)arg3 error:(id *)arg4;

@end

