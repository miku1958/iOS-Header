//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC12UpNextWidget12ModelStorage : NSObject
{
    MISSING_TYPE *alarms;
    MISSING_TYPE *events;
    MISSING_TYPE *reminders;
}

@property (nonatomic, copy) NSArray *alarms; // @synthesize alarms;
@property (nonatomic, copy) NSArray *events; // @synthesize events;
@property (nonatomic, copy) NSArray *reminders; // @synthesize reminders;

+ (BOOL)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)clone;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

