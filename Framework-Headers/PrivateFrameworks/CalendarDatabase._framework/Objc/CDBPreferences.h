//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences;

@interface CDBPreferences : NSObject
{
    CalPreferences *_preferences;
}

@property (nonatomic) BOOL enableTravelAdvisoriesForAutomaticBehavior;

+ (id)shared;
- (id)init;

@end
