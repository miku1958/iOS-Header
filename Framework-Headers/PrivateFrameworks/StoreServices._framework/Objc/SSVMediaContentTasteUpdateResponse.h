//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding>
{
    BOOL _cachedResponse;
    NSArray *_contentTasteItems;
    NSDate *_expirationDate;
    unsigned long long _responseRevisionID;
}

@property (nonatomic, getter=isCachedResponse) BOOL cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property (copy, nonatomic) NSArray *contentTasteItems; // @synthesize contentTasteItems=_contentTasteItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long responseRevisionID; // @synthesize responseRevisionID=_responseRevisionID;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;

@end

