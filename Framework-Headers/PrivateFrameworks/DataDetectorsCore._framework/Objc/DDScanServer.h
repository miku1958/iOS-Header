//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDScanServer : NSObject
{
    long long _options;
    double _timeout;
}

@property (nonatomic) long long options; // @synthesize options=_options;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

+ (void)appendWatchOSLinksToString:(id)arg1;
- (id)init;
- (id)scanString:(id)arg1;
- (void)scanString:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end

