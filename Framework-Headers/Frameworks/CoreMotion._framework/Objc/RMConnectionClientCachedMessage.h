//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface RMConnectionClientCachedMessage : NSObject
{
    NSString *_name;
    NSData *_data;
    CDUnknownBlockType _streamingCallback;
}

@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) CDUnknownBlockType streamingCallback; // @synthesize streamingCallback=_streamingCallback;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2 streamingCallback:(CDUnknownBlockType)arg3;

@end

