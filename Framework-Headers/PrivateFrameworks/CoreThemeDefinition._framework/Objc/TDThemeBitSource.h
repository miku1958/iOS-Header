//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface TDThemeBitSource : NSManagedObject
{
}

@property (strong, nonatomic) NSSet *assets; // @dynamic assets;
@property (strong, nonatomic) NSString *path; // @dynamic path;

- (id)fileURLWithDocument:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end

