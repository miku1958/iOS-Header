//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, PSSpecifier;

@protocol PSTopLevelController

@property (nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch;

- (void)selectDefaultCategoryForced:(BOOL)arg1;
- (PSSpecifier *)specifierForBundle:(NSString *)arg1;
@end
