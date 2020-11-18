//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, TMLContext, TMLJSONObject, UIViewController;
@protocol TKNetworkTask;

@interface TKPage : NSObject
{
    TMLJSONObject *_dataObject;
    TMLContext *_context;
    UIViewController *_weakViewController;
    UIViewController *_loadingViewController;
    id<TKNetworkTask> _networkTask;
    BOOL _ready;
    BOOL _dataLoading;
    BOOL _shouldShowLoading;
    NSString *_viewName;
    NSURLRequest *_dataRequest;
}

@property (copy, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) BOOL dataLoading; // @synthesize dataLoading=_dataLoading;
@property (copy, nonatomic) NSURLRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property (nonatomic) BOOL shouldShowLoading; // @synthesize shouldShowLoading=_shouldShowLoading;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;

- (void).cxx_destruct;
- (id)createViewController;
- (void)dataError;
- (void)dataLoaded:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)didFinishLoading:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)didLoadData:(BOOL)arg1;
- (void)dispose;
- (void)hideLoadingViewController;
- (id)initWithViewName:(id)arg1;
- (void)load;
- (void)loadData:(id)arg1 postData:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)reload;
- (void)reloadWithDelayedShowLoading:(BOOL)arg1;
- (void)showLoadingViewController;

@end
