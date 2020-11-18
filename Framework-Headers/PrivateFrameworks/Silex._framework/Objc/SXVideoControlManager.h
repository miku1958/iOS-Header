//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SXTimeline;
@protocol SXVideoControlManagerDelegate;

@interface SXVideoControlManager : NSObject
{
    BOOL _autoHidingEnabled;
    id<SXVideoControlManagerDelegate> _delegate;
    NSArray *_items;
    double _time;
    double _duration;
    SXTimeline *_timeline;
}

@property (nonatomic) BOOL autoHidingEnabled; // @synthesize autoHidingEnabled=_autoHidingEnabled;
@property (weak, nonatomic) id<SXVideoControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) double time; // @synthesize time=_time;
@property (readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;

- (void).cxx_destruct;
- (void)ensureAllItemsAreVisible;
- (void)ensureHideableItemsAreHidden;
- (void)ensureItemsAreHidden:(id)arg1;
- (void)ensureItemsAreVisible:(id)arg1;
- (id)init;
- (id)itemsPassingTest:(CDUnknownBlockType)arg1;
- (void)scheduleAutoHideTimelineIfEnabled;
- (void)toggleVisibility;
- (void)updateAutoAppearanceTimelineForItems:(id)arg1;

@end

