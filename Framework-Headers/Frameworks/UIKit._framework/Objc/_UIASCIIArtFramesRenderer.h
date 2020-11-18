//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIASCIIArtFramesRenderer : NSObject
{
    NSArray *_frames;
    double _outputLineWidth;
}

@property (readonly, nonatomic) NSArray *frames;
@property (readonly, nonatomic) double outputLineWidth;

- (void).cxx_destruct;
- (id)_normalizeFrames:(id)arg1;
- (id)description;
- (id)initWithFrames:(id)arg1;
- (id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2;
- (id)renderedLines;
- (struct CGRect)scaledRectForRect:(struct CGRect)arg1 scaleSize:(struct CGSize)arg2;
- (id)visualDescription;

@end
