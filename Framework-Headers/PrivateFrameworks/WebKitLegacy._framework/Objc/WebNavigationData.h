//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject
{
    WebNavigationDataPrivate *_private;
}

- (id)clientRedirectSource;
- (void)dealloc;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6;
- (id)originalRequest;
- (id)response;
- (id)title;
- (id)url;

@end

