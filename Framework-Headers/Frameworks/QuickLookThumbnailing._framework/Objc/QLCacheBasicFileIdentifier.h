//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    unsigned long long _fileId;
}

@property (readonly) unsigned long long fileId; // @synthesize fileId=_fileId;

+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileId:(unsigned long long)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;

@end
