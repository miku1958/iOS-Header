//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_b2f7915a _pageProxyID;
    ObjectIdentifier_8136369e _webPageID;
}

@property (readonly, nonatomic, getter=_pageProxyID) ObjectIdentifier_b2f7915a pageProxyID; // @synthesize pageProxyID=_pageProxyID;
@property (readonly, nonatomic, getter=_webPageID) ObjectIdentifier_8136369e webPageID; // @synthesize webPageID=_webPageID;

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (id)_initWithPage:(NakedRef_f43bc9c8)arg1;
- (id)_initWithPageProxy:(NakedRef_0c67ce5b)arg1;
- (id)_initWithPageProxyID:(ObjectIdentifier_b2f7915a)arg1 andWebPageID:(ObjectIdentifier_8136369e)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

