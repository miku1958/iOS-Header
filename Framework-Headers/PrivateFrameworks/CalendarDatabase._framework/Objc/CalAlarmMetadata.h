//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDatabase/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSSecureCoding>
{
    NSArray *_attach;
    NSArray *_attendee;
    NSString *_description;
    NSString *_summary;
}

@property (strong) NSArray *attach; // @synthesize attach=_attach;
@property (strong) NSArray *attendee; // @synthesize attendee=_attendee;
@property (strong) NSString *description; // @synthesize description=_description;
@property (strong) NSString *summary; // @synthesize summary=_summary;

+ (id)metadataWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToAlarm:(id)arg1;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSAlarm:(id)arg1;

@end

