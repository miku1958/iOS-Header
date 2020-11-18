//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PVNotification : NSObject
{
    NSString *_name;
    id _details;
}

@property (readonly, nonatomic) id details; // @synthesize details=_details;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)notificationWithName:(id)arg1;
+ (id)notificationWithName:(id)arg1 details:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

