//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO
{
    NSMutableArray *_prevPoints;
    unsigned long long _width;
}

@property (strong, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
@property (nonatomic) unsigned long long width; // @synthesize width=_width;

- (void).cxx_destruct;
- (void)addPoint:(struct)arg1;
- (void)clear;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;

@end

