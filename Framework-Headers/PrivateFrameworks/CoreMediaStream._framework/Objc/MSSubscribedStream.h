//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCoding-Protocol.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding>
{
    NSString *_streamID;
    NSString *_ctag;
}

@property (strong, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property (strong, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;

+ (id)subscribedStreamWithStreamID:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamID:(id)arg1;

@end
