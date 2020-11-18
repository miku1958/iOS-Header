//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class NSNumber, NSString, NSURL;

@interface EKAttachment : EKObject
{
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *fileFormat;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) BOOL isBinary;
@property (readonly, nonatomic) NSURL *localURL;

- (long long)compareFileNames:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
