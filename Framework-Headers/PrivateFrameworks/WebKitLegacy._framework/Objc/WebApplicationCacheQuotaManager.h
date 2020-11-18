//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebQuotaManager-Protocol.h>

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin *_origin;
}

- (id)initWithOrigin:(id)arg1;
- (id)origin;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (unsigned long long)usage;

@end

