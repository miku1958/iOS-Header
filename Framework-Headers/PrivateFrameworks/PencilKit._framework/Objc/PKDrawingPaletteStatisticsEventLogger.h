//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKDrawingPaletteStatistics-Protocol.h>

@class NSString;

@interface PKDrawingPaletteStatisticsEventLogger : NSObject <PKDrawingPaletteStatistics>
{
    double _lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
    double _lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastHandwritingToolUsedOverDrawingAttachmentTimestamp; // @synthesize lastHandwritingToolUsedOverDrawingAttachmentTimestamp=_lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
@property (nonatomic) double lastInkingToolUsedOverNonDrawingAttachmentTimestamp; // @synthesize lastInkingToolUsedOverNonDrawingAttachmentTimestamp=_lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
@property (readonly) Class superclass;

- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)arg1;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)arg1;

@end

