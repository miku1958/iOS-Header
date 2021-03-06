//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/PARSearchRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PARSearchReplayRequest : PARSearchRequest <NSSecureCoding>
{
    NSString *_replaySearchURL;
    NSDictionary *_replayHeaderItems;
}

@property (copy, nonatomic) NSDictionary *replayHeaderItems; // @synthesize replayHeaderItems=_replayHeaderItems;
@property (copy, nonatomic) NSString *replaySearchURL; // @synthesize replaySearchURL=_replaySearchURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

