//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDCanvasDelegate-Protocol.h>

@class TSDCanvas, TSDLayout;

@protocol TSDDynamicCanvasDelegate <TSDCanvasDelegate>
- (void)i_layoutRegistered:(TSDLayout *)arg1;
- (void)i_layoutUnregistered:(TSDLayout *)arg1;

@optional
- (void)i_canvasWillLayout:(TSDCanvas *)arg1;
@end

