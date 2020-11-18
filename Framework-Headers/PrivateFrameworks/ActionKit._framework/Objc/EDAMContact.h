//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSData, NSNumber, NSString;

@interface EDAMContact : FATObject
{
    NSString *_name;
    NSString *_id;
    NSNumber *_type;
    NSString *_photoUrl;
    NSNumber *_photoLastUpdated;
    NSData *_messagingPermit;
    NSNumber *_messagingPermitExpires;
}

@property (strong, nonatomic) NSString *id; // @synthesize id=_id;
@property (strong, nonatomic) NSData *messagingPermit; // @synthesize messagingPermit=_messagingPermit;
@property (strong, nonatomic) NSNumber *messagingPermitExpires; // @synthesize messagingPermitExpires=_messagingPermitExpires;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSNumber *photoLastUpdated; // @synthesize photoLastUpdated=_photoLastUpdated;
@property (strong, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property (strong, nonatomic) NSNumber *type; // @synthesize type=_type;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
