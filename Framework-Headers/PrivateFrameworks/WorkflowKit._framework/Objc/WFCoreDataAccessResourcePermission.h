//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, WFCoreDataWorkflow;

@interface WFCoreDataAccessResourcePermission : NSManagedObject
{
}

@property (strong, nonatomic) NSData *data; // @dynamic data;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong, nonatomic) WFCoreDataWorkflow *shortcut; // @dynamic shortcut;

+ (id)fetchRequest;

@end

