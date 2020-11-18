//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSRequestOptions : NSObject
{
    BOOL _usesBackgroundSession;
    BOOL _allowsCellularAccess;
    BOOL _allowsPowerNapScheduling;
    NSString *_applicationBundleID;
    NSString *_applicationSecondaryID;
    NSString *_containerID;
    NSArray *_zoneNames;
    long long _qualityOfService;
    NSDictionary *_MMCSRequestOptions;
}

@property (strong, nonatomic) NSDictionary *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property (strong, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property (strong, nonatomic) NSString *applicationSecondaryID; // @synthesize applicationSecondaryID=_applicationSecondaryID;
@property (strong, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property (strong, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSOptions;
- (id)description;
- (id)initWithOperation:(id)arg1;

@end

