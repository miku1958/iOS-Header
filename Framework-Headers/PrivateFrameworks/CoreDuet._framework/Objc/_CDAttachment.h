//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_creationDate;
    NSString *_uti;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSString *_photoLocalIdentifier;
    NSNumber *_size;
    NSURL *_contentURL;
    NSString *_contentText;
}

@property (strong) NSUUID *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property (strong) NSString *contentText; // @synthesize contentText=_contentText;
@property (strong) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property (strong) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong) NSString *photoLocalIdentifier; // @synthesize photoLocalIdentifier=_photoLocalIdentifier;
@property (strong) NSNumber *size; // @synthesize size=_size;
@property (strong) NSString *uti; // @synthesize uti=_uti;

+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

