//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSHTTPURLRequestParameters : NSObject
{
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned long long pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

