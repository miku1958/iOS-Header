//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVInteraction, SVInteractionHandling, SVInteractionObserving, SVVideoInteractionHandlerFactory, SVVideoInteractionObserverFactory;

@protocol SVInteractionManager <NSObject>
- (void)registerInteraction:(id<SVInteraction>)arg1 withInteractionHandler:(id<SVInteractionHandling>)arg2;
- (void)registerInteraction:(id<SVInteraction>)arg1 withInteractionHandlerFactory:(id<SVVideoInteractionHandlerFactory>)arg2;
- (void)registerInteraction:(id<SVInteraction>)arg1 withInteractionObserver:(id<SVInteractionObserving>)arg2;
- (void)registerInteraction:(id<SVInteraction>)arg1 withInteractionObserverFactory:(id<SVVideoInteractionObserverFactory>)arg2;
@end

