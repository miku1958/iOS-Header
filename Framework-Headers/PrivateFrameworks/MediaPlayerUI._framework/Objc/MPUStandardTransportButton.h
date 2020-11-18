//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPTransportButton.h>

#import <MediaPlayerUI/MPUTransportButton-Protocol.h>

@class MPUTransportButtonEventHandler, NSString;

@interface MPUStandardTransportButton : MPTransportButton <MPUTransportButton>
{
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property (nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (id)transportButton;
- (void).cxx_destruct;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_fa8656bd)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEnabled;
- (void)prepareForReuse;
- (BOOL)shouldTrack;
- (BOOL)wantsCustomHighlightAppearance;

@end

