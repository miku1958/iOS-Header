//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIRenderTask : NSObject
{
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(struct RenderTask *)arg1;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithInternalTask:(struct RenderTask *)arg1;
- (struct RenderTask *)internalRepresentation;
- (id)waitUntilCompletedAndReturnError:(id *)arg1;

@end

