//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider>
{
    BOOL _errorMessageInternalOnly;
    NSString *_backgroundColor;
    NSString *_errorMessage;
    AMSUIWebNavigationBarModel *_navigationBar;
    id<AMSUIWebActionRunnable> _action;
    CDUnknownBlockType _actionBlock;
    NSString *_actionButtonTitle;
    NSString *_errorTitle;
    AMSUIWebClientContext *_context;
    struct CGSize _windowSize;
}

@property (strong, nonatomic) id<AMSUIWebActionRunnable> action; // @synthesize action=_action;
@property (copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property (strong, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property (readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property (nonatomic) BOOL errorMessageInternalOnly; // @synthesize errorMessageInternalOnly=_errorMessageInternalOnly;
@property (strong, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;

+ (id)_messageFromError:(id)arg1;
- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end

