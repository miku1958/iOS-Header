//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, VUIImageDataManagedObject;

__attribute__((visibility("hidden")))
@interface VUIImageInfoManagedObject : NSManagedObject
{
}

@property (nonatomic) double canonicalHeight; // @dynamic canonicalHeight;
@property (nonatomic) double canonicalWidth; // @dynamic canonicalWidth;
@property (strong, nonatomic) VUIImageDataManagedObject *imageData; // @dynamic imageData;
@property (nonatomic) long long imageType; // @dynamic imageType;
@property (copy, nonatomic) NSString *urlFormat; // @dynamic urlFormat;

+ (id)fetchRequest;

@end

