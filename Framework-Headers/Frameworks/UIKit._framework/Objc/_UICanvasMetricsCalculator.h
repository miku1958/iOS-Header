//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICanvasMetricsUpdating-Protocol.h>

@class NSString, _UICanvas;

__attribute__((visibility("hidden")))
@interface _UICanvasMetricsCalculator : NSObject <_UICanvasMetricsUpdating>
{
    _UICanvas *_canvas;
}

@property (weak, nonatomic) _UICanvas *canvas; // @synthesize canvas=_canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2;

@end

