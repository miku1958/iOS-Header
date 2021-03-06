//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionErrorEvent : WFEvent
{
    NSString *_source;
    NSString *_destinationType;
    NSString *_errorDomain;
    NSString *_errorCode;
}

@property (copy, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property (copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property (copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property (copy, nonatomic) NSString *source; // @synthesize source=_source;

+ (Class)codableEventClass;
- (void).cxx_destruct;

@end

