//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, NSString;

@interface TTYHistory : NSManagedObject
{
}

@property (strong, nonatomic) NSString *callUID; // @dynamic callUID;
@property (strong, nonatomic) NSData *data; // @dynamic data;
@property (strong, nonatomic) NSNumber *needsCloudKitUpload; // @dynamic needsCloudKitUpload;
@property (strong, nonatomic) NSNumber *version; // @dynamic version;

@end
