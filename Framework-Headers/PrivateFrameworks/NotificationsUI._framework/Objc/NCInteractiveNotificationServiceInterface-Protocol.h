//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol NCInteractiveNotificationServiceInterface
- (void)_didChangeRevealPercent:(double)arg1;
- (void)_getActionContextWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)_getActionTitlesWithCompletion:(void (^)(NSArray *))arg1;
- (void)_getInitialStateWithCompletion:(void (^)(double, double, BOOL, NCViewServiceDescriptor *, NCViewServiceDescriptor *))arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_handleActionIdentifier:(NSString *)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(BOOL)arg1;
- (void)_setContext:(NSDictionary *)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(BOOL)arg1;
- (void)_willPresentFromActionIdentifier:(NSString *)arg1;
@end
