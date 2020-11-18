//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface ADTapGestureTimer : NSObject <UIGestureRecognizerDelegate>
{
    double _maximumTimeSinceTap;
    UIView *_view;
    UITapGestureRecognizer *_gestureRecognizer;
    double _mostRecentTapTimestamp;
    struct CGPoint _mostRecentTapLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumTimeSinceTap; // @synthesize maximumTimeSinceTap=_maximumTimeSinceTap;
@property (nonatomic) struct CGPoint mostRecentTapLocation; // @synthesize mostRecentTapLocation=_mostRecentTapLocation;
@property (nonatomic) double mostRecentTapTimestamp; // @synthesize mostRecentTapTimestamp=_mostRecentTapTimestamp;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;
@property (readonly, nonatomic) BOOL wasViewTappedRecently;

- (void)_handleTapOnView:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithView:(id)arg1;

@end

