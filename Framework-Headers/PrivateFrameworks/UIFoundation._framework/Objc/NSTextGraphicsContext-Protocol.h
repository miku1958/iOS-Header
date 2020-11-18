//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@protocol NSTextGraphicsContext;

@protocol NSTextGraphicsContext <NSObject>

@property (readonly) struct CGContext *CGContext;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property (readonly, getter=isFlipped) BOOL flipped;

+ (id<NSTextGraphicsContext>)graphicsContextForApplicationFrameworkContext:(long long)arg1;
@end
