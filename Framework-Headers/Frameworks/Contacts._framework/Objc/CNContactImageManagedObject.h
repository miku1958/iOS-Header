//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CNContactImageManagedObject : NSManagedObject
{
}

@property (strong, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property (strong, nonatomic) NSString *cropRectString; // @dynamic cropRectString;
@property (strong, nonatomic) NSString *displayString; // @dynamic displayString;
@property (strong, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property (strong, nonatomic) NSData *imageData; // @dynamic imageData;
@property (strong, nonatomic) NSDate *lastUsedDate; // @dynamic lastUsedDate;
@property (strong, nonatomic) NSNumber *source; // @dynamic source;
@property (strong, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property (strong, nonatomic) NSString *variant; // @dynamic variant;

+ (CDUnknownBlockType)managedObjectToContactImageTransform;
- (id)cropRectStringFromCGRect:(struct CGRect)arg1;
- (void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2;
- (void)updateWithContactImage:(id)arg1;

@end
