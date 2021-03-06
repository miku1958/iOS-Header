//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/ASOOverlay-Protocol.h>
#import <StoreKit/ASOOverlayDelegate-Protocol.h>

@class NSString, SKOverlayConfiguration;
@protocol ASOOverlayConfiguration, ASOOverlayDelegate, SKOverlayDelegate;

@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate>
{
    id<SKOverlayDelegate> _delegate;
    SKOverlayConfiguration *_configuration;
}

@property (readonly, copy) SKOverlayConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) id<ASOOverlayConfiguration> overlayConfiguration;
@property (readonly, weak, nonatomic) id<ASOOverlayDelegate> overlayDelegate;
@property (readonly) Class superclass;

+ (void)dismissOverlayInScene:(id)arg1;
+ (id)unsupportedPlatformErrorWithAPIName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)presentInScene:(id)arg1;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2;
- (id)tranformToPublicError:(id)arg1;

@end

