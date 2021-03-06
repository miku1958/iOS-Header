//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface QLThumbnailVersion : NSObject <NSSecureCoding>
{
    NSDate *_modificationDate;
    unsigned long long _fileSize;
    NSString *_generatorID;
    NSString *_generatorVersion;
    NSData *_versionIdentifier;
    unsigned long long _ino;
}

@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, getter=isDefaultVersion) BOOL defaultVersion;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property (copy) NSString *generatorID; // @synthesize generatorID=_generatorID;
@property (copy) NSString *generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property unsigned long long ino; // @synthesize ino=_ino;
@property (copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (copy) NSData *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)getGeneratorID:(id *)arg1 version:(id *)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFPItem:(id)arg1 automaticallyGenerated:(BOOL)arg2;
- (id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 ino:(unsigned long long)arg4 generatorID:(id)arg5 generatorVersion:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;

@end

