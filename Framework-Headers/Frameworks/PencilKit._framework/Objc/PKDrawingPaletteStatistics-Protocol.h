//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@protocol PKDrawingPaletteStatistics <NSObject>
- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)arg1;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)arg1;
@end

