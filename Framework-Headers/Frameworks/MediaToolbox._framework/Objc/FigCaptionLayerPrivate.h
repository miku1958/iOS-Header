//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject
{
    struct OpaqueFigCFCaptionRenderer *renderer;
    NSMutableArray *captionElementLayers;
    struct OpaqueFigSimpleMutex *renderMutex;
    struct OpaqueFigReentrantMutex *layoutSublayersMutex;
}

@end
