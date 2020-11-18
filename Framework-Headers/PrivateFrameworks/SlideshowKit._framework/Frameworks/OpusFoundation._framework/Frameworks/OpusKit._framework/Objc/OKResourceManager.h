//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, OFLRUCache, OKPresentationViewControllerProxy;

@interface OKResourceManager : NSObject
{
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}

- (void)dealloc;
- (id)initWithPresentationViewController:(id)arg1;
- (id)resourceLoaderForURL:(id)arg1;
- (id)resourceWithURL:(id)arg1 copy:(BOOL)arg2;

@end
