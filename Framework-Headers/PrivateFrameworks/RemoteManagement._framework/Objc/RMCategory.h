//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSSet, NSString;

@interface RMCategory : RMUniquedManagedObject
{
}

@property (strong, nonatomic) NSSet *apps; // @dynamic apps;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;

+ (id)createOrReturnCategoryWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end

