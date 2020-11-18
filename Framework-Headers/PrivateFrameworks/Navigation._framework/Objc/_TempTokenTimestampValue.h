//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatTokenTimeStampValue-Protocol.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue>
{
    double _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *formatPattern; // @synthesize formatPattern=_formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
