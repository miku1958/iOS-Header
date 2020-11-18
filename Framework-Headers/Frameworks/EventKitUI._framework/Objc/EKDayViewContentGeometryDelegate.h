//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/CUIKSingleDayTimelineGeometryDelegate-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate>
{
    EKDayViewContent *_dayViewContent;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (weak, nonatomic) EKDayViewContent *dayViewContent; // @synthesize dayViewContent=_dayViewContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect displayedRect;
@property (nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double hourHeight;
@property (readonly, nonatomic) BOOL originIsUpperLeft;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeWidth;
@property (readonly, nonatomic) double topPadding;

- (void).cxx_destruct;
- (double)dateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForDate:(double)arg1;
- (BOOL)shouldReverseLayoutDirection;

@end

