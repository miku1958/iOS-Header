//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMZoomSlider;

@protocol CAMZoomSliderDelegate <NSObject>
- (void)didHideZoomSlider:(CAMZoomSlider *)arg1;
- (void)didShowZoomSlider:(CAMZoomSlider *)arg1;
- (void)zoomSliderDidBeginAutozooming:(CAMZoomSlider *)arg1;
- (void)zoomSliderDidEndAutozooming:(CAMZoomSlider *)arg1;
@end
