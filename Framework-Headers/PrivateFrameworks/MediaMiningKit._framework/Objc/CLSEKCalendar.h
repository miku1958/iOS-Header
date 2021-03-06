//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding>
{
    BOOL _hasSharees;
    NSSet *_shareesAndOwner;
    NSString *_calendarIdentifier;
}

@property (readonly) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (readonly) BOOL hasSharees; // @synthesize hasSharees=_hasSharees;
@property (readonly) NSSet *shareesAndOwner; // @synthesize shareesAndOwner=_shareesAndOwner;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

