//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider>
{
    NSString *_backgroundColor;
    AMSUIWebNavigationBarModel *_navigationBar;
    AMSUIWebClientContext *_context;
    struct CGSize _windowSize;
}

@property (readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;

- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end

