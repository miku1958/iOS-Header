//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManager/NSObject-Protocol.h>

@class DOCAppearance, DOCConfiguration;
@protocol DOCHostBrowserViewControllerProxy, DOCHostDocumentBrowserViewControllerInterface, DOCHostInfoViewControllerProxy, DOCHostSourceViewControllerProxy, DOCHostTargetSelectionBrowserViewControllerProxy;

@protocol DOCServiceContextProtocol <NSObject>
- (void)configureAsBrowserViewWithHostProxy:(id<DOCHostBrowserViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id<DOCServiceBrowserViewControllerProxy>))arg3;
- (void)configureAsDocumentBrowserWithHostProxy:(id<DOCHostDocumentBrowserViewControllerInterface>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id<DOCServiceDocumentBrowserViewControllerInterface>))arg3;
- (void)configureAsInfoViewWithHostProxy:(id<DOCHostInfoViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id<DOCServiceInfoViewControllerProxy>))arg3;
- (void)configureAsSourceViewWithHostProxy:(id<DOCHostSourceViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id<DOCServiceSourceViewControllerProxy>))arg3;
- (void)configureAsTargetSelectionBrowserWithHostProxy:(id<DOCHostTargetSelectionBrowserViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id<DOCServiceTargetSelectionBrowserViewControllerProxy>))arg3;
- (void)fetchAllSourcesWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)updateAppearance:(DOCAppearance *)arg1 completionBlock:(void (^)(void))arg2;
- (void)updateEditingTo:(BOOL)arg1 animated:(BOOL)arg2;
@end

