//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _creatorEUID;
    NSString *_bundleID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _creator;
    unsigned long long _intent;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) unsigned long long creator; // @synthesize creator=_creator;
@property (nonatomic) unsigned int creatorEUID; // @synthesize creatorEUID=_creatorEUID;
@property (nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property (strong, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

