//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUDiscoverabilitySignal : NSObject
{
    NSString *_identifier;
    NSString *_context;
}

@property (readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)osBuild;
- (void).cxx_destruct;
- (id)_discoverabilitySignalsStream;
- (void)donateSignalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;

@end
