//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class FPItemID;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    FPItemID *_itemID;
}

@property (readonly, copy) FPItemID *itemID; // @synthesize itemID=_itemID;

+ (id)knownFileProviderIdentifiersSoFar;
+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

