//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem>
{
    BOOL _isUtility;
    BOOL _isScreenshot;
    BOOL _isFavorite;
    NSDate *_clsDate;
    CLLocation *_clsLocation;
    NSArray *_clsPeopleNames;
    long long _clsViewCount;
    long long _clsPlayCount;
    long long _clsShareCount;
    double _clsContentScore;
    NSData *_clsDistanceIdentity;
    NSSet *_clsSceneClassifications;
    NSArray *_clsUnprefetchedPeopleNames;
}

@property (readonly, nonatomic) double clsContentScore; // @synthesize clsContentScore=_clsContentScore;
@property (strong, nonatomic) NSDate *clsDate; // @synthesize clsDate=_clsDate;
@property (readonly, nonatomic) NSData *clsDistanceIdentity; // @synthesize clsDistanceIdentity=_clsDistanceIdentity;
@property (strong, nonatomic) CLLocation *clsLocation; // @synthesize clsLocation=_clsLocation;
@property (strong, nonatomic) NSArray *clsPeopleNames; // @synthesize clsPeopleNames=_clsPeopleNames;
@property (readonly, nonatomic) long long clsPlayCount; // @synthesize clsPlayCount=_clsPlayCount;
@property (copy, nonatomic) NSSet *clsSceneClassifications; // @synthesize clsSceneClassifications=_clsSceneClassifications;
@property (readonly, nonatomic) long long clsShareCount; // @synthesize clsShareCount=_clsShareCount;
@property (readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames; // @synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames;
@property (readonly, nonatomic) long long clsViewCount; // @synthesize clsViewCount=_clsViewCount;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property (readonly, nonatomic) BOOL isScreenshot; // @synthesize isScreenshot=_isScreenshot;
@property (readonly, nonatomic) BOOL isUtility; // @synthesize isUtility=_isUtility;
@property (readonly, nonatomic) NSDate *localDate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *peopleNames;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *universalDate;

+ (id)contextForItems:(id)arg1;
+ (id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
+ (id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2;
- (void).cxx_destruct;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
- (double)scoreWithContext:(id)arg1;

@end

