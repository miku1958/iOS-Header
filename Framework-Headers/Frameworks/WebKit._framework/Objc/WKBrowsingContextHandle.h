//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>
{
    ObjectIdentifier_8136369e _pageID;
}

@property (readonly, nonatomic, getter=_pageID) ObjectIdentifier_8136369e pageID; // @synthesize pageID=_pageID;

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (id)_initWithPageID:(ObjectIdentifier_8136369e)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
