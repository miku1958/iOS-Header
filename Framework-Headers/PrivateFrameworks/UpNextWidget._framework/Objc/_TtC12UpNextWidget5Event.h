//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString, NSURL, _TtC12UpNextWidget8Location;

@interface _TtC12UpNextWidget5Event : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *startDate;
    MISSING_TYPE *endDate;
    MISSING_TYPE *calendarColor;
    MISSING_TYPE *externalURL;
    MISSING_TYPE *location;
    MISSING_TYPE *transportType;
}

@property (nonatomic, strong) struct CGColor *calendarColor; // @synthesize calendarColor;
@property (nonatomic, copy) NSDate *endDate; // @synthesize endDate;
@property (nonatomic, copy) NSURL *externalURL; // @synthesize externalURL;
@property (nonatomic, strong) _TtC12UpNextWidget8Location *location; // @synthesize location;
@property (nonatomic, readonly) NSString *shallowDescription;
@property (nonatomic, copy) NSDate *startDate; // @synthesize startDate;
@property (nonatomic, copy) NSString *title; // @synthesize title;
@property (nonatomic) int transportType; // @synthesize transportType;

+ (BOOL)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dateInterval:(id)arg2 calendarColor:(struct CGColor *)arg3 externalURL:(id)arg4 transportType:(int)arg5;

@end

