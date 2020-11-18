//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsUI/NSObservable-Protocol.h>

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable>
{
    NSString *_key;
    _BRObservableFilePresenter *_presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) _BRObservableFilePresenter *presenter; // @synthesize presenter=_presenter;
@property (readonly) Class superclass;

+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)_applicationWillResignActive:(id)arg1;
+ (void)_deregisterInstance:(id)arg1;
+ (void)_registerForApplicationLifecycleNotifications;
+ (void)_registerInstance:(id)arg1;
+ (id)observerForKey:(id)arg1 onFileURL:(id)arg2;
- (void).cxx_destruct;
- (void)_presenterDidChange;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 fileURL:(id)arg2;

@end

