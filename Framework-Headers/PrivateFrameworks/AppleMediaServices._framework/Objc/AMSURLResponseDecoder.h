//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSResponseDecoding-Protocol.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding>
{
    NSIndexSet *_allowedStatusCodes;
    NSSet *_allowedContentTypes;
}

@property (copy, nonatomic) NSSet *allowedContentTypes; // @synthesize allowedContentTypes=_allowedContentTypes;
@property (copy, nonatomic) NSIndexSet *allowedStatusCodes; // @synthesize allowedStatusCodes=_allowedStatusCodes;

- (void).cxx_destruct;
- (id)init;
- (id)resultFromResult:(id)arg1 error:(id *)arg2;

@end
