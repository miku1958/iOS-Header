//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/RemoteUIControllerDelegate-Protocol.h>

@class NSString, RemoteUIController, UINavigationController, UIViewController;

@interface SFTermsAndConditionsManager : NSObject <RemoteUIControllerDelegate>
{
    UINavigationController *_genericTermsUIViewController;
    UIViewController *_presenter;
    BOOL _showWarranty;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadedHandler;
    RemoteUIController *_termsController;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType loadedHandler; // @synthesize loadedHandler=_loadedHandler;
@property (readonly) Class superclass;
@property (strong, nonatomic) RemoteUIController *termsController; // @synthesize termsController=_termsController;

- (void).cxx_destruct;
- (void)activate;
- (void)doneButtonPressed;
- (id)initWithPresenter:(id)arg1 showWarranty:(BOOL)arg2;
- (void)loadOfflineTerms;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;

@end

