//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSDate;

@interface SPSearchResultMarker : NSObject <NSSecureCoding>
{
    NSDate *_date;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

