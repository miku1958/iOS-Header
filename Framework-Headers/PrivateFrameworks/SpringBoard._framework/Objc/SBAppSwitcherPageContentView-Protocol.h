//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBAppSwitcherPageContentView <NSObject>

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, getter=isVisible) BOOL visible;

- (void)invalidate;

@optional
- (void)setShouldUseBrightMaterial:(BOOL)arg1;
- (void)setShowingIconOverlayView:(BOOL)arg1;
@end
