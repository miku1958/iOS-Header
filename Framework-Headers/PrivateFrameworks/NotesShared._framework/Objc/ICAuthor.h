//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ICGroup, ICPerson, NSNumber, NSString, UIImage;

@interface ICAuthor : NSManagedObject
{
}

@property (nonatomic) unsigned long long authorStatus;
@property (strong, nonatomic) ICGroup *group; // @dynamic group;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSString *name;
@property (strong, nonatomic) ICPerson *person; // @dynamic person;
@property (strong, nonatomic) NSNumber *status; // @dynamic status;


@end
