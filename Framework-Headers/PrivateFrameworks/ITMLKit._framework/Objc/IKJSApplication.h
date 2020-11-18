//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSApplication-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSApplication-Protocol.h>
#import <ITMLKit/_IKJSApplicationProxy-Protocol.h>

@class NSDictionary, NSString;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *traitCollection;

- (id)asPrivateIKJSApplication;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)reload:(id)arg1:(id)arg2;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (void)traitCollectionChanged:(id)arg1;
- (void)update;
- (void)updatedAppWithOptions:(id)arg1;

@end

