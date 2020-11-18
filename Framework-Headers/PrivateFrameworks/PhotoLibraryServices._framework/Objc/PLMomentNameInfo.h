//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PLRevGeoCompoundNameInfo;

@interface PLMomentNameInfo : NSObject
{
    BOOL _locationInfoIsValid;
    PLRevGeoCompoundNameInfo *__primaryNameInfo;
    PLRevGeoCompoundNameInfo *__secondaryNameInfo;
    NSArray *__orderedNames;
}

@property (strong, nonatomic, setter=_setOrderedNames:) NSArray *_orderedNames; // @synthesize _orderedNames=__orderedNames;
@property (strong, nonatomic) PLRevGeoCompoundNameInfo *_primaryNameInfo; // @synthesize _primaryNameInfo=__primaryNameInfo;
@property (strong, nonatomic) PLRevGeoCompoundNameInfo *_secondaryNameInfo; // @synthesize _secondaryNameInfo=__secondaryNameInfo;

+ (id)_localizedNameForName:(id)arg1;
- (id)componentsForPrimaryTitle;
- (id)componentsForSecondaryTitle;
- (void)dealloc;
- (id)initWithMoment:(id)arg1;
- (id)initWithMomentList:(id)arg1;
- (id)localizedPrimaryTitle;
- (BOOL)locationInfoIsValid;

@end

