//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate>
{
    struct RetainPtr<MPAVRoutingController> _routingController;
    struct RetainPtr<MPAudioVideoRoutingPopoverController> _popoverController;
    struct RetainPtr<MPAVRoutingSheet> _actionSheet;
    WKContentView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(struct CGRect)arg2;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)show:(BOOL)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;
- (void)showAirPlayPickerIPhone:(long long)arg1;

@end

