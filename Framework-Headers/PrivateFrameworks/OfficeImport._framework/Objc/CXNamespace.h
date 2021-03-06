//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject
{
    const char *mUri;
    struct _xmlDoc *mDocument;
    struct _xmlNs *mDocumentNamespace;
    CXNamespace *mFallbackNamespace;
}

@property (strong, nonatomic) CXNamespace *fallbackNamespace; // @synthesize fallbackNamespace=mFallbackNamespace;

+ (void)clearRegisteredNamespaces;
+ (BOOL)isNamespaceSupported:(const char *)arg1;
+ (BOOL)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;
+ (BOOL)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;
+ (void)registerNamespace:(id)arg1;
- (void).cxx_destruct;
- (BOOL)containsAttribute:(struct _xmlAttr *)arg1;
- (BOOL)containsNode:(struct _xmlNode *)arg1;
- (const char *)fallbackUri;
- (id)init;
- (id)initUnsupportedNsWithUri:(const char *)arg1;
- (id)initWithUri:(const char *)arg1;
- (id)initWithUri:(const char *)arg1 fallbackNamespace:(id)arg2;
- (const char *)uri;

@end

