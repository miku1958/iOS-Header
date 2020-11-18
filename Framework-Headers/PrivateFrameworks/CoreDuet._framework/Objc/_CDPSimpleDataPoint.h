//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>
{
    BOOL _userIsSender;
    BOOL _userIsThreadInitiator;
    NSDate *_timestamp;
    NSArray *_peopleIdentifiers;
    NSString *_title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) BOOL userIsSender; // @synthesize userIsSender=_userIsSender;
@property (nonatomic) BOOL userIsThreadInitiator; // @synthesize userIsThreadInitiator=_userIsThreadInitiator;

- (void).cxx_destruct;

@end

