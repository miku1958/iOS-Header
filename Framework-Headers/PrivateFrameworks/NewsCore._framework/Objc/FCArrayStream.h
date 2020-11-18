//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class NSArray, NSString;

@interface FCArrayStream : NSObject <FCStreaming>
{
    NSArray *_array;
    unsigned long long _index;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

