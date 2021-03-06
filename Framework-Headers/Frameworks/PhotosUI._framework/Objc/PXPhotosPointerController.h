//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIPointerInteraction, UIView;
@protocol PXPhotosPointerControllerDelegate;

@interface PXPhotosPointerController : NSObject <UIPointerInteractionDelegate, PXSettingsKeyObserver>
{
    UIView *_contentView;
    id<PXPhotosPointerControllerDelegate> _delegate;
    UIPointerInteraction *_pointerInteraction;
}

@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<PXPhotosPointerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupWithContentView:(id)arg1;
- (id)initWithContentView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

