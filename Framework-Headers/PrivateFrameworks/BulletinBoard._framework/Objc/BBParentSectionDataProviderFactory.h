//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBSectionIdentity-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding>
{
    BBSectionInfo *_sectionInfo;
    NSString *_universalSectionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) BBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalSectionIdentifier; // @synthesize universalSectionIdentifier=_universalSectionIdentifier;

+ (id)factoryFromSectionInfo:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)dataProviders;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;

@end

