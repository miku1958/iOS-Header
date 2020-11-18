//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WKUserContentController;

@interface SFContentBlockerManager : NSObject
{
    id _extensionMatchingContext;
    WKUserContentController *_userContentController;
    NSArray *_extensions;
}

@property (readonly, nonatomic) NSArray *extensions;
@property (readonly, nonatomic) WKUserContentController *userContentController;

+ (id)_contentBlockerLoaderConnection;
+ (id)contentBlockerStore;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginContentBlockerDiscovery;
- (id)displayNameForExtension:(id)arg1;
- (BOOL)extensionIsEnabled:(id)arg1;
- (void)reloadUserContentController;
- (void)setExtension:(id)arg1 isEnabled:(BOOL)arg2;

@end

