//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVItem, CoreDAVXMLData, NSCache, NSData, NSDictionary, NSSet, NSURL;

@protocol CoreDAVItem <NSObject>
+ (NSDictionary *)copyParseRules;
+ (NSCache *)parseRuleCache;
- (NSDictionary *)copyParseRules;
- (void)parserFoundAttributes:(NSSet *)arg1;
- (void)parserFoundPayload:(NSData *)arg1;
- (void)parserFoundUnrecognizedElement:(CoreDAVItem *)arg1;
- (void)parserSuggestsBaseURL:(NSURL *)arg1;
- (BOOL)validate;
- (void)write:(CoreDAVXMLData *)arg1;
@end
