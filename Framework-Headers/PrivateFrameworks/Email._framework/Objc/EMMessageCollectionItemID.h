//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFCacheable-Protocol.h>
#import <Email/EMCollectionItemID-Protocol.h>

@class NSString;

@interface EMMessageCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>
{
    long long _globalMessageID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long globalMessageID; // @synthesize globalMessageID=_globalMessageID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)cachedSelf;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGlobalMessageID:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

