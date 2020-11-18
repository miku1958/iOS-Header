//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, GEOPDLinkedService, NSArray, NSString, NSTimeZone;

@interface GEOLinkedService : NSObject
{
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    BOOL _checkedForBusinessHoursAlready;
    NSTimeZone *_timeZone;
    NSArray *_businessHours;
    NSString *_localizedCategoryName;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property (strong, nonatomic) NSArray *businessHours; // @synthesize businessHours=_businessHours;
@property (strong, nonatomic) NSString *localizedCategoryName; // @synthesize localizedCategoryName=_localizedCategoryName;
@property (strong, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

- (void).cxx_destruct;
- (id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2;

@end

