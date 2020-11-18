//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionIcon, BBSectionInfo, BBSectionParameters, NSArray, NSDictionary, NSString;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>
{
    CDStruct_0e6e99aa _traits;
    NSString *_sectionIdentifier;
    NSString *_universalSectionIdentifier;
    BBSectionInfo *_defaultSectionInfo;
    NSString *_sectionDisplayName;
    BBSectionIcon *_sectionIcon;
    NSArray *_sortDescriptors;
    BBSectionParameters *_sectionParameters;
    NSArray *_defaultSubsectionInfos;
    NSDictionary *_subsectionDisplayNames;
    NSString *_sortKey;
    NSString *_parentSectionIdentifier;
    BOOL _syncsBulletinDismissal;
    NSDictionary *_filterDisplayNames;
}

@property (copy, nonatomic) BBSectionInfo *defaultSectionInfo; // @synthesize defaultSectionInfo=_defaultSectionInfo;
@property (copy, nonatomic) NSArray *defaultSubsectionInfos; // @synthesize defaultSubsectionInfos=_defaultSubsectionInfos;
@property (copy, nonatomic) NSDictionary *filterDisplayNames; // @synthesize filterDisplayNames=_filterDisplayNames;
@property (copy, nonatomic) NSString *parentSectionIdentifier; // @synthesize parentSectionIdentifier=_parentSectionIdentifier;
@property (copy, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property (copy, nonatomic) BBSectionIcon *sectionIcon; // @synthesize sectionIcon=_sectionIcon;
@property (copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (strong, nonatomic) BBSectionParameters *sectionParameters; // @synthesize sectionParameters=_sectionParameters;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property (copy, nonatomic) NSDictionary *subsectionDisplayNames; // @synthesize subsectionDisplayNames=_subsectionDisplayNames;
@property (readonly, nonatomic) BOOL syncsBulletinDismissal; // @synthesize syncsBulletinDismissal=_syncsBulletinDismissal;
@property (readonly, nonatomic) CDStruct_0e6e99aa traits; // @synthesize traits=_traits;
@property (copy, nonatomic) NSString *universalSectionIdentifier; // @synthesize universalSectionIdentifier=_universalSectionIdentifier;

+ (id)identityForDataProvider:(id)arg1;
+ (id)identityForRemoteDataProvider:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForDataProvider:(id)arg1 forRemoteDataProvider:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;

@end
