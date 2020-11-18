//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
{
}

+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;
- (id)PDFDataWithActions:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (void)popContext:(id)arg1;
- (void)pushContext:(id)arg1;
- (BOOL)writePDFToURL:(id)arg1 withActions:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end
