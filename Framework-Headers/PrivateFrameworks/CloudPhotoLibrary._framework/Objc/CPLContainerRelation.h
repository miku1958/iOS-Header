//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _keyAsset;
    NSString *_containerIdentifier;
    long long _position;
}

@property (copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (nonatomic, getter=isKeyAsset) BOOL keyAsset; // @synthesize keyAsset=_keyAsset;
@property (nonatomic) long long position; // @synthesize position=_position;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)proposedIdentifierForItemIdentifier:(id)arg1;
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1;

@end

