//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject
{
    NSNumber *_businessId;
    NSString *_email;
    NSNumber *_role;
    NSNumber *_status;
    NSNumber *_requesterId;
    NSNumber *_fromWorkChat;
    NSNumber *_created;
}

@property (strong, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;
@property (strong, nonatomic) NSNumber *created; // @synthesize created=_created;
@property (strong, nonatomic) NSString *email; // @synthesize email=_email;
@property (strong, nonatomic) NSNumber *fromWorkChat; // @synthesize fromWorkChat=_fromWorkChat;
@property (strong, nonatomic) NSNumber *requesterId; // @synthesize requesterId=_requesterId;
@property (strong, nonatomic) NSNumber *role; // @synthesize role=_role;
@property (strong, nonatomic) NSNumber *status; // @synthesize status=_status;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
