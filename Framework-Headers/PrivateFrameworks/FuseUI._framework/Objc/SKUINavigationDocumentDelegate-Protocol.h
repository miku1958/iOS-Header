//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKJSNavigationDocument, JSContext, SKUINavigationDocumentController;

@protocol SKUINavigationDocumentDelegate <NSObject>

@optional
- (IKJSNavigationDocument *)jsNavigationDocumentForNavigationDocumentController:(SKUINavigationDocumentController *)arg1 inContext:(JSContext *)arg2;
- (void)navigationDocumentController:(SKUINavigationDocumentController *)arg1 requestsAccessToAppContextUsingBlock:(void (^)(IKAppContext *))arg2;
- (void)navigationDocumentStackDidChange:(SKUINavigationDocumentController *)arg1;
@end

