//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, PGManager;

@interface PGFeatureVectorGenerator : NSObject
{
    BOOL _isDryTesting;
    NSDate *_localDate;
    CLLocation *_location;
    NSArray *_peopleNames;
    PGManager *_manager;
}

@property BOOL isDryTesting; // @synthesize isDryTesting=_isDryTesting;
@property (strong, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, weak) PGManager *manager; // @synthesize manager=_manager;
@property (copy, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;

+ (id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5;
- (void).cxx_destruct;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithManager:(id)arg1;

@end
