//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UpNextWidget/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSDate, NSString, NSURL;

@interface _TtC12UpNextWidget8Reminder : NSObject <NSSecureCoding>
{
    MISSING_TYPE *title;
    MISSING_TYPE *dueDate;
    MISSING_TYPE *listColor;
    MISSING_TYPE *externalURL;
    MISSING_TYPE *notes;
    MISSING_TYPE *location;
}

@property (nonatomic, strong) NSDate *dueDate; // @synthesize dueDate;
@property (nonatomic, strong) NSURL *externalURL; // @synthesize externalURL;
@property (nonatomic, strong) struct CGColor *listColor; // @synthesize listColor;
@property (nonatomic, copy) NSString *location; // @synthesize location;
@property (nonatomic, copy) NSString *notes; // @synthesize notes;
@property (nonatomic, readonly) NSString *shallowDescription;
@property (nonatomic, copy) NSString *title; // @synthesize title;

+ (BOOL)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dueDate:(id)arg2 listColor:(struct CGColor *)arg3 externalURL:(id)arg4;

@end
