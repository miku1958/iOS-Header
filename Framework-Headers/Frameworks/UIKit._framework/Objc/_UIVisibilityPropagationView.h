//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class BSServiceConnectionEndpointInjector, NSMutableArray, NSString, RBSTarget;

__attribute__((visibility("hidden")))
@interface _UIVisibilityPropagationView : UIView
{
    struct os_unfair_lock_s _visibilityLock;
    RBSTarget *_visibilityLock_target;
    BOOL _visibilityLock_enabled;
    NSString *_visibilityLock_sourceEnvironment;
    BOOL _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s _visibilityProcessingLock;
    RBSTarget *_visibilityProcessingLock_target;
    NSString *_visibilityProcessingLock_sourceEnvironment;
    BSServiceConnectionEndpointInjector *_visibilityProcessingLock_endpointInjector;
    NSMutableArray *_windowChangeNotifications;
}

@property (nonatomic, getter=isVisibilityPropagationEnabled) BOOL visibilityPropagationEnabled;

- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (void)_visibilityLock_setSource:(id)arg1;
- (void)_visibilityLock_updateVisibility;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setVisibilityTarget:(id)arg1;

@end
