//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject
{
}

@property (strong, nonatomic) TDSchemaCategory *category; // @dynamic category;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSSet *parts; // @dynamic parts;
@property BOOL published; // @dynamic published;

+ (unsigned long long)elementDefinitionCountWithSchema:(id)arg1;
+ (const CDStruct_22c2ae3f *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (const CDStruct_22c2ae3f *)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2;
- (id)displayName;
- (id)previewImage;

@end
