//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UINavigationController;

@interface PXSnapBackController : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _enabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UINavigationController *_navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (readonly, weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backButtonView;
- (void)_enumerateDestinationViewControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_loadGestureRecognizer;
- (void)_presentHistory;
- (void)_unloadGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithNavigationController:(id)arg1;

@end
