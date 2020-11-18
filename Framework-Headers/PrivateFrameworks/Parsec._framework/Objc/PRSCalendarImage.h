//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSImage.h>

@class NSDate, NSString;

@interface PRSCalendarImage : PRSImage
{
    NSString *_bundleID;
    NSDate *_date;
}

@property (readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly) NSDate *date; // @synthesize date=_date;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 date:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
