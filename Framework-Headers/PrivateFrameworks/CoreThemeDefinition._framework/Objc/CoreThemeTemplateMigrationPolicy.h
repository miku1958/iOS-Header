//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@interface CoreThemeTemplateMigrationPolicy : NSEntityMigrationPolicy
{
}

- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;

@end
