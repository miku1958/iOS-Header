//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation
{
    long long _responseType;
    NSString *_reason;
}

@property (strong, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (nonatomic) long long responseType; // @synthesize responseType=_responseType;

- (void).cxx_destruct;
- (id)_newCreateAccountDialog;
- (id)init;
- (id)initWithReason:(id)arg1;
- (void)run;

@end

