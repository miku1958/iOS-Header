//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCoalesceObjectProtocol-Protocol.h>

@class NSString;

@interface BCSCoalesceObjectBloomFilterAndConfig : NSObject <BCSCoalesceObjectProtocol>
{
    NSString *_coalesceKey;
    CDUnknownBlockType _bloomFilterAndConfigCompletionBlock;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType bloomFilterAndConfigCompletionBlock; // @synthesize bloomFilterAndConfigCompletionBlock=_bloomFilterAndConfigCompletionBlock;
@property (readonly, nonatomic) NSString *coalesceKey; // @synthesize coalesceKey=_coalesceKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)completionBlock;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1 coalesceKey:(id)arg2;

@end
