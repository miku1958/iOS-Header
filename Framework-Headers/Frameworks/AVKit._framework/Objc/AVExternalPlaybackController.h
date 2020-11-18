//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaControls, UIViewController;

@interface AVExternalPlaybackController : NSObject
{
    MPMediaControls *_mediaControls;
    CDUnknownBlockType _clientCompletionHandler;
    UIViewController *_pickerViewController;
}

@property (readonly) UIViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;

+ (id)externalPlaybackStateDescriptionForState:(long long)arg1;
- (void).cxx_destruct;
- (void)_invokeClientCompletionHandlerWithPlaybackState:(long long)arg1;
- (void)willBeginPlaybackFromAppWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willBeginPlaybackFromAppWithBundleID:(id)arg1 pickerPresentationViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

