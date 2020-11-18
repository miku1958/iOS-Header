//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>
{
    BOOL _supportsSystemDrag;
    unsigned int _sessionIdentifier;
    int _processIdentifier;
    NSString *_sceneIdentifier;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property (nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) BOOL supportsSystemDrag; // @synthesize supportsSystemDrag=_supportsSystemDrag;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

