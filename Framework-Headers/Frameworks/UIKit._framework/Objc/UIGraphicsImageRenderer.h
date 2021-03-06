//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
{
}

+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;
- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(CDUnknownBlockType)arg2;
- (id)PNGDataWithActions:(CDUnknownBlockType)arg1;
- (void)_prepareContextForReuse:(struct CGContext *)arg1;
- (BOOL)allowsImageOutput;
- (id)imageWithActions:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2;
- (void)pushContext:(id)arg1;

@end

