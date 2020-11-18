//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarFoundation/NSObject-Protocol.h>

@class CalLogEnvelope, NSDictionary;
@protocol CalLogFormatter;

@protocol CalLogWriter <NSObject>

@property (strong, nonatomic) id<CalLogFormatter> formatter;

- (BOOL)flush;
- (id)initWithParameters:(NSDictionary *)arg1;
- (void)write:(CalLogEnvelope *)arg1;
@end
