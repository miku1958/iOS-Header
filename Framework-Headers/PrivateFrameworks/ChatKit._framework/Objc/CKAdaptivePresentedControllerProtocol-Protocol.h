//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@protocol CKAdaptivePresentedControllerProtocol <NSObject>

@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (nonatomic) BOOL wantsWindowedPresentation;


@optional
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;
@end

