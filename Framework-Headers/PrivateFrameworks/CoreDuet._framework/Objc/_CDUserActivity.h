//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface _CDUserActivity : NSObject <NSSecureCoding>
{
    NSString *_bundleId;
    NSString *_type;
    NSString *_title;
    NSDate *_date;
    NSDictionary *_payload;
}

@property (copy) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (copy) NSDate *date; // @synthesize date=_date;
@property (copy) NSDictionary *payload; // @synthesize payload=_payload;
@property (copy) NSString *title; // @synthesize title=_title;
@property (copy) NSString *type; // @synthesize type=_type;

+ (id)createFromUserActivity:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

