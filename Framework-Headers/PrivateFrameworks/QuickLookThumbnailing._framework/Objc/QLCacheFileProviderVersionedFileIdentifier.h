//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class QLCacheFileProviderFileIdentifier;

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>
{
}

@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier; // @dynamic fileIdentifier;

- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithThumbnailRequest:(id)arg1;

@end

