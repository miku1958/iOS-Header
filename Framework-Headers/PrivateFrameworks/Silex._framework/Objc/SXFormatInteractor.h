//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDebugLayoutOptionsObserving-Protocol.h>
#import <Silex/SXFormatInteractor-Protocol.h>
#import <Silex/SXLayoutCoordinatorDelegate-Protocol.h>
#import <Silex/SXNewsletterSubscriptionStatusObserving-Protocol.h>
#import <Silex/SXPresentationAttributesObserver-Protocol.h>
#import <Silex/SXSubscriptionStatusObserving-Protocol.h>

@class NSString;
@protocol SXDebugLayoutOptionsProviding, SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXNewsletterSubscriptionStatusProviding, SXPresentationAttributesProvider, SXPresentationEnvironment, SXSubscriptionStatusProviding;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXFormatInteractor>
{
    BOOL _requestedContentHiding;
    id<SXFormatInteractorDelegate> _delegate;
    id<SXLayoutCoordinator> _layoutCoordinator;
    id<SXLayoutOptionsFactory> _layoutOptionsFactory;
    id<SXPresentationAttributesProvider> _presentationAttributesProvider;
    id<SXSubscriptionStatusProviding> _subscriptionStatusProvider;
    id<SXPresentationEnvironment> _presentationEnvironment;
    id<SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;
    id<SXNewsletterSubscriptionStatusProviding> _newsletterSubscriptionStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider; // @synthesize debugLayoutOptionsProvider=_debugLayoutOptionsProvider;
@property (weak, nonatomic) id<SXFormatInteractorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXLayoutCoordinator> layoutCoordinator; // @synthesize layoutCoordinator=_layoutCoordinator;
@property (readonly, nonatomic) id<SXLayoutOptionsFactory> layoutOptionsFactory; // @synthesize layoutOptionsFactory=_layoutOptionsFactory;
@property (readonly, nonatomic) id<SXNewsletterSubscriptionStatusProviding> newsletterSubscriptionStatusProvider; // @synthesize newsletterSubscriptionStatusProvider=_newsletterSubscriptionStatusProvider;
@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
@property (weak, nonatomic) id<SXPresentationEnvironment> presentationEnvironment; // @synthesize presentationEnvironment=_presentationEnvironment;
@property (nonatomic) BOOL requestedContentHiding; // @synthesize requestedContentHiding=_requestedContentHiding;
@property (readonly, nonatomic) id<SXSubscriptionStatusProviding> subscriptionStatusProvider; // @synthesize subscriptionStatusProvider=_subscriptionStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)debugLayoutOptionsDidChange:(id)arg1;
- (id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5 newsletterSubscriptionStatusProvider:(id)arg6;
- (void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2;
- (void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2;
- (void)newsletterSubscriptionStatusDidChangeFromStatus:(unsigned long long)arg1;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (void)updateWithPresentationEnvironment:(id)arg1;

@end

